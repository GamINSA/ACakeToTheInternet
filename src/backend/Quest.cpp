#include "stdafx.h"
#include "Quest.h"


void Quest::AddQuestStep(QuestStep QS)
{
	p_Steps.push_back(QS);
}

Quest::Quest(istream& ist)
{
	*this = Serializer::Deserialize<Quest>(ist);
}

Quest::Quest() :p_QuestID(0), p_Steps()
{
}


Quest::~Quest()
{
}

int Quest::GetId()
{
	return p_QuestID;
}

void Quest::SetId(int ID)
{
	p_QuestID = ID;
}

bool Quest::UpdateQuest(QuestEvent QEvent, ItemManager ItM)
{
	if (p_Steps.front().UpdateQuestStep(QEvent))
		if (GoToNextStep(ItM))
			return true;
	return false;
}

bool Quest::GoToNextStep(ItemManager ItM)
{
	p_Steps.erase(p_Steps.begin());
	return p_Steps.empty();
}

bool operator==(Quest q1, Quest q2)
{
	return q1.GetId() == q2.GetId();
}
