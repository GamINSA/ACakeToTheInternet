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
	///<summary>Ajoute le nouvel évènement à vérifier.</summary>
	void AddEventToHandle(QuestEvent EventToHandle,int QuestID);

	///<summary>Cette methode doit être appelée dès qu'un événement s'est produit
	///<para>Ces quêtes mettront à jour les champs du personnage en ajoutant les récompenses de quêtes...</para></summary>
	void EventHappened(QuestEvent NewEvent);


	///<summary>Ajoute une quête aux quêtes en cours</summary>
	void AddQuest(const Quest& q);
	///<summary>Supprime une quête des quêtes en cours</summary>
	void RemoveQuest(const Quest& q);

private:
	///<summary>Liste des quêtes en attente de la validation de chaque événement
	///<para>La valeur int stockée est L'ID de la quête</para></summary>
	forward_list<int> EventsListened[QUESTEVENT_Count];

	///<summary>Quêtes en cours</summary>
	forward_list<Quest> p_Quest;

	///<summary>Retourne la quête associée à l'ID demandé. Cet ID doit exister</summary>
	Quest& GetQuestById(int ID);
};

