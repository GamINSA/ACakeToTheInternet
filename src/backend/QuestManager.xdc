<?xml version="1.0"?><doc>
<members>
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
<member name="F:Hero.It" decl="false" source="d:\programmation\rpg\rpg\hero.h" line="9">
<summary>Inventaire du personnage.</summary>
</member>
<member name="M:QuestManager.AddEventToHandle(QuestEvent,System.Int32)" decl="true" source="d:\programmation\rpg\rpg\questmanager.h" line="13">
<summary>Ajoute le novel événement à vérifier.</summary>
</member>
<member name="M:QuestManager.EventHappened(QuestEvent)" decl="true" source="d:\programmation\rpg\rpg\questmanager.h" line="16">
<summary>Cette methode doit être appelée dés qu'un événement s'est produit
<para>Ces quêtes mettront à jour les champs du personnage en ajoutant les récompenses de quêtes...</para></summary>
</member>
<member name="M:QuestManager.AddQuest(Quest!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="d:\programmation\rpg\rpg\questmanager.h" line="21">
<summary>Ajoute une quête aux quêtes en cours</summary>
</member>
<member name="M:QuestManager.RemoveQuest(Quest!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="d:\programmation\rpg\rpg\questmanager.h" line="23">
<summary>Supprime une quête des quêtes en cours</summary>
</member>
<member name="F:QuestManager.EventsListened" decl="false" source="d:\programmation\rpg\rpg\questmanager.h" line="27">
<summary>Liste des quêtes en attente de la validation de chaque événements
<para>La valeur int stockée est L'ID de la quête</para></summary>
</member>
<member name="F:QuestManager.p_Quest" decl="false" source="d:\programmation\rpg\rpg\questmanager.h" line="31">
<summary>Quêtes en cours</summary>
</member>
<member name="M:QuestManager.GetQuestById(System.Int32)" decl="true" source="d:\programmation\rpg\rpg\questmanager.h" line="34">
<summary>Retourne la quête associée à l'ID demandé. Cet ID doit exister</summary>
</member>
</members>
</doc>