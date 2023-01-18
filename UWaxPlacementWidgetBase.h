// Class /Script/FortniteUI.WaxPlacementWidgetBase
// Size: 0x3b0
class UWaxPlacementWidgetBase : public ULTMWidgetBase
{
	class AFortAthenaMutator_Wax* WaxMutator; // 0x328 (0x8)
	struct FWaxPlacementData FirstPlacement; // 0x330 (0x20)
	struct FWaxPlacementData SecondPlacement; // 0x350 (0x20)
	struct FWaxPlacementData ThirdPlacement; // 0x370 (0x20)
	struct FWaxPlacementData FourthPlacement; // 0x390 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.WaxPlacementWidgetBase.UpdateWaxPlacements (Has no native function)
	void UpdateWaxPlacements(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxPlacementWidgetBase.OnPodiumChangeOccured (Has no native function)
	void OnPodiumChangeOccured(struct TArray<class AFortPlayerStateAthena*>& Leaders); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.WaxPlacementWidgetBase.OnAnyTokenChange (Underlying native function: OnAnyTokenChange 0xa5a3a44)
	void OnAnyTokenChange(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.WaxPlacementWidgetBase.NativeOnPodiumChangeOccured (Underlying native function: NativeOnPodiumChangeOccured 0xa5a3a30)
	void NativeOnPodiumChangeOccured(); // (Final | Native | Protected)
};

