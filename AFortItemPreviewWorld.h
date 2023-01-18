// Class /Script/FortniteUI.FortItemPreviewWorld
// Size: 0x338
class AFortItemPreviewWorld : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FGameplayTag PreviewSceneChangerTag; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UMaterialInstance* BackgroundMaterial; // 0x298 (0x8)
	class UMaterialInstanceDynamic* BackgroundMaterialDynamic; // 0x2a0 (0x8)
	class UMaterialInstance* FloorMaterial; // 0x2a8 (0x8)
	class UMaterialInstanceDynamic* FloorMaterialDynamic; // 0x2b0 (0x8)
	class UChildActorComponent* SceneBackgroundComponent; // 0x2b8 (0x8)
	class AFortStaticMeshActor* SceneBackground; // 0x2c0 (0x8)
	class UChildActorComponent* SceneChangerComponent; // 0x2c8 (0x8)
	class AFortItemPreviewSceneChanger* PreviewSceneChanger; // 0x2d0 (0x8)
	struct FVaultWorldBackgroundData CachedBackgroundData; // 0x2d8 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPreviewWorld.SetFloorMaterialDynamic (Underlying native function: SetFloorMaterialDynamic 0x26f84a4)
	void SetFloorMaterialDynamic(class UMaterialInstanceDynamic*& InFloorMaterialDynamic); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewWorld.SetBackgroundMaterialDynamic (Underlying native function: SetBackgroundMaterialDynamic 0x26f8424)
	void SetBackgroundMaterialDynamic(class UMaterialInstanceDynamic*& InBackgroundMaterialDynamic); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnUpdateMaterialIndex (Has no native function)
	void OnUpdateMaterialIndex(int& MaterialIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnUpdateDisplay (Has no native function)
	void OnUpdateDisplay(bool& bShowFloor, bool& bShowEffects); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnTransitionItemDetails (Has no native function)
	void OnTransitionItemDetails(bool& bShowItemDetails); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnTransitionBackground (Has no native function)
	void OnTransitionBackground(bool& bPlayForward, enum EBackgroundIntensityLevel& IntensityTransition); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnSetupBackground (Has no native function)
	void OnSetupBackground(class UTexture2D*& LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnResetIntensityChange (Has no native function)
	void OnResetIntensityChange(bool& bFromLowIntensity); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnIntensityChange (Has no native function)
	void OnIntensityChange(bool& bToLowIntensity); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewWorld.OnInitialBackgroundTransition (Has no native function)
	void OnInitialBackgroundTransition(); // (Event | Protected | BlueprintEvent)
};

