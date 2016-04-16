#include "stdafx.h"
#include "StateManager.h"


StateManager::StateManager() :p_State(STATE_Repos), p_TempsChangement(0)
{
	
}

StateManager::~StateManager()
{
}
///<summary>Retourne l'état actuel du personnage</summary>
State StateManager::GetState() const
{
	return p_State;
}
///<summary>Tente de changer l'état du personnage A implémenter </summary>
///<param name="EtatSouhaite">Le nom est pas assez explicite ducon ?</param>
///<param name="GameTime">Temps total depuis quand le jeu tourne</param>
///<returns>True si le changement est possible, false sinon</returns>
bool StateManager::ChangeEtat(State EtatSouhaite, time_t GameTime)
{
	return true;
}
