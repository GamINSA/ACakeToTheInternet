#pragma once

#include<vector>
#include<string>
#include<iostream>
#include<utility>
#include<boost\serialization\access.hpp>
#include "QuestEvent.h"
#include "Serializer.h"
using namespace std;
class Tree
{
public:

	///<summary>Fonction utilitaire d'ajout de noeud dans l'arbre.
	///<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
	///Cette fonction devra donc être supprimée!</para></summary>
	void AddSubTree(string str, QuestEvent q, Tree* SubTree);

	///<summary>Choisis le sous arbre node.
	///<para>Attention, la fonction ne vérifie pas qu'il existe vraiment, donc gaffe aux appels !</para></summary>
	Tree* SelectNode(unsigned int node);
	///<summary>Fonction utilitaire d'initialization de la question.
	///<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
	///Cette fonction devra donc être supprimée!</para></summary>
	void SetQuestion(string Quest); const
	///<summary>Initialisation directe de la classe quest avec le flux de données.
	///<para>C'est la meilleur methode pour créer un objet.</para></summary>
	Tree(istream& is);
	Tree();
	~Tree();
private:
	friend class boost::serialization::access;
	///<summary>Sérialise un personnage</summary>
	template<typename T>
	void serialize(T & ar, const unsigned int version);
	///<summary>Texte de base du PNJ</summary>
	string p_Question;

	///<summary>Tableau de réponses du personnage.
	///<para>&lt;&lt;Texte_de_réponse,Event_déclenché&gt;,Sous_arbre_du_fils&gt;</para></summary>
	vector	<
				pair<
					pair<string,QuestEvent>,
					Tree*
					>
			> p_Answers;
};

template<typename T>
inline void Tree::serialize(T & ar, const unsigned int version)
{
	ar & p_Question;
	ar & p_Answers;
}
