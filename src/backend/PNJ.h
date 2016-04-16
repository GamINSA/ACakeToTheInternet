#pragma once

#include <iostream>
#include "Personnage.h"
#include "Tree.h"
class PNJ : public Personnage
{
public:
	PNJ(Skin skin = SKIN_Pnj);
	PNJ(istream ist);
	~PNJ();
	Tree* StartTalk();
	Tree* SetAnswer(unsigned int answer);
private:
	friend class boost::serialization::access;
	template <typename T>
	void serialize(T & ar, const unsigned int version);
	Tree* p_tree;
	Tree* p_CurrentPosOnTree;
};

template<typename T>
inline void PNJ::serialize(T & ar, const unsigned int version)
{
	ar & boost::serialization::base_object<Personnage,PNJ>(*this);
	ar & *p_tree;
	ar & *p_CurrentPosOnTree;
}
