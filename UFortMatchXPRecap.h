// Class /Script/FortniteUI.FortMatchXPRecap
// Size: 0x5c0
class UFortMatchXPRecap : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x188]; // 0x3a8 (0x188) 
	class UCommonVisibilitySwitcher* SwitcherDisplayTooltip; // 0x530 (0x8)
	class USizeBox* SizeBoxReadyUpTooltip; // 0x538 (0x8)
	class UAthenaIGMSquadDisplayWidget* SquadDisplayWidget; // 0x540 (0x8)
	class UFortCTAButton* MenuEntryDisabledStayWithSquad; // 0x548 (0x8)
	class UFortPostGameMenuListView* ListViewKeepPlayingTogetherMenu; // 0x550 (0x8)
	class UFortPostGameMenuListView* ListViewPostGameMenu; // 0x558 (0x8)
	class UFortMatchXPTotalEntry* MatchXPMedalEntry; // 0x560 (0x8)
	class UFortMatchXPTotalEntry* MatchXPSurvivalBonus; // 0x568 (0x8)
	class UFortMatchXPTotalEntry* MatchXPCombatBonus; // 0x570 (0x8)
	class UFortMatchXPTotalEntry* MatchXPMatchXp; // 0x578 (0x8)
	class UFortMatchXPTotalEntry* MatchXPChallengeXp; // 0x580 (0x8)
	class UFortMatchXPTotalEntry* MatchXPTotalEntry; // 0x588 (0x8)
	class UFortMatchXPTotalEntry* MatchCashTotalEntry; // 0x590 (0x8)
	class UEndOfMatchQuestUpdateWidget* WidgetQuestRecap; // 0x598 (0x8)
	class UWidget* LetoIGMMWrapper; // 0x5a0 (0x8)
	class UWidget* OverlayChallengeSection; // 0x5a8 (0x8)
	class USizeBox* SizeBoxNavigationOptions; // 0x5b0 (0x8)
	class UCommonTextBlock* TextMemberOptedOut; // 0x5b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMatchXPRecap.IsSpectating (Underlying native function: IsSpectating 0x6187730)
	bool IsSpectating(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMatchXPRecap.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0xa531bc8)
	void HandleToggleFullscreenMap(bool& bFullscreenMapVisible); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortMatchXPRecap.HandlePostMinigameReset (Underlying native function: HandlePostMinigameReset 0xa531580)
	void HandlePostMinigameReset(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortMatchXPRecap.FocusOnDesiredTarget (Underlying native function: FocusOnDesiredTarget 0xa530844)
	void FocusOnDesiredTarget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchXPRecap.BP_OnToggleSpectating (Has no native function)
	void BPOnToggleSpectating(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchXPRecap.BP_HandlePostMinigameReset (Has no native function)
	void BPHandlePostMinigameReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchXPRecap.BP_HandleExtensionWidgetCreated (Has no native function)
	void BPHandleExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchXPRecap.AnimateXPTotals (Has no native function)
	void AnimateXPTotals(); // (Event | Public | BlueprintEvent)
};

