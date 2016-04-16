#pragma once
#include <forward_list>
#include "QuestEvent.h"
#include "Quest.h"
#include "Hero.h"
using namespace std;
class QuestManager
{
public:
	QuestManager(string path = NULL);

	~QuestManager();
	///<summary>Ajoute le nouvel �v�nement � v�rifier.</summary>
	void AddEventToHandle(QuestEvent EventToHandle,int QuestID);

	///<summary>Cette methode doit �tre appel�e d�s qu'un �v�nement s'est produit
	///<para>Ces qu�tes mettront � jour les champs du personnage en ajoutant les r�compenses de qu�tes...</para></summary>
	void EventHappened(QuestEvent NewEvent);


	///<summary>Ajoute une qu�te aux qu�tes en cours</summary>
	void AddQuest(const Quest& q);
	///<summary>Supprime une qu�te des qu�tes en cours</summary>
	void RemoveQuest(const Quest& q);

private:
	///<summary>Liste des qu�tes en attente de la validation de chaque �v�nement
	///<para>La valeur int stock�e est L'ID de la qu�te</para></summary>
	forward_list<int> EventsListened[QUESTEVENT_Count];

	///<summary>Qu�tes en cours</summary>
	forward_list<Quest> p_Quest;

	///<summary>Retourne la qu�te associ�e � l'ID demand�. Cet ID doit exister</summary>
	Quest& GetQuestById(int ID);
};

