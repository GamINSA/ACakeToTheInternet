#pragma once
#include "QuestEvent.h"
#include <forward_list>
#include <vector>
#include <map>
#include "Item.h"
#include "ItemManager.h"

using namespace std;
class QuestStep
{
public:
	///<summary>Fonction utilitaire d'ajout d'objectifs dans l'�tape
	///<para>Attention, dans la version finale, le programme lira les donn�es � partir de fichiers s�rialis�s,
	///Cette fonction devra donc �tre supprim�e!</para></summary>
	void AddObjective(string text,unsigned int amount,QuestEvent Event);

	QuestStep();
	~QuestStep();
	///<summary>Met � jour l'�tape en faisant l'�v�nement QEvent.
	///<para>Retourne si l'�tape est termin�e.</para></summary>
	bool UpdateQuestStep(QuestEvent QEvent);
	void EarnReward(ItemManager ItM);
private:

	friend class boost::serialization::access;
	///<summary>S�rialise un personnage</summary>
	template<typename T>
	void serialize(T & ar, const unsigned int version);

	// Note : Il aurait �t� plus propre de rassembler les trois tableaux suivants dans une classe objectif

	///<summary>Etats validation des objectifs
	///<para>Une valeur &lt;0 signifie valid�.</para>
	///<para>La valeur d'initialisation est donc le nombre de fois qu'il reste � faire l'action sp�cifique</para>
	///</summary>
	vector<unsigned int> p_ObjCount;

	///<summary>Tableau de description des objectifs.</summary>
	vector<string> p_ObjStr;

	///<summary>Tableau d'actions � r�aliser pour valider l'objectif.
	///<para>L'impl�mentation actuelle est une �num�ration.</para>
	///</summary>
	vector<QuestEvent> p_ObjEvents;

	///<summary>��$ gagn�s en finissant l'�tape</summary>
	unsigned int p_MoneyReward;
	///<summary>Tableau de ressources gagn�es en finissant l'�tape (&lt;r�f�rence,quantit�&gt;)</summary>
	vector<std::pair<Item, unsigned int>> p_RessourcesReward;
};

template<typename T>
inline void QuestStep::serialize(T & ar, const unsigned int version)
{
	ar & p_MoneyReward;
	ar & p_RessourcesReward;
	ar &p_ObjCount;
	ar & p_ObjEvents;
	ar & p_ObjStr;
}