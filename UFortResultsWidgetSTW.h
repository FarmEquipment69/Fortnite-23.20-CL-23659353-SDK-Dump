// Class /Script/SaveTheWorldUI.FortResultsWidgetSTW
// Size: 0x470
class UFortResultsWidgetSTW : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x78]; // 0x3a8 (0x78) 
	int AdditionalGrantedMissionPoints; // 0x420 (0x4)
	unsigned char unreflected_424[0x4]; // 0x424 (0x4) 
	struct TArray<class UFortItem*> RewardedBadges; // 0x428 (0x10)
	struct TArray<class UFortItem*> MissedBadges; // 0x438 (0x10)
	struct TArray<class UFortItem*> RewardedItems; // 0x448 (0x10)
	struct TArray<class UFortItem*> RewardedAccountItems; // 0x458 (0x10)
	class UCommonUserWidget* RadialPicker; // 0x468 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.TriggerSetupTeleportCameraEvent (Underlying native function: TriggerSetupTeleportCameraEvent 0x7574264)
	void TriggerSetupTeleportCameraEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.ToggleChat (Underlying native function: ToggleChat 0x7573ffc)
	void ToggleChat(bool& bShow); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundUpVoteAnalytic (Underlying native function: SendEndOfRoundUpVoteAnalytic 0x75730ac)
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundScreenAnalytic (Underlying native function: SendEndOfRoundScreenAnalytic 0x7572ea0)
	void SendEndOfRoundScreenAnalytic(struct FString& ScreenName, bool& Skipped, float& TimeSpent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundFriendInviteAnalytic (Underlying native function: SendEndOfRoundFriendInviteAnalytic 0x7572cbc)
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, struct FString& TargetPlayerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.RequestExitZone (Underlying native function: RequestExitZone 0x7572b20)
	void RequestExitZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.LogXPData (Underlying native function: LogXPData 0x75704f4)
	void LogXPData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.IsDataFinalized (Underlying native function: IsDataFinalized 0x7570080)
	bool IsDataFinalized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandlePickerCancel (Underlying native function: HandlePickerCancel 0x756f62c)
	void HandlePickerCancel(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandleEmoteClicked (Underlying native function: HandleEmoteClicked 0x756f0c4)
	void HandleEmoteClicked(bool& bPassThrough); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResultText (Underlying native function: GetZoneCompletionResultText 0x756eabc)
	struct FText GetZoneCompletionResultText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResult (Underlying native function: GetZoneCompletionResult 0x756ea8c)
	enum EFortCompletionResult GetZoneCompletionResult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetTotalMissionPointsEarned (Underlying native function: GetTotalMissionPointsEarned 0x756e790)
	int GetTotalMissionPointsEarned(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetRewardsByType (Underlying native function: GetRewardsByType 0x756e098)
	void GetRewardsByType(enum EFortRewardItemTypeSTW& Type, struct TArray<class UFortItem*>& OutRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

