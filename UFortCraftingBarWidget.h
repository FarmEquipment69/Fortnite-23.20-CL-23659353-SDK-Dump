// Class /Script/FortniteUI.FortCraftingBarWidget
// Size: 0x2f8
class UFortCraftingBarWidget : public UFortHUDElementWidget
{
	class UCommonTextBlock* CraftingText; // 0x2d0 (0x8)
	class UProgressBar* CraftingProgressBar; // 0x2d8 (0x8)
	float CompletedRemainVisibleTime; // 0x2e0 (0x4)
	unsigned char padding_2e4[0x14]; // 0x2e4 (0x14)

	/* Functions */

	// Function /Script/FortniteUI.FortCraftingBarWidget.SetHideCraftingBar (Underlying native function: SetHideCraftingBar 0xa91a6c4)
	void SetHideCraftingBar(bool& bInHideCraftBar); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCraftingBarWidget.OnCompletedSetHidden (Underlying native function: OnCompletedSetHidden 0xa919318)
	void OnCompletedSetHidden(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCraftingBarWidget.HandlePlayerStoppedCrafting (Underlying native function: HandlePlayerStoppedCrafting 0xa918878)
	void HandlePlayerStoppedCrafting(bool& bSuccess, enum EFortCraftFailCause& CraftFailureCause); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCraftingBarWidget.HandlePlayerStartedCrafting (Underlying native function: HandlePlayerStartedCrafting 0xa918864)
	void HandlePlayerStartedCrafting(); // (Final | Native | Protected)
};

