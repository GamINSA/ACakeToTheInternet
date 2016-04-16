#pragma once

///<summary>Représente la liste des événements existant dans les quêtes.
///<para>Pour ajouter un événement, ajoutez simplement le nom de la quête dans la liste</para>
///<para>Attention QUESTEVENT_Null et QUESTEVENT_NbEvents (nombre total d'événements) doivent absolument rester en premier et dernier sous peine d'enlévement du véhicule!</para></summary>
typedef enum {	QUESTEVENT_Null,
				QUESTEVENT_MonsterBeaten,QUESTEVENT_MonsterBeaten_Toinard,
				QUESTEVENT_MapDiscovered_Bourges,
				QUESTEVENT_Count
			 }QuestEvent;

