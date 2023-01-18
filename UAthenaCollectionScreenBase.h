// Class /Script/FortniteUI.AthenaCollectionScreenBase
// Size: 0x5e8
class UAthenaCollectionScreenBase : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	struct FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x3c0 (0x50)
	bool bUseMcpProfileData; // 0x410 (0x1)
	unsigned char unreflected_411[0x7]; // 0x411 (0x7) 
	struct FText CollectionName; // 0x418 (0x18)
	struct FString CollectionType; // 0x430 (0x10)
	struct FString CollectionCategory; // 0x440 (0x10)
	struct FText UnknownText; // 0x450 (0x18)
	struct FText UnknownDescription; // 0x468 (0x18)
	struct TWeakObjectPtr<class UObject> KnownEntryImage; // 0x480 (0x28)
	struct TWeakObjectPtr<class UObject> UnknownEntryImage; // 0x4a8 (0x28)
	struct TWeakObjectPtr<class UObject> KnownOverlayImage; // 0x4d0 (0x28)
	struct TWeakObjectPtr<class UObject> UnknownOverlayImage; // 0x4f8 (0x28)
	struct FText PersonalBestTextFormat; // 0x520 (0x18)
	unsigned char PersonalBestMinimumFractionalDigits; // 0x538 (0x1)
	unsigned char PersonalBestMaximumFractionalDigits; // 0x539 (0x1)
	unsigned char unreflected_53a[0x6]; // 0x53a (0x6) 
	struct TWeakObjectPtr<class UClass> SoftInfoOverlayClass; // 0x540 (0x28)
	class UScrollBox* ScrollBoxList; // 0x568 (0x8)
	class UAthenaCollectionListView* CollectionListView; // 0x570 (0x8)
	class UContentWidget* ContentInfoOverlayContainer; // 0x578 (0x8)
	class UCommonButtonLegacy* ButtonToggleInfoOverlay; // 0x580 (0x8)
	class UCommonButtonLegacy* ButtonBack; // 0x588 (0x8)
	bool bWantsToShowInfoOverlay; // 0x590 (0x1)
	bool bForceOverlayToggleMobile; // 0x591 (0x1)
	unsigned char unreflected_592[0x6]; // 0x592 (0x6) 
	class UAthenaCollectionPlayerProgressContainer* PlayerProgressContainer; // 0x598 (0x8)
	class UAthenaCollectionScreenInfoOverlay* InfoOverlay; // 0x5a0 (0x8)
	class UFortCollectionsDataTable* CollectionsDataTable; // 0x5a8 (0x8)
	class UFortCollectionData* CollectionData; // 0x5b0 (0x8)
	unsigned char unreflected_5b8[0x10]; // 0x5b8 (0x10) 
	struct FGameplayTag CategoryTag; // 0x5c8 (0x4)
	unsigned char unreflected_5cc[0x4]; // 0x5cc (0x4) 
	struct FText CategoryTitle; // 0x5d0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionScreenBase.CenterSelectedEntry (Underlying native function: CenterSelectedEntry 0xa4e09ac)
	void CenterSelectedEntry(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCollectionScreenBase.BP_OnStartedLoading (Has no native function)
	void BPOnStartedLoading(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenBase.BP_OnInfoOverlayDeactivated (Has no native function)
	void BPOnInfoOverlayDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenBase.BP_OnInfoOverlayActivated (Has no native function)
	void BPOnInfoOverlayActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenBase.BP_OnHandleSelectedEntryChanged (Has no native function)
	void BPOnHandleSelectedEntryChanged(class UAthenaCollectionListEntry*& SelectedEntry); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenBase.BP_OnFinishedLoading (Has no native function)
	void BPOnFinishedLoading(); // (Event | Protected | BlueprintEvent)
};

