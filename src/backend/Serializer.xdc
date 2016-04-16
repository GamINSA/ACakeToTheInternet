<?xml version="1.0"?><doc>
<members>
<member name="T:Serializer" decl="false" source="d:\programmation\rpg\rpg\serializer.h" line="14">
<summary>Classe statique pour faciliter la sérialisation.
<para>Cette classe estdans la plupart des cas à utiliser, mais on peut utiliser directement boost sans passer par elle si besoin</para>
Exemple d'utilisation :
<code>
Quest q;
q.SetId(666);
QuestStep qs;
qs.AddObjective("Celui qui lit ça est très probablement un crétin.", 1, QUESTEVENT_MapDiscovered_Bourges);
qs.AddObjective("Encore toi ?", 456, QUESTEVENT_MonsterBeaten_Toinard);
q.AddQuestStep(qs);
Serializer::Serialize(os, q);

//Et plus tard:

Quest q2(ifs);
</code>
</summary>
</member>
</members>
</doc>