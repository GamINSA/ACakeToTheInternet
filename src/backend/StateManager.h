#pragma once
#include <iostream>
#include <boost/serialization/access.hpp>
typedef enum { STATE_Repos, STATE_Deplacement, STATE_Combat, STATE_Occupe } State;

///<summary>Gestionnaire d'états du personnage.</summary>
class StateManager
{
public:

	StateManager();
	~StateManager();
	State GetState() const;
	
	bool ChangeEtat(State EtatSouhaite, time_t GameTime);
private:
	State p_State;

	///<summary>Temps depuis le dernier changement d'état</summary>
	time_t p_TempsChangement;
	friend class boost::serialization::access;
	template<typename T>
	inline void serialize(T & ar, const unsigned int version)
	{
		ar & p_State;
		ar & p_TempsChangement;
	}
};

