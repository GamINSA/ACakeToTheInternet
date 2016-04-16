#include "stdafx.h"
#include "ItemManager.h"


ItemManager::ItemManager()
{
}


ItemManager::~ItemManager()
{
}
bool ItemManager::SpendMoney(unsigned int amount)
{
	if (p_Money >= (int)amount)
	{
		p_Money -= amount;
		return true;
	}
	else
		return false;
}

void ItemManager::EarnMoney(unsigned int amount)
{
	p_Money += amount;
}

bool ItemManager::DestroyItem(Item item, unsigned int amount)
{
	if (p_Items[item] >= (int)amount)
	{
		p_Items[item] -= amount;
		return true;
	}
	else
		return false;
}

void ItemManager::AddItem(Item item, unsigned int amount)
{
	p_Items[item] += amount;
}