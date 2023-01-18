// Class /Script/FortniteUI.FortAthenaMatchmakingOptions
// Size: 0x6a0
class UFortAthenaMatchmakingOptions : public UFortActivatablePanel
{
	class UClass* AthenaMatchmakingKnobsModalClass; // 0x518 (0x8)
	unsigned char unreflected_520[0x8]; // 0x520 (0x8) 
	class UClass* TileItemClass; // 0x528 (0x8)
	class UClass* LoadingContentModalClass; // 0x530 (0x8)
	class UClass* HardcoreChallengesScreenClass; // 0x538 (0x8)
	class UCommonButtonGroupLegacy* MatchmakingTileGroup; // 0x540 (0x8)
	struct FAthenaPlaylistEntry RepresentedPlaylistCMSEntry; // 0x548 (0x78)
	struct FPlaylistFrontEndData RepresentedPlaylist; // 0x5c0 (0x50)
	unsigned char unreflected_610[0x8]; // 0x610 (0x8) 
	class UScrollBox* StandardGameModeBox; // 0x618 (0x8)
	class UScrollBox* LTMGameModeBox; // 0x620 (0x8)
	class UScrollBox* LTMGameModeBox2; // 0x628 (0x8)
	class UOverlay* OverlayLTMGameModeBox2; // 0x630 (0x8)
	class UScrollBox* ModeDescriptionScrollBox; // 0x638 (0x8)
	class UCommonButtonLegacy* ButtonHardcoreChallenges; // 0x640 (0x8)
	class UCommonButtonLegacy* TeamFillButton; // 0x648 (0x8)
	class UCommonButtonLegacy* SpectateButton; // 0x650 (0x8)
	class UCommonButtonLegacy* ButtonServerPrivacy; // 0x658 (0x8)
	class UCommonButtonLegacy* MatchmakingKnobsButton; // 0x660 (0x8)
	class UCommonTextBlock* MatchmakingWarningText; // 0x668 (0x8)
	class UCommonTextBlock* TextMatchmakingSmallPoolWarning; // 0x670 (0x8)
	class UCommonTextBlock* TextFillDisabledHardcoreModifiersWarning; // 0x678 (0x8)
	class UCommonTextBlock* TextHardcoreModifiersDisabledForPlaylistWarning; // 0x680 (0x8)
	class UCommonTextBlock* TextLimitedPoolsDescription; // 0x688 (0x8)
	unsigned char unreflected_690[0x8]; // 0x690 (0x8) 
	float ScheduleTime; // 0x698 (0x4)
	unsigned char padding_69c[0x4]; // 0x69c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.UpdateShowSupportAffiliateButton (Has no native function)
	void UpdateShowSupportAffiliateButton(bool& bIsCreativeLTM); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.UpdateMMButtonStatusBP (Has no native function)
	void UpdateMMButtonStatusBP(bool& bPlaylistIsEnabled, enum EFillDisableReason& FillDisableReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.SetSquadFillText (Has no native function)
	void SetSquadFillText(struct FText& TextToUse); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.SetSpectatorButtonText (Has no native function)
	void SetSpectatorButtonText(enum ESpectatorQueueType& InSpectatorQueueType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.SetServerAccessText (Has no native function)
	void SetServerAccessText(enum EServerAccessSetting& InServerAccessSetting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.SetHardcoreModiferButtonText (Has no native function)
	void SetHardcoreModiferButtonText(struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.RepresentedPlaylistChanged (Has no native function)
	void RepresentedPlaylistChanged(struct FPlaylistFrontEndData& NewRepresentedPlaylist); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.OnTileDoubleClicked (Has no native function)
	void OnTileDoubleClicked(class UCommonButtonLegacy*& ButtonClicked); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.OnAffiliateUpdated (Has no native function)
	void OnAffiliateUpdated(struct FString& AffiliateName); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.OnAcceptedPlaylist (Has no native function)
	void OnAcceptedPlaylist(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.IsLiveSpectateButtonEnabled (Underlying native function: IsLiveSpectateButtonEnabled 0xa6b43a8)
	bool IsLiveSpectateButtonEnabled(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.HandleInputTypeChanged (Underlying native function: HandleInputTypeChanged 0xa6b37ac)
	void HandleInputTypeChanged(enum ECommonInputType& CurrentInputType); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.HandleButtonGroupSelectionChanged (Underlying native function: HandleButtonGroupSelectionChanged 0xa6b3698)
	void HandleButtonGroupSelectionChanged(class UCommonButtonLegacy*& Button, int& Index); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.GetCurrentlyRepresentedData (Underlying native function: GetCurrentlyRepresentedData 0xa6b26e0)
	struct FPlaylistFrontEndData GetCurrentlyRepresentedData(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.CloseMatchmakingOptions (Underlying native function: CloseMatchmakingOptions 0x6a4a708)
	void CloseMatchmakingOptions(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.CanceledPlaylist (Underlying native function: CanceledPlaylist 0xa6b1d4c)
	void CanceledPlaylist(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMatchmakingOptions.AcceptedPlaylist (Underlying native function: AcceptedPlaylist 0xa6b1930)
	void AcceptedPlaylist(); // (Final | Native | Protected | BlueprintCallable)
};

