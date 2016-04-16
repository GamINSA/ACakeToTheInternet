#pragma once
#include "Personnage.h"
#include <forward_list>
class Manager
{
public:
	Manager();
	~Manager();

	///<summary>Met à jour les personnages.</summary>
	void Update(time_t Elapsed);
	///<summary>Met à jour les champs en fonction des I/O</summary>
	void HandleInput(time_t Elapsed);
	///<summary>Dessine les personnages</summary>
	void Draw();
	///<summary>Ajoute un personnage</summary>
	void AddComponent(const Personnage& p);
	///<summary>Supprime un personnage</summary>
	void RemoveComponent(const Personnage& p);
	void Flush();
private:
	forward_list<Personnage> p_Personnages; 
};

