<?xml version="1.0"?><doc>
<members>
<member name="T:StateManager" decl="false" source="d:\programmation\rpg\rpg\statemanager.h" line="6">
<summary>Gestionnaire D'état du personnage.</summary>
</member>
<member name="F:StateManager.p_TempsChangement" decl="false" source="d:\programmation\rpg\rpg\statemanager.h" line="18">
<summary>Matrice de changements D'état.<para>Par exemple p_Transition[COMBAT][REPOS] = 250
signifie qu'il faut combattre au moins 250 ms pour passer à l'état repos</para></summary>
<summary>Temps depuis le dernier changement d'état</summary>
</member>
<member name="F:Personnage.p_PositionPix" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="32">
<summary>Position reelle du personnage.</summary>
</member>
<member name="F:Personnage.p_dir" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="34">
<summary>Direction du personnage (pourrait être remplacée par un Vector2).</summary>
</member>
<member name="F:Personnage.p_State" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="36">
<summary>Gestionnaire des états du personnage</summary>
</member>
<member name="F:Personnage.p_Skin" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="38">
<summary>Référence du skin du personnage</summary>
</member>
<member name="F:Personnage.p_Speed" decl="false" source="d:\programmation\rpg\rpg\personnage.h" line="40">
<summary>Vitesse en pixel par seconde du personnage.</summary>
</member>
<member name="M:Personnage.Update(System.Int64)" decl="false" source="d:\programmation\rpg\rpg\personnage.cpp" line="24">
<summary>Met à les champs du personnage à jour </summary>
<param name="Elapsed">Temps depuis la dernière mise à jour.</param>
</member>
<member name="M:Personnage.Move(System.Int64)" decl="false" source="d:\programmation\rpg\rpg\personnage.cpp" line="38">
<summary>Déplace le personnage<para>A utiliser dans Update</para></summary>
</member>
</members>
</doc>