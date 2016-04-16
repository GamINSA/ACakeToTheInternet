#include "stdafx.h"
#include "QuestManager.h"
#include <iterator>

using namespace std;
QuestManager::QuestManager(string path)
{

}


QuestManager::~QuestManager()
{
}

void QuestManager::AddEventToHandle(QuestEvent EventToHandle, int QuestID)
{
	EventsListened[EventToHandle].push_front(QuestID);
}

void QuestManager::EventHappened(QuestEvent NewEvent)
{
	for (forward_list<int>::iterator it = EventsListened[NewEvent].begin();it != EventsListened[NewEvent].end(); ++it)
	{
		//GetQuestById(*it);
	}
}

void QuestManager::AddQuest(const Quest& q)
{
	p_Quest.push_front(q);
}

void QuestManager::RemoveQuest(const Quest& q)
{
	p_Quest.remove(q);
}

Quest&  QuestManager::GetQuestById(int ID)
{
	forward_list<Quest>::iterator it;
	for (it = p_Quest.begin();it != p_Quest.end();++it)
	{
		if (it->GetId() == ID)
			return *it;
	}
	return *it; ///Pour que le compilateur soit content (la quête est sensée exister)
}
