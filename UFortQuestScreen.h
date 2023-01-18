// Class /Script/SaveTheWorldUI.FortQuestScreen
// Size: 0x4a0
class UFortQuestScreen : public UCommonActivatableWidget
{
	class UCommonTreeView* TreeViewQuests; // 0x3a8 (0x8)
	class UScrollBox* ScrollBoxQuestDetails; // 0x3b0 (0x8)
	class UClass* QuestManagerComponentClass; // 0x3b8 (0x8)
	struct FDataTableRowHandle BackAction; // 0x3c0 (0x10)
	struct FDataTableRowHandle LeaveInventoryAction; // 0x3d0 (0x10)
	struct FDataTableRowHandle PlayQuestAction; // 0x3e0 (0x10)
	struct FDataTableRowHandle AbandonQuestAction; // 0x3f0 (0x10)
	struct FDataTableRowHandle ClaimRewardAction; // 0x400 (0x10)
	struct FDataTableRowHandle ReplayIntroAction; // 0x410 (0x10)
	struct FDataTableRowHandle ReplayOutroAction; // 0x420 (0x10)
	struct FDataTableRowHandle PinQuestAction; // 0x430 (0x10)
	struct FDataTableRowHandle UnpinQuestAction; // 0x440 (0x10)
	struct FDataTableRowHandle StopConversationAction; // 0x450 (0x10)
	unsigned char padding_460[0x40]; // 0x460 (0x40)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestScreen.TriggerClaimRewardEvent (Underlying native function: TriggerClaimRewardEvent 0x75c2db8)
	void TriggerClaimRewardEvent(class UFortQuestItem*& QuestItem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetInputActionStates (Underlying native function: SetInputActionStates 0x75c2414)
	void SetInputActionStates(class UFortQuestItem*& QuestItem, bool& bIsQuestAudioPlaying, bool& bShouldShowPlayQuest, bool& bAreQuestItemsDifferent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetDisableClaimRewardButton (Underlying native function: SetDisableClaimRewardButton 0x75c1a28)
	void SetDisableClaimRewardButton(bool& bToDisable); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.ProcessPendingSeenQuestItems (Underlying native function: ProcessPendingSeenQuestItems 0x75c11ec)
	void ProcessPendingSeenQuestItems(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.OnContentMissing (Has no native function)
	void OnContentMissing(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_SetInitialQuestToSelect (Has no native function)
	void BPSetInitialQuestToSelect(class UFortQuestItem*& QuestItem); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleUnpinQuestAction (Has no native function)
	void BPHandleUnpinQuestAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleStopConversationAction (Has no native function)
	void BPHandleStopConversationAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayOutroAction (Has no native function)
	void BPHandleReplayOutroAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayIntroAction (Has no native function)
	void BPHandleReplayIntroAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePlayQuestAction (Has no native function)
	void BPHandlePlayQuestAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePinQuestAction (Has no native function)
	void BPHandlePinQuestAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleClaimRewardAction (Has no native function)
	void BPHandleClaimRewardAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleBackAction (Has no native function)
	void BPHandleBackAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleAbandonQuestAction (Has no native function)
	void BPHandleAbandonQuestAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestScreen.AttemptToPlayQuest (Underlying native function: AttemptToPlayQuest 0x5b4d4a0)
	void AttemptToPlayQuest(class UFortQuestItem*& QuestItem); // (Final | Native | Protected | BlueprintCallable)
};

