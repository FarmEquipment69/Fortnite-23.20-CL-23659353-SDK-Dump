// Class /Script/FortniteGame.FortAthenaMutator_GalileoEquipment
// Size: 0x6c8
class AFortAthenaMutator_GalileoEquipment : public AFortAthenaMutator_OverrideInventoryOnce
{
	class UClass* StopDropsByApplyEffect; // 0x668 (0x8)
	bool bShouldStopDropsAfterApplying; // 0x670 (0x1)
	unsigned char unreflected_671[0x3]; // 0x671 (0x3) 
	int SlotToSwapToAfterGrantDEPRECATE; // 0x674 (0x4)
	unsigned char padding_678[0x50]; // 0x678 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GalileoEquipment.MarkPlayerLoadoutChoice (Underlying native function: MarkPlayerLoadoutChoice 0x84a74f0)
	void MarkPlayerLoadoutChoice(class AFortPlayerState*& State, int& Choice); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_GalileoEquipment.ApplyPlayerLoadout (Underlying native function: ApplyPlayerLoadout 0x71a663c)
	void ApplyPlayerLoadout(class AFortPlayerState*& State); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

