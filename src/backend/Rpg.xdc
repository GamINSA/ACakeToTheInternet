<?xml version="1.0"?><doc>
<members>
<member name="T:StateManager" decl="false" source="d:\programmation\rpg\rpg\statemanager.h" line="6">
<summary>Gestionnaire D'état du personnage.</summary>
</member>
<member name="F:StateManager.p_TempsChangement" decl="false" source="d:\programmation\rpg\rpg\statemanager.h" line="19">
<summary>Temps depuis le dernier changement d'état</summary>
</member>
<member name="F:Personnage.p_PositionPix" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="31">
<summary>Position reelle du personnage.</summary>
</member>
<member name="F:Personnage.p_dir" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="33">
<summary>Direction du personnage (pourrait être remplacée par un Vector2).</summary>
</member>
<member name="F:Personnage.p_State" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="35">
<summary>Gestionnaire des états du personnage</summary>
</member>
<member name="F:Personnage.p_Skin" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="37">
<summary>Référence du skin du personnage</summary>
</member>
<member name="F:Personnage.p_Speed" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="39">
<summary>Vitesse en pixel par seconde du personnage.</summary>
</member>
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
<member name="M:ItemManager.SpendMoney(System.UInt32)" decl="true" source="d:\programmation\rpg\rpg\itemmanager.h" line="10">
<summary>Si le personnage à suffisamment d'argent, fait la transaction
<para>Ratourne si la transaction à pu être effectuée</para></summary>
</member>
<member name="M:ItemManager.EarnMoney(System.UInt32)" decl="true" source="d:\programmation\rpg\rpg\itemmanager.h" line="13">
<summary>Ajoute money à l'argent du personnage.</summary>
</member>
<member name="M:ItemManager.DestroyItem(Item,System.UInt32)" decl="true" source="d:\programmation\rpg\rpg\itemmanager.h" line="16">
<summary>Si le personnage à suffisamment d'argent, fait la transaction
<para>Ratourne si la transaction à pu être effectuée</para></summary>
</member>
<member name="M:ItemManager.AddItem(Item,System.UInt32)" decl="true" source="d:\programmation\rpg\rpg\itemmanager.h" line="19">
<summary>Ajoute amount item au personnage
<para>On pourra rajouter une verification du poids du personnage, si on rajoute un nombre max d'items.</para></summary>
</member>
<member name="F:ItemManager.p_Money" decl="false" source="d:\programmation\rpg\rpg\itemmanager.h" line="29">
<summary>Flouze que possède le personnage</summary>
</member>
<member name="F:ItemManager.p_Items" decl="false" source="d:\programmation\rpg\rpg\itemmanager.h" line="32">
<summary>Babioles que possède le personnage</summary>
</member>
<member name="M:QuestStep.AddObjective(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,System.UInt32,QuestEvent)" decl="true" source="d:\programmation\rpg\rpg\queststep.h" line="13">
<summary>Fonction utilitaire d'ajout d'objectif dans l'étape
<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
Cette fonction devra donc être supprimée!</para></summary>
</member>
<member name="M:QuestStep.UpdateQuestStep(QuestEvent)" decl="true" source="d:\programmation\rpg\rpg\queststep.h" line="20">
<summary>Met à jour l'étape en faisant l'événement QEvent.
<para>Retourne si l'étape est terminée.</para></summary>
</member>
<member name="F:QuestStep.p_ObjCount" decl="false" source="d:\programmation\rpg\rpg\queststep.h" line="33">
<summary>Etats validation des objectifs
<para>Une valeur &lt;0 signifie validé.</para>
<para>La valeur d'initialisation est donc le nombre de fois qu'il reste à faire l'action spécifique</para>
</summary>
</member>
<member name="F:QuestStep.p_ObjStr" decl="false" source="d:\programmation\rpg\rpg\queststep.h" line="39">
<summary>Tableau de description des objectifs.</summary>
</member>
<member name="F:QuestStep.p_ObjEvents" decl="false" source="d:\programmation\rpg\rpg\queststep.h" line="42">
<summary>Tableau d'actions à réaliser pour valider l'objectif.
<para>L'implémentation actuelle est une énumération.</para>
</summary>
</member>
<member name="F:QuestStep.p_MoneyReward" decl="false" source="d:\programmation\rpg\rpg\queststep.h" line="47">
<summary>€£$ gagnés en finissant l'étape</summary>
</member>
<member name="F:QuestStep.p_RessourcesReward" decl="false" source="d:\programmation\rpg\rpg\queststep.h" line="49">
<summary>Tableau de ressources gagnées en finissant l'étape (&lt;référence,quantité&gt;)</summary>
</member>
<member name="M:Quest.AddQuestStep(QuestStep)" decl="true" source="d:\programmation\rpg\rpg\quest.h" line="12">
<summary>Fonction utilitaire d'ajout d'étape dans la quête.
<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
Cette fonction devra donc être supprimée!</para></summary>
</member>
<member name="M:Quest.#ctor(std.basic_istream&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte}&gt;*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="d:\programmation\rpg\rpg\quest.h" line="17">
<summary>Initialisation directe de la classe quest avec le flux de données.
<para>C'est la meilleur methode pour créer un objet.</para></summary>
</member>
<member name="M:Quest.GetId" decl="true" source="d:\programmation\rpg\rpg\quest.h" line="22">
<summary>Retourne l'ID de la quête courante.</summary>
</member>
<member name="M:Quest.SetId(System.Int32)" decl="true" source="d:\programmation\rpg\rpg\quest.h" line="25">
<summary>Fonction utilitaire d'ajout d'étape dans la quête.
<para>Attention, dans la version finale, le programme lira les données à partir de fichiers sérialisés,
Cette fonction devra donc être supprimée!</para></summary>
</member>
<member name="M:Quest.UpdateQuest(QuestEvent,ItemManager)" decl="true" source="d:\programmation\rpg\rpg\quest.h" line="30">
<summary>Met à jour la quête en faisant l'événemnt QEvent.
<para>Retourne si la quête est terminée.</para></summary>
</member>
<member name="F:Quest.p_QuestID" decl="false" source="d:\programmation\rpg\rpg\quest.h" line="39">
<summary>ID de la quête courante</summary>
</member>
<member name="F:Quest.p_Steps" decl="false" source="d:\programmation\rpg\rpg\quest.h" line="42">
<summary>Tableau d'étapes</summary>
</member>
<member name="M:Quest.GoToNextStep(ItemManager)" decl="true" source="d:\programmation\rpg\rpg\quest.h" line="45">
<summary>Passe la quête à l'étape suivante.
<para>Retourne si la quête est terminée</para></summary>
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