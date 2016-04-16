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
<member name="M:StateManager.GetState" decl="false" source="d:\programmation\rpg\rpg\statemanager.cpp" line="13">
<summary>Retourne l'état actuel du personnage</summary>
</member>
<member name="M:StateManager.ChangeEtat(State,System.Int64)" decl="false" source="d:\programmation\rpg\rpg\statemanager.cpp" line="18">
<summary>Tente de changer l'état du personnage A implémenter </summary>
<param name="EtatSouhaite">Le nom est pas assez explicite ducon ?</param>
<param name="GameTime">Temps total depuis quand le jeu tourne</param>
<returns>True si le changement est possible, false sinon</returns>
</member>
</members>
</doc>