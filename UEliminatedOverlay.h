// Class /Script/FortniteUI.EliminatedOverlay
// Size: 0x388
class UEliminatedOverlay : public UFortHUDElementWidget
{
	bool bIsWaitingForTeamEliminationForPlacement; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0xf]; // 0x2d1 (0xf) 
	struct TArray<struct FText> WinnerNames; // 0x2e0 (0x10)
	unsigned char unreflected_2f0[0x8]; // 0x2f0 (0x8) 
	class UOverlay* OverlayPlayerName; // 0x2f8 (0x8)
	class UTextBlock* TextEliminatedBy; // 0x300 (0x8)
	class UTextBlock* TextUserId; // 0x308 (0x8)
	class UTextBlock* TextSpectatorName; // 0x310 (0x8)
	class UVerticalBox* VBoxPlacementText; // 0x318 (0x8)
	class UVerticalBox* VBoxWinner; // 0x320 (0x8)
	class UTextBlock* TextWinnerPoints; // 0x328 (0x8)
	class UFortRichTextBlockLegacy* TextWinner; // 0x330 (0x8)
	class UTextBlock* TextMultiWinner; // 0x338 (0x8)
	class UTextBlock* TextPlacement; // 0x340 (0x8)
	class UCommonTextBlock* TextPlaceNumber; // 0x348 (0x8)
	class UTextBlock* TextPlacePoints; // 0x350 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherMultiWinners; // 0x358 (0x8)
	class UCommonTextBlock* TextMultiWinner1; // 0x360 (0x8)
	class UCommonTextBlock* TextMultiWinner2; // 0x368 (0x8)
	class UHorizontalBox* HBoxLoadingBox; // 0x370 (0x8)
	class UAthenaWinnersList* AthenaWinnersList; // 0x378 (0x8)
	class UAthenaPlayerKillsBase* WidgetKillCounter; // 0x380 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.EliminatedOverlay.UpdateMultiwinner (Underlying native function: UpdateMultiwinner 0xa532378)
	void UpdateMultiwinner(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.EliminatedOverlay.StreamingLoadingChanged (Underlying native function: StreamingLoadingChanged 0xa5322d0)
	void StreamingLoadingChanged(bool& bLoading); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.EliminatedOverlay.SetPlaceTextFont (Has no native function)
	void SetPlaceTextFont(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.SetBannerInfo (Has no native function)
	void SetBannerInfo(struct FPlayerBannerInfo& BannerInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.OnWinnerDetermined (Has no native function)
	void OnWinnerDetermined(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.OnUpdateMultiwinner (Has no native function)
	void OnUpdateMultiwinner(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.OnShowPlacementBox (Has no native function)
	void OnShowPlacementBox(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.OnResetSpectatingForCreative (Has no native function)
	void OnResetSpectatingForCreative(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.OnEliminatedByIntro (Has no native function)
	void OnEliminatedByIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.IsEliminatedByIntroAnimFinished (Has no native function)
	bool IsEliminatedByIntroAnimFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EliminatedOverlay.GetPlayerState (Underlying native function: GetPlayerState 0xa530934)
	class AFortPlayerStateAthena* GetPlayerState(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.EliminatedOverlay.DeathCauseToText (Has no native function)
	struct FText DeathCauseToText(enum EDeathCause& DeathCause); // (Event | Protected | BlueprintEvent)
};

