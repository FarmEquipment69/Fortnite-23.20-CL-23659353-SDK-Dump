// Class /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy
// Size: 0x4d8
class UFortAthenaMatchmakingWidgetLegacy : public UFortMatchmakingWidgetBase
{
	unsigned char unreflected_2d0[0xa0]; // 0x2d0 (0xa0) 
	struct FText RegionLockTitle; // 0x370 (0x18)
	struct TWeakObjectPtr<class UClass> MatchmakingOptionsClassRef; // 0x388 (0x28)
	struct TWeakObjectPtr<class UClass> CampaignReadyScreenClass; // 0x3b0 (0x28)
	bool bPlaylistHasSquadFillOption; // 0x3d8 (0x1)
	bool bHasPlaylistPrivateMatchOption; // 0x3d9 (0x1)
	unsigned char unreflected_3da[0x5e]; // 0x3da (0x5e) 
	class UClass* UEKittWidgetSubclass; // 0x438 (0x8)
	class UFortUEKittWidget* UEKittWidget; // 0x440 (0x8)
	class UCommonButtonBase* ButtonPlay; // 0x448 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x450 (0x8)
	class UCommonButtonBase* ButtonStartMatch; // 0x458 (0x8)
	class UCommonButtonLegacy* ButtonMatchmakingMode; // 0x460 (0x8)
	class UWidget* ContentBeaconDownloadContainer; // 0x468 (0x8)
	class UFortSimpleMaterialProgressBar* ContentDownloadProgressBar; // 0x470 (0x8)
	class UCommonTextBlock* ContentDownloadProgressText; // 0x478 (0x8)
	class UCommonTextBlock* TextBlockMatchmakingHeader; // 0x480 (0x8)
	class UCommonTextBlock* TextBlockMatchmakingMessage; // 0x488 (0x8)
	class UCommonTextBlock* TextBlockPartySizeWarning; // 0x490 (0x8)
	class UCommonTextBlock* OptionalTextBlockBlackoutCountdown; // 0x498 (0x8)
	class UCommonTextBlock* TextFillStatus; // 0x4a0 (0x8)
	class UCommonTextBlock* TextPrivateMatch; // 0x4a8 (0x8)
	class UFortCTAButton* ButtonSquadFill; // 0x4b0 (0x8)
	class UFortCTAButton* ButtonPrivateMatch; // 0x4b8 (0x8)
	class UFortShowdownDetailView* ShowdownViolator; // 0x4c0 (0x8)
	class UAthenaMatchmakingViolator* BasicViolator; // 0x4c8 (0x8)
	int8_t MaxMatchmakingReminderTooltips; // 0x4d0 (0x1)
	unsigned char padding_4d1[0x7]; // 0x4d1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.ShouldShowMatchmakingDetails (Has no native function)
	void ShouldShowMatchmakingDetails(bool& bShow); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.SetShowingDiscoveryEntryFlowToolTip (Has no native function)
	void SetShowingDiscoveryEntryFlowToolTip(bool& bShowTooltip); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.PlaylistChanged (Has no native function)
	void PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist, struct FText& PlaylistCMSOverrideName, enum EFortLobbyType& LobbyType); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.PlaylistActivityChanged (Has no native function)
	void PlaylistActivityChanged(struct FPlaylistFrontEndData& NewPlaylist, struct FText& ActivityName, enum EFortLobbyType& LobbyType); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnViolatorStyleRefreshed (Has no native function)
	void OnViolatorStyleRefreshed(enum EFortMatchmakingViolatorStyle& NewViolatorStyle); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnSquadFillButtonEnabledStateUpdated (Has no native function)
	void OnSquadFillButtonEnabledStateUpdated(bool& bIsLocalPlayerPartyLeader, bool& bIsMatchmaking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnSetPlayButtonText (Has no native function)
	void OnSetPlayButtonText(struct FText& PlayButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnSetPlayButtonSecondaryText (Has no native function)
	void OnSetPlayButtonSecondaryText(struct FText& PlayButtonSecondaryText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnSetCancelButtonText (Has no native function)
	void OnSetCancelButtonText(struct FText& CancelButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnPrivateMatchButtonEnabledStateUpdated (Has no native function)
	void OnPrivateMatchButtonEnabledStateUpdated(bool& bIsLocalPlayerPartyLeader, bool& bIsMatchmaking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnPlayButtonLockStateChanged (Has no native function)
	void OnPlayButtonLockStateChanged(bool& bLockState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnMatchmakingFinishedBlueprint (Has no native function)
	void OnMatchmakingFinishedBlueprint(bool& bSuccess, class UFortPlaylistAthena*& Playlist); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnLocalPlayerPromotedToLeader (Has no native function)
	void OnLocalPlayerPromotedToLeader(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.OnAvailablePlaylistsUpdated (Has no native function)
	void OnAvailablePlaylistsUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.IsSquadFillEnabled (Underlying native function: IsSquadFillEnabled 0xa6b444c)
	bool IsSquadFillEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.IsPrivateMatchEnabled (Underlying native function: IsPrivateMatchEnabled 0xa6b43dc)
	bool IsPrivateMatchEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.HandleMatchMakingModeCalled (Underlying native function: HandleMatchMakingModeCalled 0xa6b38f0)
	void HandleMatchMakingModeCalled(struct FString& IslandMnemonic, struct FName& InPlaylistName); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.GetPrivateMatchText (Underlying native function: GetPrivateMatchText 0xa6b2e84)
	struct FText GetPrivateMatchText(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.GetFillStatusText (Underlying native function: GetFillStatusText 0x270b864)
	struct FText GetFillStatusText(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.GetButtonPublicMatchText (Underlying native function: GetButtonPublicMatchText 0xa6b2428)
	struct FText GetButtonPublicMatchText(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteUI.FortAthenaMatchmakingWidgetLegacy.GetButtonPrivateMatchText (Underlying native function: GetButtonPrivateMatchText 0xa6b23a8)
	struct FText GetButtonPrivateMatchText(); // (Native | Event | Protected | BlueprintEvent | Const)
};

