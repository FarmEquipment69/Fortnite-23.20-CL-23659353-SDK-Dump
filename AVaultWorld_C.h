// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C
// Size: 0x341
class AVaultWorld_C : public AFortItemPreviewWorld
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x338 (0x8)
	bool bIsPrimaryBackgroundActive; // 0x340 (0x1)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.GetVaultRotator (Has no native function)
	void GetVaultRotator(class AVaultRotator_C*& VaultRotator, class AVaultRotator_C*& K2NodeDynamicCastAsVaultRotator, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.OnSetupBackground (Has no native function)
	void OnSetupBackground(class UTexture2D*& LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.OnTransitionBackground (Has no native function)
	void OnTransitionBackground(bool& bPlayForward, enum EBackgroundIntensityLevel& IntensityTransition); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.OnUpdateDisplay (Has no native function)
	void OnUpdateDisplay(bool& bShowFloor, bool& bShowEffects); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.OnTransitionItemDetails (Has no native function)
	void OnTransitionItemDetails(bool& bShowItemDetails); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld (Has no native function)
	void ExecuteUbergraphVaultWorld(int& EntryPoint, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, class UTexture2D*& K2NodeEventLoadedBackgroundTexture, struct FVaultWorldBackgroundData& K2NodeEventBackgroundInfo, bool& K2NodeEventbPlayForward, enum EBackgroundIntensityLevel& K2NodeEventIntensityTransition, class AFortStaticMeshActor*& K2NodeDynamicCastAsFortStaticMeshActor, bool& K2NodeDynamicCastbSuccess, bool& K2NodeEventbShowFloor, bool& K2NodeEventbShowEffects, bool& K2NodeEventbShowItemDetails); // (Final | 0x00008000 | HasDefaults)
};

