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
	///<summary>Fonction utilitaire d'ajout d'objectifs dans l'étape
	///<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
	///Cette fonction devra donc être supprimée!</para></summary>
	void AddObjective(string text,unsigned int amount,QuestEvent Event);

	QuestStep();
	~QuestStep();
	///<summary>Met à jour l'étape en faisant l'événement QEvent.
	///<para>Retourne si l'étape est terminée.</para></summary>
	bool UpdateQuestStep(QuestEvent QEvent);
	void EarnReward(ItemManager ItM);
private:

	friend class boost::serialization::access;
	///<summary>Sérialise un personnage</summary>
	template<typename T>
	void serialize(T & ar, const unsigned int version);

	// Note : Il aurait été plus propre de rassembler les trois tableaux suivants dans une classe objectif

	///<summary>Etats validation des objectifs
	///<para>Une valeur &lt;0 signifie validé.</para>
	///<para>La valeur d'initialisation est donc le nombre de fois qu'il reste à faire l'action spécifique</para>
	///</summary>
	vector<unsigned int> p_ObjCount;

	///<summary>Tableau de description des objectifs.</summary>
	vector<string> p_ObjStr;

	///<summary>Tableau d'actions à réaliser pour valider l'objectif.
	///<para>L'implémentation actuelle est une énumération.</para>
	///</summary>
	vector<QuestEvent> p_ObjEvents;

	///<summary>€£$ gagnés en finissant l'étape</summary>
	unsigned int p_MoneyReward;
	///<summary>Tableau de ressources gagnées en finissant l'étape (&lt;référence,quantité&gt;)</summary>
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