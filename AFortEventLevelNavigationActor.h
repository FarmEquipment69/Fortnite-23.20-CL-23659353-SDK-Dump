// Class /Script/FortniteGame.FortEventLevelNavigationActor
// Size: 0x530
class AFortEventLevelNavigationActor : public AActor
{
	struct FText NavDisplayName; // 0x288 (0x18)
	struct TArray<struct FNavWidgetSettingContainer> NavWidgetSettings; // 0x2a0 (0x10)
	struct FNavWidgetSettings DefaultNavWidgetSettings; // 0x2b0 (0x30)
	class UWidgetComponent* WidgetComponentNavigationWidget; // 0x2e0 (0x8)
	class UWidgetComponent* WidgetComponentCursorTargetPosition; // 0x2e8 (0x8)
	class UClass* IndicatorWidgetClass; // 0x2f0 (0x8)
	class UClass* CursorTargetWidgetClass; // 0x2f8 (0x8)
	class UStaticMeshComponent* DisplayMesh; // 0x300 (0x8)
	struct FGameplayTag NavigationActorTag; // 0x308 (0x4)
	unsigned char unreflected_30c[0x4]; // 0x30c (0x4) 
	struct FGameplayTagContainer CamerasThisNavObjectIsActiveFrom; // 0x310 (0x20)
	struct TMap<struct FGameplayTag, struct FGameplayTag> CameraToNavigateTo; // 0x330 (0x50)
	struct TMap<struct FGameplayTag, struct FGameplayTagContainer> AdditionalHighlightObjects; // 0x380 (0x50)
	struct TMap<struct FGameplayTag, struct FGameplayTag> SpecialInteractionTags; // 0x3d0 (0x50)
	bool bAutoClick; // 0x420 (0x1)
	unsigned char unreflected_421[0x7]; // 0x421 (0x7) 
	struct TArray<struct FNavOptions> CameraNavOptions; // 0x428 (0x10)
	struct FString CalendarEventName; // 0x438 (0x10)
	bool bAlwaysHighliteOnMobile; // 0x448 (0x1)
	unsigned char unreflected_449[0x3]; // 0x449 (0x3) 
	int MobileHighlightStencilValue; // 0x44c (0x4)
	bool bOverrideMobileMeshSize; // 0x450 (0x1)
	unsigned char unreflected_451[0x3]; // 0x451 (0x3) 
	float MeshSizeOverrideScale; // 0x454 (0x4)
	int CursorHoverHighlightStencilValue; // 0x458 (0x4)
	bool bHideNavWidgetIfCantOpen; // 0x45c (0x1)
	unsigned char unreflected_45d[0x3]; // 0x45d (0x3) 
	struct TWeakObjectPtr<class AFortPlayerController> LevelController; // 0x460 (0x8)
	struct TWeakObjectPtr<class UFortGameStateComponent_EventLevel> GSCStreamingLevelOwner; // 0x468 (0x8)
	unsigned char unreflected_470[0x30]; // 0x470 (0x30) 
	struct FMulticastInlineDelegate OnInventoryUpdated; // 0x4a0 (0x10)
	unsigned char padding_4b0[0x80]; // 0x4b0 (0x80)

	/* Functions */

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.UpdateBangState (Underlying native function: UpdateBangState 0x8547b04)
	void UpdateBangState(struct FGameplayTag& BangTacker, bool& bShowBang); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.OnUpdateWidgetVisibility (Has no native function)
	void OnUpdateWidgetVisibility(class AFortPlayerController*& PlayerController, bool& bEnabled); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.OnInitializeForPlayer (Has no native function)
	void OnInitializeForPlayer(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.HasPurchasedSeasonBook (Underlying native function: HasPurchasedSeasonBook 0x854638c)
	bool HasPurchasedSeasonBook(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.HandleObjectSpecialInteraction (Has no native function)
	void HandleObjectSpecialInteraction(struct FGameplayTag& ActionTag, struct FGameplayTag& CameraTag); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.HandleMCPInventoryChanged (Underlying native function: HandleMCPInventoryChanged 0x8545fec)
	void HandleMCPInventoryChanged(struct TSet<struct FString>& TypesChanged, int64_t& ProfileRvn); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.HandleDisplayMeshInputTouchEnd (Underlying native function: HandleDisplayMeshInputTouchEnd 0x8545ea4)
	void HandleDisplayMeshInputTouchEnd(struct TEnumAsByte<ETouchIndex>& FingerIndex, class UPrimitiveComponent*& TouchedComponent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.HandleDisplayMeshEndCursorOver (Underlying native function: HandleDisplayMeshEndCursorOver 0x8545e20)
	void HandleDisplayMeshEndCursorOver(class UPrimitiveComponent*& TouchedComponent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.HandleDisplayMeshClicked (Underlying native function: HandleDisplayMeshClicked 0x8545d00)
	void HandleDisplayMeshClicked(class UPrimitiveComponent*& TouchedComponent, struct FKey& ButtonPressed); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.HandleDisplayMeshBeginCursorOver (Underlying native function: HandleDisplayMeshBeginCursorOver 0x8545c7c)
	void HandleDisplayMeshBeginCursorOver(class UPrimitiveComponent*& TouchedComponent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.GetOwningGameStateComp (Underlying native function: GetOwningGameStateComp 0x8545638)
	class UFortGameStateComponent_EventLevel* GetOwningGameStateComp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.GetDisplayDetails (Underlying native function: GetDisplayDetails 0x85454bc)
	struct FFortEventLevelNavigationDisplayDetails GetDisplayDetails(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEventLevelNavigationActor.CanCommitNavigationRequest (Underlying native function: CanCommitNavigationRequest 0x71206f0)
	bool CanCommitNavigationRequest(); // (Native | Event | Public | BlueprintEvent | Const)
};

