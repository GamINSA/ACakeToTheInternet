#pragma once

///<summary>Repr�sente la liste des �v�nements existant dans les qu�tes.
///<para>Pour ajouter un �v�nement, ajoutez simplement le nom de la qu�te dans la liste</para>
///<para>Attention QUESTEVENT_Null et QUESTEVENT_NbEvents (nombre total d'�v�nements) doivent absolument rester en premier et dernier sous peine d'enl�vement du v�hicule!</para></summary>
typedef enum {	QUESTEVENT_Null,
				QUESTEVENT_MonsterBeaten,QUESTEVENT_MonsterBeaten_Toinard,
				QUESTEVENT_MapDiscovered_Bourges,
				QUESTEVENT_Count
			 }QuestEvent;

