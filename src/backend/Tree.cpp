#include "stdafx.h"
#include "Tree.h"


void Tree::AddSubTree(string str,QuestEvent q,Tree* SubTree)
{
	p_Answers.push_back({ { str,q },SubTree });
}

Tree * Tree::SelectNode(unsigned int node)
{
	return p_Answers[node].second;
}

void Tree::SetQuestion(string Quest)
{
	p_Question = Quest;
}

Tree::Tree(istream & is)
{
	Serializer::Deserialize<Tree>(is);
}

Tree::Tree()
{

}


Tree::~Tree()
{
	for (unsigned int i = 0;i < p_Answers.size();++i)
	{
		if (p_Answers[i].second)
			delete p_Answers[i].second;
	}
}
