// Class /Script/FortniteGame.PlayspaceComponent_CreativeToolsPermission
// Size: 0x1e0
class UPlayspaceComponent_CreativeToolsPermission : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x18]; // 0xf8 (0x18) 
	struct FUniqueNetIdRepl AccountIdOfOwner; // 0x110 (0x30)
	struct FFortCreativePlotPermissionData PlotPermissions; // 0x140 (0x18)
	bool bPermissionsSaveInProgress; // 0x158 (0x1)
	unsigned char unreflected_159[0x7]; // 0x159 (0x7) 
	struct FFortCreativePlotPermissionData OldPermissions; // 0x160 (0x18)
	unsigned char padding_178[0x68]; // 0x178 (0x68)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeToolsPermission.OnVolumeStateChanged (Underlying native function: OnVolumeStateChanged 0x8ddee74)
	void OnVolumeStateChanged(struct FEventMessageTag& Channel, struct FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeToolsPermission.OnRep_PlotPermissionsChanged (Underlying native function: OnRep_PlotPermissionsChanged 0x8dded9c)
	void OnRepPlotPermissionsChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeToolsPermission.DoesPlayerHavePermissionToEdit (Underlying native function: DoesPlayerHavePermissionToEdit 0x8ddd81c)
	bool DoesPlayerHavePermissionToEdit(struct FUniqueNetIdRepl& UserRequestingPermission); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

