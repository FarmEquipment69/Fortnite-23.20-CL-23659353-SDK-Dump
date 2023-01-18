// Class /Script/FortniteUI.AthenaHUDMenu
// Size: 0x350
class UAthenaHUDMenu : public UCommonUserWidget
{
	class UOverlay* OverlayAllContent; // 0x290 (0x8)
	class UFortDualBladeMenu* DualBladeMenu; // 0x298 (0x8)
	class UAthenaInventoryScreenContainer* InventoryScreenContainer; // 0x2a0 (0x8)
	class UCommonUserWidget* BottomBar; // 0x2a8 (0x8)
	class UCommonActivatableWidgetStack* WidgetStackPrimaryContent; // 0x2b0 (0x8)
	class UWidget* ContainerServerShutdownTimer; // 0x2b8 (0x8)
	class UScaleBox* ScaleBoxLeto; // 0x2c0 (0x8)
	class UWidget* ContainerContentOnDemand; // 0x2c8 (0x8)
	struct FGameplayTagContainer HideOnMenuTags; // 0x2d0 (0x20)
	struct FGameplayTagContainer TagsToShow; // 0x2f0 (0x20)
	class UClass* GameOverScreenClass; // 0x310 (0x8)
	class UClass* PostGameScreenRootClass; // 0x318 (0x8)
	class UFortPostGameScreenRoot* PostGameScreenRoot; // 0x320 (0x8)
	bool bShowingGameOverScreen; // 0x328 (0x1)
	bool bShowingWinnerScreen; // 0x329 (0x1)
	bool bStartedPostGame; // 0x32a (0x1)
	unsigned char unreflected_32b[0x5]; // 0x32b (0x5) 
	class UAthenaGameOverDisplay* GameOverScreen; // 0x330 (0x8)
	class UUserWidget* InventoryPanelOverride; // 0x338 (0x8)
	unsigned char padding_340[0x10]; // 0x340 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaHUDMenu.StartPostGame (Underlying native function: StartPostGame 0xa50a408)
	void StartPostGame(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.SetInventoryPanelOverride (Underlying native function: SetInventoryPanelOverride 0xa509ea4)
	void SetInventoryPanelOverride(class UUserWidget*& InInventoryPanelOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.RecoverFromPostGame (Underlying native function: RecoverFromPostGame 0xa50a234)
	void RecoverFromPostGame(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.PostBindCheckConditions (Underlying native function: PostBindCheckConditions 0x4877600)
	void PostBindCheckConditions(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.OnWidgetStackCleared (Has no native function)
	void OnWidgetStackCleared(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDMenu.NativeHandleCursorModeChanged (Underlying native function: NativeHandleCursorModeChanged 0x2864f40)
	void NativeHandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleStartPostGame (Underlying native function: HandleStartPostGame 0xa50a408)
	void HandleStartPostGame(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleRecoverFromPostGame (Underlying native function: HandleRecoverFromPostGame 0xa50a234)
	void HandleRecoverFromPostGame(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandlePreviewScreenshotCameraActivated (Underlying native function: HandlePreviewScreenshotCameraActivated 0xa509f38)
	void HandlePreviewScreenshotCameraActivated(bool& bActivated); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleOverrideInventoryPanel (Underlying native function: HandleOverrideInventoryPanel 0xa509ea4)
	void HandleOverrideInventoryPanel(class UUserWidget*& Widget); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleMinigameStateChanged (Underlying native function: HandleMinigameStateChanged 0xa509dcc)
	void HandleMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleLocalPlayerRevived (Underlying native function: HandleLocalPlayerRevived 0xa509cf8)
	void HandleLocalPlayerRevived(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleLocalPlayerOrTeamWon (Underlying native function: HandleLocalPlayerOrTeamWon 0xa509ce4)
	void HandleLocalPlayerOrTeamWon(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleLocalPlayerLost (Underlying native function: HandleLocalPlayerLost 0xa509c64)
	void HandleLocalPlayerLost(enum EEndOfMatchReason& LostReason); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDMenu.HandleLocalPlayerDied (Underlying native function: HandleLocalPlayerDied 0xa509bb4)
	void HandleLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.CreateOrShowGameOverScreen (Underlying native function: CreateOrShowGameOverScreen 0xa509314)
	class UAthenaGameOverDisplay* CreateOrShowGameOverScreen(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.ClearGameOverScreen (Underlying native function: ClearGameOverScreen 0xa509210)
	void ClearGameOverScreen(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDMenu.BP_OnPostGameStarted (Has no native function)
	void BPOnPostGameStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDMenu.BP_OnPostGameEnded (Has no native function)
	void BPOnPostGameEnded(); // (Event | Protected | BlueprintEvent)
};

