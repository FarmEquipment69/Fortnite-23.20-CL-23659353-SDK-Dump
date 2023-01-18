// Class /Script/FortniteUI.FortItemPreviewSceneChanger
// Size: 0x3b8
class AFortItemPreviewSceneChanger : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class UCameraComponent* TransitionCameraComponent; // 0x298 (0x8)
	class UChildActorComponent* PrimarySceneComponent; // 0x2a0 (0x8)
	class UChildActorComponent* SecondarySceneComponent; // 0x2a8 (0x8)
	struct FGameplayTag SceneChangerTag; // 0x2b0 (0x4)
	bool bHasEtherealBackground; // 0x2b4 (0x1)
	unsigned char unreflected_2b5[0x3]; // 0x2b5 (0x3) 
	class USceneComponent* SceneChangeRootComponent; // 0x2b8 (0x8)
	class AItemPreviewScene* PrimaryScene; // 0x2c0 (0x8)
	class AItemPreviewScene* SecondaryScene; // 0x2c8 (0x8)
	class AItemPreviewScene* SceneTransitioningTo; // 0x2d0 (0x8)
	class AItemPreviewScene* ActiveScene; // 0x2d8 (0x8)
	unsigned char unreflected_2e0[0x40]; // 0x2e0 (0x40) 
	float ZoomLevel; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	struct FRotator PedestalRotationOffset; // 0x328 (0x18)
	unsigned char padding_340[0x78]; // 0x340 (0x78)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.TickZoomLevel (Underlying native function: TickZoomLevel 0xa73e000)
	void TickZoomLevel(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.TickPedestalRotationOffset (Underlying native function: TickPedestalRotationOffset 0xa73dfac)
	void TickPedestalRotationOffset(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.OnUpdateBackgroundColor (Has no native function)
	void OnUpdateBackgroundColor(bool& bEnableAutotestBackground); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.OnTargetZoomLevelSet (Has no native function)
	void OnTargetZoomLevelSet(float& TargetZoomLevel); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.OnTargetRotationOffsetSet (Has no native function)
	void OnTargetRotationOffsetSet(struct FRotator& TargetRotationOffset); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.OnSetBackgroundMessageText (Has no native function)
	void OnSetBackgroundMessageText(struct FText& BackgroundMessageText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.OnNewSceneRequested (Has no native function)
	void OnNewSceneRequested(class UFortAccountItemDefinition*& PrimaryRequestedItem, struct FSceneTransitionOptions& TransitionOptions); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.IsSoundEnabled (Underlying native function: IsSoundEnabled 0x2ded728)
	bool IsSoundEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.GetSceneTransitioningTo (Underlying native function: GetSceneTransitioningTo 0x720c60c)
	class AItemPreviewScene* GetSceneTransitioningTo(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.GetPrimaryScene (Underlying native function: GetPrimaryScene 0x2522aa8)
	class AItemPreviewScene* GetPrimaryScene(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewSceneChanger.GetActiveScene (Underlying native function: GetActiveScene 0x8e7e94c)
	class AItemPreviewScene* GetActiveScene(); // (Final | Native | Protected | BlueprintCallable)
};

