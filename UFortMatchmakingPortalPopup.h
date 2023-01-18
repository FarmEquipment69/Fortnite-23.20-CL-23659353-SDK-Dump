// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
// Size: 0x4d8
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{
	unsigned char unreflected_3b0[0x10]; // 0x3b0 (0x10) 
	class UFortGameActivity* CachedGameActivity; // 0x3c0 (0x8)
	class UFortMatchmakingPortalModal* MatchmakingPortalModalWidget; // 0x3c8 (0x8)
	class UClass* MatchmakingFeedbackClass; // 0x3d0 (0x8)
	class UClass* MatchmakingCountdownClass; // 0x3d8 (0x8)
	struct FVector WorldPointerLocation; // 0x3e0 (0x18)
	struct FText CreatorNameTextFormat; // 0x3f8 (0x18)
	struct TWeakObjectPtr<class UHeaderDescriptionHUDComponent> CachedHUDComponent; // 0x410 (0x8)
	class UClass* IslandModal; // 0x418 (0x8)
	struct FMatchmakingPortalPopupData CachedIslandData; // 0x420 (0x60)
	struct FText InvalidLinkCodeWarningText; // 0x480 (0x18)
	float MatchmakingFeedbackDelayTime; // 0x498 (0x4)
	unsigned char bIsWithinPortalRange; // 0x49c (0x1)
	unsigned char unreflected_49d[0x3]; // 0x49d (0x3) 
	class UFortMatchmakingPortalCountdown* MatchmakingCountdownWidget; // 0x4a0 (0x8)
	class UCommonActivatableWidget* MatchmakingFeedbackContainerWidget; // 0x4a8 (0x8)
	class UFortAthenaCreativeMatchmakingWidget* MatchmakingFeedbackWidget; // 0x4b0 (0x8)
	class UCommonRichTextBlock* RichTextCreatorName; // 0x4b8 (0x8)
	class UCommonTextBlock* TextIslandName; // 0x4c0 (0x8)
	class UDynamicEntryBox* EntryBoxActivityTags; // 0x4c8 (0x8)
	class UFortKeybindWidget* GlobalActionKeybindWidget; // 0x4d0 (0x8)

	/* Functions */

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals (Has no native function)
	void UpdateVisuals(class UHeaderDescriptionHUDComponent*& HUDComponent); // (Event | Public | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup (Has no native function)
	void OnShowPortalPopup(bool& bShow, bool& bAnimate); // (Event | Public | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged (Has no native function)
	void OnPlayerCanInteractChanged(bool& bPlayerCanInteract); // (Event | Public | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal (Has no native function)
	bool IsInteractingDeviceAMatchmakingPortal(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow (Underlying native function: HasActivityToShow 0x749123c)
	bool HasActivityToShow(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate (Underlying native function: HandleWidgetUpdate 0x7491228)
	void HandleWidgetUpdate(); // (Final | Native | Private)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn (Underlying native function: HandleStartedRespawn 0x74911a8)
	void HandleStartedRespawn(class AFortPlayerControllerZone*& PlayerController); // (Final | Native | Private)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck (Has no native function)
	void HandleOnPortalDetailsVisibilityCheck(bool& bShowWidget); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged (Underlying native function: HandleLoadScreenChanged 0x7491050)
	void HandleLoadScreenChanged(class AFortPlayerControllerAthena*& PlayerController, bool& bLoadScreenEnabled, struct FText& HUDReason); // (Final | Native | Private)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow (Underlying native function: HandleHUDShow 0x7490f8c)
	void HandleHUDShow(bool& bShow, bool& bShouldAnimate); // (Final | Native | Private)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleFinishedCountdown (Underlying native function: HandleFinishedCountdown 0x7490f74)
	void HandleFinishedCountdown(); // (Final | Native | Private)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget (Has no native function)
	class UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(class UCommonActivatableWidget*& MatchmakingFeedbackContainer); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData (Has no native function)
	bool GetIslandData(struct FMatchmakingPortalPopupData& OutIslandData, class UHeaderDescriptionHUDComponent*& HUDComponent); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents (Has no native function)
	void BindOverlapEvents(); // (Event | Protected | BlueprintEvent)
};

