#pragma once

#include <iostream>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/utility.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/base_object.hpp>

using namespace std;

///<summary>Classe statique pour faciliter la sérialisation.
///<para>Cette classe est dans la plupart des cas à utiliser, mais on peut utiliser directement boost sans passer par elle si besoin</para>
///Exemple d'utilisation :
///<code>
///Quest q;
///q.SetId(666);
///QuestStep qs;
///qs.AddObjective("Celui qui lit ça est très probablement un crétin.", 1, QUESTEVENT_MapDiscovered_Bourges);
///qs.AddObjective("Encore toi ?", 456, QUESTEVENT_MonsterBeaten_Toinard);
///q.AddQuestStep(qs);
///Serializer::Serialize(os, q);
///
/// //Et plus tard:
///
///Quest q2(ifs);
///</code>
///</summary>
class Serializer
{
public:
	///<summary>Sérialise la donnée data,.</summary>
	template <typename T>
	static bool Serialize(ostream & flux,const T& data);
	///<summary>Désérialise le fichier dans le type T. En cas d'echec retourne NULL.</summary>
	template <typename T>
	static T Deserialize(istream & flux);
};

///<summary>Sérialise la classe dans le flux de données.</summary>
template<typename T>
inline bool Serializer::Serialize(ostream & flux,const T& data)
{
		boost::archive::text_oarchive Oa(flux);
		Oa << data;
		return true;
}
///<summary>Désérialise un fichier dans un objet de type T.</summary>
template<typename T>
inline T Serializer::Deserialize(istream & flux)
{
	boost::archive::text_iarchive ia(flux);
	T data;
	ia >> data;
	return data;
}