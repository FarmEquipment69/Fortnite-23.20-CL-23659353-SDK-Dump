// Class /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy
// Size: 0x598
class UFortUIStateWidget_CampaignFrontendLegacy : public UFortUIStateWidget_NUI
{
	struct FMulticastInlineDelegate OnCrossplayWidgetClosed; // 0x548 (0x10)
	class UCommonWidgetStackLegacy* MainContentStack; // 0x558 (0x8)
	class UClass* ItemReceivedScreenClass; // 0x560 (0x8)
	class UFortGiftBoxItem* NextGiftBox; // 0x568 (0x8)
	unsigned char padding_570[0x28]; // 0x570 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.TryMFAModal (Underlying native function: TryMFAModal 0xa955334)
	void TryMFAModal(class UClass*& BPClass); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.SocialBanModalCheck (Underlying native function: SocialBanModalCheck 0xa955320)
	void SocialBanModalCheck(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.ShowInitialCrossplayDialog (Underlying native function: ShowInitialCrossplayDialog 0xa9552fc)
	bool ShowInitialCrossplayDialog(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.QueueSurvivorSquadsAutoSlottedNotification (Underlying native function: QueueSurvivorSquadsAutoSlottedNotification 0xa954da8)
	void QueueSurvivorSquadsAutoSlottedNotification(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.OnStoreStateChangedBP (Has no native function)
	void OnStoreStateChangedBP(enum EFortStoreState& NewStoreState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.OnMatchmakingV2Changed (Has no native function)
	void OnMatchmakingV2Changed(bool& matchmakingActive); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.IsOkToCheckForGifts (Underlying native function: IsOkToCheckForGifts 0xa954858)
	bool IsOkToCheckForGifts(bool& bTemporary); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.HandleStoreStateChanged (Underlying native function: HandleStoreStateChanged 0xa954630)
	void HandleStoreStateChanged(enum EFortStoreState& NewStoreState); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.HandleGiftingComplete (Underlying native function: HandleGiftingComplete 0xa953cb4)
	void HandleGiftingComplete(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.HandleGiftBoxRemoved (Underlying native function: HandleGiftBoxRemoved 0xa953c34)
	void HandleGiftBoxRemoved(bool& bSuccess); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.CheckForGifts (Underlying native function: CheckForGifts 0xa953b10)
	bool CheckForGifts(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_CampaignFrontendLegacy.AttemptToOpenBattlePassTabForNewSeason (Underlying native function: AttemptToOpenBattlePassTabForNewSeason 0x2486284)
	bool AttemptToOpenBattlePassTabForNewSeason(); // (Final | Native | Protected | BlueprintCallable)
};

