// Class /Script/FortniteUI.FortResultsWidget
// Size: 0x5a8
class UFortResultsWidget : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x78]; // 0x4e0 (0x78) 
	int AdditionalGrantedMissionPoints; // 0x558 (0x4)
	unsigned char unreflected_55c[0x4]; // 0x55c (0x4) 
	struct TArray<class UFortItem*> RewardedBadges; // 0x560 (0x10)
	struct TArray<class UFortItem*> MissedBadges; // 0x570 (0x10)
	struct TArray<class UFortItem*> RewardedItems; // 0x580 (0x10)
	struct TArray<class UFortItem*> RewardedAccountItems; // 0x590 (0x10)
	class UCommonUserWidget* RadialPicker; // 0x5a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortResultsWidget.TriggerSetupTeleportCameraEvent (Underlying native function: TriggerSetupTeleportCameraEvent 0x7574264)
	void TriggerSetupTeleportCameraEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.ToggleChat (Underlying native function: ToggleChat 0x7573ffc)
	void ToggleChat(bool& bShow); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.SendEndOfRoundUpVoteAnalytic (Underlying native function: SendEndOfRoundUpVoteAnalytic 0x75730ac)
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.SendEndOfRoundScreenAnalytic (Underlying native function: SendEndOfRoundScreenAnalytic 0x7572ea0)
	void SendEndOfRoundScreenAnalytic(struct FString& ScreenName, bool& Skipped, float& TimeSpent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.SendEndOfRoundFriendInviteAnalytic (Underlying native function: SendEndOfRoundFriendInviteAnalytic 0x7572cbc)
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.RequestExitZone (Underlying native function: RequestExitZone 0x7572b20)
	void RequestExitZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.LogXPData (Underlying native function: LogXPData 0xa6ffaac)
	void LogXPData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.IsDataFinalized (Underlying native function: IsDataFinalized 0xa6ff964)
	bool IsDataFinalized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortResultsWidget.HandlePickerCancel (Underlying native function: HandlePickerCancel 0xa6fefb4)
	void HandlePickerCancel(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.HandleEmoteClicked (Underlying native function: HandleEmoteClicked 0x7571dd0)
	void HandleEmoteClicked(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.GetZoneCompletionResultText (Underlying native function: GetZoneCompletionResultText 0xa6fe998)
	struct FText GetZoneCompletionResultText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortResultsWidget.GetZoneCompletionResult (Underlying native function: GetZoneCompletionResult 0xa6fe968)
	enum EFortCompletionResult GetZoneCompletionResult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortResultsWidget.GetTotalMissionPointsEarned (Underlying native function: GetTotalMissionPointsEarned 0xa6fe844)
	int GetTotalMissionPointsEarned(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsWidget.GetRewardsByType (Underlying native function: GetRewardsByType 0xa6fe520)
	void GetRewardsByType(enum EFortRewardItemType& Type, struct TArray<class UFortItem*>& OutRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

