#include "stdafx.h"
#include "Personnage.h"
#include "Vector2.h"


Personnage::Personnage(Skin skin)
	:p_Size(Vector2<int>()), p_Position(Vector2<int>()), p_dir(DIRECTION_Right), p_Skin(skin), p_PositionPix(Vector2<double>())
{
}

Personnage::Personnage(Vector2<int> pos, Vector2<int> size, Direction dir, Skin skin)
	: p_Size(size), p_Position(pos), p_dir(dir), p_State(), p_Skin(skin)
{
	p_PositionPix.SetX((double)pos.GetX());
	p_PositionPix.SetY((double)pos.GetY());
}


Personnage::~Personnage()
{

}

///<summary>Met à les champs du personnage à jour </summary>
///<param name = "Elapsed">Temps depuis la dernière mise à jour.</param>
void Personnage::Update(time_t Elapsed)
{
	///Déplacement

}
void Personnage::HandleInput(time_t Elapsed)
{

}
void Personnage::Draw()
{
}
///<summary>Déplace le personnage<para>A utiliser dans Update</para></summary>
#define SQRT2ON2 0.70710678
void Personnage::Move(time_t Elapsed)
{
	if (p_State.GetState() == STATE_Deplacement|| p_State.GetState() == STATE_Combat)
	{
		Vector2<double> dir;
		switch (p_dir) // On set la direction du déplacement
		{
		case DIRECTION_Up: dir = { 0,-1 };break;
		case DIRECTION_Down: dir = { 0, 1 };break;
		case DIRECTION_Left: dir = { -1,0 }; break;
		case DIRECTION_Right: dir = { -1,0 }; break;
		case DIRECTION_UpLeft: dir = { -SQRT2ON2,-SQRT2ON2 };break;
		case DIRECTION_LeftDown: dir = { -SQRT2ON2, SQRT2ON2 };break;
		case DIRECTION_RightUp: dir = { SQRT2ON2,-SQRT2ON2 }; break;
		case DIRECTION_DownRight: dir = { SQRT2ON2,SQRT2ON2 }; break;
		}
		Vector2<double> OldMove = { p_PositionPix.GetX() - p_Position.GetX(),p_PositionPix.GetY() - p_Position.GetY() };
		if ((dir ^ OldMove) == Vector2<double>(0, 0)) // Si les vecteurs sont collinéaires
		{
			Vector2<double> move{ dir.GetX() * p_Speed * Elapsed / 1000,dir.GetY() * p_Speed * Elapsed / 1000 };
			p_PositionPix += move; // On met à jour la position réelle.
			p_Position = { (int)round(p_PositionPix.GetX()), (int)round(p_Position.GetY()) }; // Puis on met à jour la position fictive du personnage.
		}
		else
		{
			// On regarde combien de temps il faudra pour aller jusqu'à la case suivante.
			time_t stayingTime = (time_t) sqrt(OldMove.GetX()*OldMove.GetX() + OldMove.GetY()*OldMove.GetY());
			if (Elapsed<stayingTime) // Si on a pas le temps de finir le déplacement
				p_PositionPix += {Elapsed / stayingTime * OldMove.GetX(), Elapsed / stayingTime * OldMove.GetY() };// On se rapproche de la case suivante.
			else
			{
				p_PositionPix = { (double)p_Position.GetX(), (double)p_Position.GetY() };
				Elapsed -= stayingTime;
				Vector2<double> move{ dir.GetX() * p_Speed * Elapsed / 1000,dir.GetY() * p_Speed * Elapsed / 1000 }; // Et on commence le nouveau déplacement
				p_PositionPix += move; // On met à jour la position réelle.
				p_Position = { (int)round(p_PositionPix.GetX()), (int)round(p_Position.GetY()) };

			}
		}

	}
}

bool operator==(const Personnage & p1, const Personnage & p2)
{
	return p1.p_PositionPix == p2.p_PositionPix &&
		p1.p_Skin == p2.p_Skin &&
		p1.p_dir == p2.p_dir;

}
