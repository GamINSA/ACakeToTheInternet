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
<member name="M:Tree.AddSubTree(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,QuestEvent,Tree*)" decl="true" source="d:\programmation\rpg\rpg\tree.h" line="15">
<summary>Fonction utilitaire d'ajout de noeud dans l'arbre.
<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
Cette fonction devra donc être supprimée!</para></summary>
</member>
<member name="M:Tree.SelectNode(System.UInt32)" decl="true" source="d:\programmation\rpg\rpg\tree.h" line="20">
<summary>Choisis le sous arbre node.
<para>Attention, la fonction ne vérifie pas qu'il existe vraiment, donc gaffe aux appels !</para></summary>
</member>
<member name="M:Tree.SetQuestion(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="d:\programmation\rpg\rpg\tree.h" line="23">
<summary>Fonction utilitaire d'initialization de la question.
<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
Cette fonction devra donc être supprimée!</para></summary>
</member>
<member name="M:Tree.#ctor(std.basic_istream&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}&gt;*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="d:\programmation\rpg\rpg\tree.h" line="27">
<summary>Initialisation directe de la classe quest avec le flux de données.
<para>C'est la meilleur methode pour créer un objet.</para></summary>
</member>
<member name="F:Tree.p_Question" decl="false" source="d:\programmation\rpg\rpg\tree.h" line="37">
<summary>Texte de base du PNJ</summary>
</member>
<member name="F:Tree.p_Answers" decl="false" source="d:\programmation\rpg\rpg\tree.h" line="40">
<summary>Tableau de réponses du personnage.
<para>&lt;&lt;Texte_de_réponse,Event_déclenché&gt;,Sous_arbre_du_fils&gt;</para></summary>
</member>
</members>
</doc>