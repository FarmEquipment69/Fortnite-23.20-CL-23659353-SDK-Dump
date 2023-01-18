// Class /Script/FortniteUI.FortTournamentPayoutModal
// Size: 0x478
class UFortTournamentPayoutModal : public UCommonActivatableWidget
{
	struct FDataTableRowHandle TabViewLeftAction; // 0x3a8 (0x10)
	struct FDataTableRowHandle TabViewRightAction; // 0x3b8 (0x10)
	class UCommonButtonGroupLegacy* ViewButtonGroup; // 0x3c8 (0x8)
	class UCommonTextBlock* TextTournamentName; // 0x3d0 (0x8)
	class UCommonTextBlock* TextSessionName; // 0x3d8 (0x8)
	class UCommonTextBlock* TextThresholdTypeLabel; // 0x3e0 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxPayoutThresholds; // 0x3e8 (0x8)
	struct TArray<struct FTournamentPayoutThresholdData> TournamentPayoutData; // 0x3f0 (0x10)
	class UDynamicEntryBox* EntryBoxViewButtons; // 0x400 (0x8)
	class UCommonActionWidget* ActionWidgetTabLeft; // 0x408 (0x8)
	class UCommonActionWidget* ActionWidgetTabRight; // 0x410 (0x8)
	struct TMap<class UCommonButtonLegacy*, struct FRewardsDataIds> ButtonsToRewards; // 0x418 (0x50)
	unsigned char padding_468[0x10]; // 0x468 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortTournamentPayoutModal.UpdateEventWindow (Underlying native function: UpdateEventWindow 0xa93a74c)
	void UpdateEventWindow(struct FString& EventId, struct FString& EventWindowId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTournamentPayoutModal.SetEventWindowId (Underlying native function: SetEventWindowId 0xa93a15c)
	void SetEventWindowId(struct FString& EventId, struct FString& EventWindowId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTournamentPayoutModal.OnTabVisibilityChange (Has no native function)
	void OnTabVisibilityChange(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTournamentPayoutModal.NotifyNoPayouts (Has no native function)
	void NotifyNoPayouts(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTournamentPayoutModal.InitializeTabButton (Has no native function)
	void InitializeTabButton(class UCommonButtonLegacy*& TabButton, struct FText& TabText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortTournamentPayoutModal.HandleViewTabSelectionChanged (Underlying native function: HandleViewTabSelectionChanged 0xa939700)
	void HandleViewTabSelectionChanged(class UCommonButtonLegacy*& TabButton, int& TabIdx); // (Final | Native | Private)
};

