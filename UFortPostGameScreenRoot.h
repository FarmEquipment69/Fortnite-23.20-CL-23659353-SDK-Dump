// Class /Script/FortniteUI.FortPostGameScreenRoot
// Size: 0x430
class UFortPostGameScreenRoot : public UCommonActivatableWidget
{
	class UFortPlaylistUIInfo* PreviewPlaylistUIInfo; // 0x3a8 (0x8)
	class UFortPlaylistUIInfo* DefaultScreenOrder; // 0x3b0 (0x8)
	struct TArray<class UClass*> PostGameScreenClassesToCreate; // 0x3b8 (0x10)
	struct TArray<class UFortPostGameScreen*> PostGameScreens; // 0x3c8 (0x10)
	class USpacer* SpacerClickCatcher; // 0x3d8 (0x8)
	class UOverlay* OverlayPlacement; // 0x3e0 (0x8)
	class UFortPostGameScreenContainer* PostGameScreenContainerMain; // 0x3e8 (0x8)
	class UUserWidget* HUDCinematicBars; // 0x3f0 (0x8)
	class UScaleBox* ScaleBoxCinematicBarsUserSpecified; // 0x3f8 (0x8)
	class UScaleBox* ScaleBoxPlacementOverlayUserSpecified; // 0x400 (0x8)
	class UFortPostGameNewQuestsWidget* HUDNewQuestsWidget; // 0x408 (0x8)
	class UPostGamePlacementOverlay* DefaultPlacementOverlay; // 0x410 (0x8)
	class UPostGamePlacementOverlay* OverridePlacementOverlay; // 0x418 (0x8)
	class USoundCue* DefaultVictoryStingerCue; // 0x420 (0x8)
	class USoundCue* OverrideVictoryStingerCue; // 0x428 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPostGameScreenRoot.ToggleBlur (Has no native function)
	void ToggleBlur(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPostGameScreenRoot.HandleXPScreenFinished (Underlying native function: HandleXPScreenFinished 0xa532014)
	void HandleXPScreenFinished(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPostGameScreenRoot.HandleRecoverFromPostGame (Underlying native function: HandleRecoverFromPostGame 0xa53188c)
	void HandleRecoverFromPostGame(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPostGameScreenRoot.AnimateCinematicBars (Has no native function)
	void AnimateCinematicBars(); // (Event | Protected | BlueprintEvent)
};

