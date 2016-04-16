#include "stdafx.h"
#include "PNJ.h"


PNJ::PNJ(Skin skin):Personnage::Personnage(skin)
{

	
}

PNJ::PNJ(istream ist)
{
	*this = Serializer::Deserialize<PNJ>(ist);
}


PNJ::~PNJ()
{
}

Tree* PNJ::StartTalk()
{
	return p_CurrentPosOnTree = p_tree;
}

Tree * PNJ::SetAnswer(unsigned int answer)
{
	return p_CurrentPosOnTree = p_CurrentPosOnTree->SelectNode(answer);
}
