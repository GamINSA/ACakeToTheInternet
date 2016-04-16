#pragma once
#include "Vector2.h"
#include "StateManager.h"
#include <fstream>
///<summary>Direction vers laquelle regarde le personnage</summary>
typedef enum { DIRECTION_Right, DIRECTION_RightUp, DIRECTION_Up, DIRECTION_UpLeft, DIRECTION_Left, DIRECTION_LeftDown, DIRECTION_Down, DIRECTION_DownRight }Direction;

/// <summary>Type de skin qu'aura le perso</summary>
typedef enum { SKIN_Hero, SKIN_Monstre, SKIN_Pnj }Skin;

class Personnage
{
public:

	
	Personnage(Skin skin = SKIN_Hero);
	Personnage(Vector2<int> pos, Vector2<int> size, Direction dir = DIRECTION_Right, Skin skin = SKIN_Hero);
	~Personnage();
	void Update(time_t Elapsed);
	void HandleInput(time_t Elapsed);
	void Draw();
	friend bool operator==(const Personnage& p1, const Personnage& p2);
private:
	friend class boost::serialization::access;
	///<summary>Sérialise un personnage</summary>
	template<typename T>
	void serialize(T & ar, const unsigned int version);

	Vector2<int> p_Position, p_Size;
	void Move(time_t Elapsed);
	///<summary>Position réelle du personnage.</summary>
	Vector2<double> p_PositionPix;
	///<summary>Direction du personnage (pourrait être remplacée par un Vector2).</summary>
	Direction p_dir;
	///<summary>Gestionnaire des états du personnage</summary>
	StateManager p_State;
	///<summary>Référence du skin du personnage</summary>
	Skin p_Skin;
	///<summary>Vitesse en pixels par seconde du personnage.</summary>
	int p_Speed;
};
template<typename T>
inline void Personnage::serialize(T & ar, const unsigned int version)
{
	ar & p_Position;
	ar & p_Size;
	ar & p_PositionPix;
	ar & p_dir;
	ar & p_State;
	ar & p_Skin;
}