#pragma once

#include "Item.h"
#include <boost\serialization\access.hpp>
class ItemManager
{
public:
	ItemManager();
	~ItemManager();
	///<summary>Si le personnage a suffisamment d'argent, fait la transaction
	///<para>Retourne si la transaction a pu �tre effectu�e</para></summary>
	bool SpendMoney(unsigned int amount);
	///<summary>Ajoute money � l'argent du personnage.</summary>
	void EarnMoney(unsigned int amount);

	///<summary>Si le personnage a suffisamment d'argent, fait la transaction
	///<para>Retourne si la transaction a pu �tre effectu�e</para></summary>
	bool DestroyItem(Item item, unsigned int amount);
	///<summary>Ajoute amount item au personnage
	///<para>On pourra rajouter une v�rification du poids du personnage, si on rajoute un nombre max d'items.</para></summary>
	void AddItem(Item item, unsigned int amount);
private:
	friend class boost::serialization::access;
	///<summary>S�rialise un personnage</summary>
	template<typename T>
	void serialize(T & ar, const unsigned int version);


	///<summary>Argent que poss�de le personnage</summary>
	 int p_Money;

	///<summary>Objets que poss�de le personnage</summary>
	int p_Items[ITEM_Count];
};

template<typename T>
inline void ItemManager::serialize(T & ar, const unsigned int version)
{
	ar & p_Items;
	ar & p_Money;
}
