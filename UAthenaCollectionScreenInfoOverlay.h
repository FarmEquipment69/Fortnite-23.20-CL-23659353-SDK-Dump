// Class /Script/FortniteUI.AthenaCollectionScreenInfoOverlay
// Size: 0x470
class UAthenaCollectionScreenInfoOverlay : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FName ParamNameItemIcon; // 0x3b0 (0x4)
	struct FName ParamNameIsDiscovered; // 0x3b4 (0x4)
	class UCommonRichTextBlock* RichTextAdditionalInfo; // 0x3b8 (0x8)
	class UImage* ImageItemImage; // 0x3c0 (0x8)
	struct FText NumCollectedTextFormat; // 0x3c8 (0x18)
	struct FText EmptyDisplayNameText; // 0x3e0 (0x18)
	struct FDataTableRowHandle ToggleLeaderboardRowHandle; // 0x3f8 (0x10)
	class UCommonTextBlock* TextItemType; // 0x408 (0x8)
	class UCommonTextBlock* TextItemName; // 0x410 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x418 (0x8)
	class UCommonRichTextBlock* RichTextAdditionalDescription; // 0x420 (0x8)
	class UPanelWidget* PanelFriendScores; // 0x428 (0x8)
	class UCommonRichTextBlock* RichTextNumCollected; // 0x430 (0x8)
	class UCommonTextBlock* TextItemNumber; // 0x438 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x440 (0x8)
	class UFortDynamicEntryBox* EntryBoxInfoOverlay; // 0x448 (0x8)
	class UAthenaCollectionLeaderboard* FriendLeaderboard; // 0x450 (0x8)
	unsigned char padding_458[0x18]; // 0x458 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnShowLeaderboard (Has no native function)
	void BPOnShowLeaderboard(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnItemIconLoaded (Has no native function)
	void BPOnItemIconLoaded(class UObject*& ItemIcon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnInfoOverlayReset (Has no native function)
	void BPOnInfoOverlayReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnHideLeaderboard (Has no native function)
	void BPOnHideLeaderboard(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnHasAdditionalInfoSet (Has no native function)
	void BPOnHasAdditionalInfoSet(bool& bHasAdditionalInfo); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnFriendScoresUpdated (Has no native function)
	void BPOnFriendScoresUpdated(int& NumFriendScores); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnFriendLeaderboardDeactivated (Has no native function)
	void BPOnFriendLeaderboardDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnFriendLeaderboardActivated (Has no native function)
	void BPOnFriendLeaderboardActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnContextTagsUpdated (Has no native function)
	void BPOnContextTagsUpdated(int& NumContextTags); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlay.BP_OnCollectedStateSet (Has no native function)
	void BPOnCollectedStateSet(enum EFortCollectedState& CollectedState); // (Event | Protected | BlueprintEvent)
};

