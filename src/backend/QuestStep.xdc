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
</members>
</doc>