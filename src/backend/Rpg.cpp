// Rpg.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Vector2.h"
#include "Personnage.h"
#include "Serializer.h"
#include "StateManager.h"
#include "Quest.h"
#include "QuestStep.h"
#include "Tree.h"
#include <iostream>
using namespace std;
int main()
{
	/*Vector2<int> v1(1,2);
	Vector2<int> v2(2,3);
	Vector2<double> v3(10.0, 12.7);
	v1 ^= v2;
	cout << v1 << v2 << v3 << endl;
	if (v1 == v2)
		cout << "KO !" << endl;
	Vector2<int> a(100, 100);
	Personnage p(a, a, DIRECTION_Left);*/

	ofstream os("file.txt");
	/*Serializer::Serialize(os,125);
	Serializer::Serialize(os, p);*/

	ifstream ifs("file.txt");
	/*int i = Serializer::Deserialize<int>(ifs);
	Personnage p2 = Serializer::Deserialize<Personnage>(ifs);*/

	Quest q;
	q.SetId(666);
	QuestStep qs;
	qs.AddObjective("Celui qui lit ça est très probablement un crétin.", 1, QUESTEVENT_MapDiscovered_Bourges);
	qs.AddObjective("Encore toi ?", 456, QUESTEVENT_MonsterBeaten_Toinard);
	q.AddQuestStep(qs);
	Serializer::Serialize(os,q);
	
	//Et plus tard:

	Quest q2(ifs);

	Tree* t =  new Tree();
	t->SetQuestion("MAIN");
	Tree* t1 = new Tree();
	t1->SetQuestion("-1-");
	Tree* t2 = new Tree();
	t2->SetQuestion("-2-");
	Tree* t3 = new Tree();
	t3->SetQuestion("-3-");
	Tree* t21 = new Tree();
	t21->SetQuestion("-21-");
	t->AddSubTree("Vers SA 1", QUESTEVENT_MapDiscovered_Bourges, t1);
	t->AddSubTree("Vers SA 2", QUESTEVENT_MonsterBeaten, t2);
	t->AddSubTree("Vers SA 3", QUESTEVENT_Null, t3);
	t2->AddSubTree("Vers SA 21", QUESTEVENT_Null, t21);
	Serializer::Serialize(os, t);
	free(t);
	free(t1);free(t2);free(t3);free(t21);
	for (int i = 0;i < 1000;++i)malloc(1000);
	Tree* Tf = Serializer::Deserialize<Tree*>(ifs);
	getchar();
	return EXIT_SUCCESS;
}

