// Class /Script/FortniteUI.PostGamePlacementOverlay
// Size: 0x2f0
class UPostGamePlacementOverlay : public UFortHUDElementWidget
{
	class UClass* MutatorClassToWaitFor; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x18]; // 0x2d8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.PostGamePlacementOverlay.ShowWinningPlacement (Has no native function)
	void ShowWinningPlacement(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.PostGamePlacementOverlay.ShowTiePlacement (Has no native function)
	void ShowTiePlacement(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.PostGamePlacementOverlay.ShowLosingPlacement (Has no native function)
	void ShowLosingPlacement(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.PostGamePlacementOverlay.ShouldShow (Underlying native function: ShouldShow 0xa5322ac)
	bool ShouldShow(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteUI.PostGamePlacementOverlay.NativeShouldShow (Underlying native function: NativeShouldShow 0x735d030)
	bool NativeShouldShow(); // (0x00000002 | Native | Protected | Const)

	// Function /Script/FortniteUI.PostGamePlacementOverlay.LocalPlacementChanged (Underlying native function: LocalPlacementChanged 0xa5320bc)
	void LocalPlacementChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.PostGamePlacementOverlay.FadeOutOverlay (Has no native function)
	void FadeOutOverlay(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.PostGamePlacementOverlay.BP_ShouldShow (Underlying native function: BP_ShouldShow 0x27c9608)
	bool BPShouldShow(); // (Native | Event | Protected | BlueprintEvent | Const)
};

