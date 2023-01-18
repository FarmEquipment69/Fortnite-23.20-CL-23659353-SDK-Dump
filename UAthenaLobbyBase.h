// Class /Script/FortniteUI.AthenaLobbyBase
// Size: 0x790
class UAthenaLobbyBase : public UFortLobbyWidget
{
	unsigned char unreflected_580[0xd8]; // 0x580 (0xd8) 
	class UContentWidget* ContentMatchmakingWidget; // 0x658 (0x8)
	class UEmergencyNoticeBase* NoticeEmergency; // 0x660 (0x8)
	class UFortAthenaMOTDTeaserWidget* FortAthenaMOTDTeaserWidgetMain; // 0x668 (0x8)
	class UCommonBorder* LobbyDetailsDefault; // 0x670 (0x8)
	class UFortTournamentLobbyPanel* LobbyDetailsTournament; // 0x678 (0x8)
	class UFortDivisionLobbyPanel* LobbyDetailsShowdownDivision; // 0x680 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherLobbyDetailsMode; // 0x688 (0x8)
	class UCommonButtonBase* ButtonGenericLink; // 0x690 (0x8)
	class UCommonButtonBase* ButtonQuests; // 0x698 (0x8)
	class UCommonButtonBase* ButtonShadowPlayHighlights; // 0x6a0 (0x8)
	class UVerticalBox* VerticalBoxLobbyDetails; // 0x6a8 (0x8)
	class UVerticalBox* VerticalBoxLobbyDetailsExtensionHolder; // 0x6b0 (0x8)
	class UOverlay* OverlayDynamicExtensions; // 0x6b8 (0x8)
	struct TWeakObjectPtr<class UClass> NewEmotePicker; // 0x6c0 (0x28)
	class UCatalogMessaging* CatalogMessaging; // 0x6e8 (0x8)
	struct FDataTableRowHandle SquadFormationInputAction; // 0x6f0 (0x10)
	class UClass* SquadFormationClass; // 0x700 (0x8)
	class UClass* DefaultMatchmakingWidgetClass; // 0x708 (0x8)
	class UFortAthenaMatchmakingWidgetLegacy* MatchmakingWidget; // 0x710 (0x8)
	class UFortGlobalSeasonResourceWidget* SeasonalResources; // 0x718 (0x8)
	unsigned char padding_720[0x70]; // 0x720 (0x70)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLobbyBase.UpdateGenericLinkText (Has no native function)
	void UpdateGenericLinkText(struct FText& NewText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLobbyBase.OnPlaylistChanged (Has no native function)
	void OnPlaylistChanged(enum EFortLobbyType& LobbyType, class UFortPlaylistAthena*& PlaylistData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLobbyBase.OnMatchmakingWidgetChanged (Has no native function)
	void OnMatchmakingWidgetChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLobbyBase.OnLobbyChanged (Has no native function)
	void OnLobbyChanged(enum EFortLobbyType& LobbyType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLobbyBase.HasUnseenQuests (Underlying native function: HasUnseenQuests 0xa4aff54)
	bool HasUnseenQuests(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaLobbyBase.HandleUnseenQuestsChanged (Has no native function)
	void HandleUnseenQuestsChanged(bool& bHasUnseenQuests); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLobbyBase.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0xa4afec4)
	void HandleToggleFullscreenMap(bool& bVisible); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaLobbyBase.HandlePickerOpenRequest (Underlying native function: HandlePickerOpenRequest 0x28ca624)
	void HandlePickerOpenRequest(enum EFortPickerMode& Mode, int& InitialOption, bool& bIgnoreFirstAccept); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaLobbyBase.HandleHideLobbySeasonResources (Underlying native function: HandleHideLobbySeasonResources 0xa4af748)
	void HandleHideLobbySeasonResources(bool& bShouldHide); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaLobbyBase.HandleActiveWidgetChanged (Underlying native function: HandleActiveWidgetChanged 0x29caabc)
	void HandleActiveWidgetChanged(class UWidget*& NewActiveWidget, int& WidgetIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaLobbyBase.DisplayStoreUpdated (Has no native function)
	void DisplayStoreUpdated(class UStoreToastRequest*& StoreUpdatedRequest); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLobbyBase.DisplayGlyphQuestUpdated (Has no native function)
	void DisplayGlyphQuestUpdated(int& NewGlyphs); // (Event | Protected | BlueprintEvent)
};

