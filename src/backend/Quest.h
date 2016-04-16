#pragma once
#include <iostream>
#include <vector>
#include "QuestStep.h"
#include "Serializer.h"

using namespace std;
class Quest
{
public:

	///<summary>Fonction utilitaire d'ajout d'étapes dans la quête.
	///<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
	///Cette fonction devra donc être supprimée!</para></summary>
	void AddQuestStep(QuestStep QS);

	///<summary>Initialisation directe de la classe quest avec le flux de données.
	///<para>C'est la meilleur methode pour créer un objet.</para></summary>
	Quest(istream& ist);
	Quest();
	~Quest();
	///<summary>Retourne l'ID de la quête courante.</summary>
	int GetId();

	///<summary>Fonction utilitaire d'ajout d'étapes dans la quête.
	///<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
	///Cette fonction devra donc être supprimée!</para></summary>
	void SetId(int ID);

	///<summary>Met à jour la quête en faisant l'évènement QEvent.
	///<para>Retourne si la quête est terminée.</para></summary>
	bool UpdateQuest(QuestEvent QEvent,ItemManager ItM);
private:
	friend class boost::serialization::access;
	///<summary>Sérialise un personnage</summary>
	template<typename T>
	void serialize(T & ar, const unsigned int version);

	///<summary>ID de la quête courante</summary>
	int p_QuestID;

	///<summary>Tableau d'étapes</summary>
	vector<QuestStep> p_Steps;

	///<summary>Passe la quête à l'étape suivante.
	///<para>Retourne si la quête est terminée</para></summary>
	bool GoToNextStep(ItemManager ItM);
};

bool operator==(Quest q1, Quest q2);

template<typename T>
inline void Quest::serialize(T & ar, const unsigned int version)
{
	ar & p_QuestID;
	ar & p_Steps;
}