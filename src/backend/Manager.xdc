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
<member name="M:Manager.Update(System.Int64)" decl="true" source="d:\programmation\rpg\rpg\manager.h" line="10">
<summary>Met à jour les personnages.</summary>
</member>
<member name="M:Manager.HandleInput(System.Int64)" decl="true" source="d:\programmation\rpg\rpg\manager.h" line="12">
<summary>Met à jour les champs en fonction des I/O</summary>
</member>
<member name="M:Manager.Draw" decl="true" source="d:\programmation\rpg\rpg\manager.h" line="14">
<summary>Dessine les personnages</summary>
</member>
<member name="M:Manager.AddComponent(Personnage!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="d:\programmation\rpg\rpg\manager.h" line="16">
<summary>Ajoute un personnage</summary>
</member>
<member name="M:Manager.RemoveComponent(Personnage!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="d:\programmation\rpg\rpg\manager.h" line="18">
<summary>Supprime un personnage</summary>
</member>
</members>
</doc>