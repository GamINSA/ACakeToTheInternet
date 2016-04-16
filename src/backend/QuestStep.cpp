#include "stdafx.h"
#include "QuestStep.h"


void QuestStep::AddObjective(string text, unsigned int amount, QuestEvent Event)
{
	p_ObjStr.push_back(text);
	p_ObjCount.push_back(amount);
	p_ObjEvents.push_back(Event);
}

QuestStep::QuestStep() :p_MoneyReward(0), p_ObjCount(), p_ObjEvents(), p_ObjStr(), p_RessourcesReward()
{
}


QuestStep::~QuestStep()
{
}

bool QuestStep::UpdateQuestStep(QuestEvent QEvent)
{
	for (unsigned int i = 0; i < p_ObjEvents.size();++i)
		if (p_ObjEvents[i] == QEvent) // Si on est dans le bon évent
			if (--(p_ObjCount[i]) == 0) // Si l'objectif est terminé
			{
				// On le supprime direct, parce qu'on est pas des tatas
				p_ObjCount.erase(p_ObjCount.begin());
				p_ObjEvents.erase(p_ObjEvents.begin());
				p_ObjStr.erase(p_ObjStr.begin());
				return p_ObjEvents.empty(); // Et on retourne si l'étape est terminée
			}
	return false; // L'étape n'est pas terminée
}

void QuestStep::EarnReward(ItemManager ItM)
{
	ItM.EarnMoney(p_MoneyReward);
	for (unsigned int i = 0;i < p_RessourcesReward.size();++i)
		ItM.AddItem(p_RessourcesReward[i].first, p_RessourcesReward[i].second);
}
