// Class /Script/FortniteUI.FortSpectatedPlayerSwitcher
// Size: 0x290
class UFortSpectatedPlayerSwitcher : public UUserWidget
{
	int MaxPlayersToShow; // 0x268 (0x4)
	unsigned char unreflected_26c[0x4]; // 0x26c (0x4) 
	struct TArray<struct FPotentialSpectatorTarget> DisplayedTargets; // 0x270 (0x10)
	struct TArray<struct FPotentialSpectatorTarget> AvailableTargets; // 0x280 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSpectatedPlayerSwitcher.ShouldBeVisible (Underlying native function: ShouldBeVisible 0x2486284)
	bool ShouldBeVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSpectatedPlayerSwitcher.OnDisplayedTargetsUpdated (Has no native function)
	void OnDisplayedTargetsUpdated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatedPlayerSwitcher.FocusWidget (Has no native function)
	void FocusWidget(); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

