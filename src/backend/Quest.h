#pragma once
#include <iostream>
#include <vector>
#include "QuestStep.h"
#include "Serializer.h"

using namespace std;
class Quest
{
public:

	///<summary>Fonction utilitaire d'ajout d'�tapes dans la qu�te.
	///<para>Attention, dans la version finale, le programme lira les donn�es � partir de fichiers s�rialis�s,
	///Cette fonction devra donc �tre supprim�e!</para></summary>
	void AddQuestStep(QuestStep QS);

	///<summary>Initialisation directe de la classe quest avec le flux de donn�es.
	///<para>C'est la meilleur methode pour cr�er un objet.</para></summary>
	Quest(istream& ist);
	Quest();
	~Quest();
	///<summary>Retourne l'ID de la qu�te courante.</summary>
	int GetId();

	///<summary>Fonction utilitaire d'ajout d'�tapes dans la qu�te.
	///<para>Attention, dans la version finale, le programme lira les donn�es � partir de fichiers s�rialis�s,
	///Cette fonction devra donc �tre supprim�e!</para></summary>
	void SetId(int ID);

	///<summary>Met � jour la qu�te en faisant l'�v�nement QEvent.
	///<para>Retourne si la qu�te est termin�e.</para></summary>
	bool UpdateQuest(QuestEvent QEvent,ItemManager ItM);
private:
	friend class boost::serialization::access;
	///<summary>S�rialise un personnage</summary>
	template<typename T>
	void serialize(T & ar, const unsigned int version);

	///<summary>ID de la qu�te courante</summary>
	int p_QuestID;

	///<summary>Tableau d'�tapes</summary>
	vector<QuestStep> p_Steps;

	///<summary>Passe la qu�te � l'�tape suivante.
	///<para>Retourne si la qu�te est termin�e</para></summary>
	bool GoToNextStep(ItemManager ItM);
};

bool operator==(Quest q1, Quest q2);

template<typename T>
inline void Quest::serialize(T & ar, const unsigned int version)
{
	ar & p_QuestID;
	ar & p_Steps;
}