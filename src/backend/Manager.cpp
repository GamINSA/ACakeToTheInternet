#include "stdafx.h"
#include "Manager.h"


Manager::Manager()
{
}


Manager::~Manager()
{
}

void Manager::Update(time_t Elapsed)
{
	for each (Personnage personnage in p_Personnages)
		personnage.Update(Elapsed);
}

void Manager::HandleInput(time_t Elapsed)
{
	for each (Personnage personnage in p_Personnages)
		personnage.HandleInput(Elapsed);
}
void Manager::Draw()
{
	for each (Personnage personnage in p_Personnages)
		personnage.Draw();
}

void Manager::AddComponent(const Personnage& p)
{
	p_Personnages.push_front(p);
}
void Manager::RemoveComponent(const Personnage & p)
{
	p_Personnages.remove(p);
}

void Manager::Flush()
{
	//p_Personnages.erase_after(begin);
}
