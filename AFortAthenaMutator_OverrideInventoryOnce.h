// Class /Script/FortniteGame.FortAthenaMutator_OverrideInventoryOnce
// Size: 0x668
class AFortAthenaMutator_OverrideInventoryOnce : public AFortAthenaMutator_InventoryOverride
{
	struct TSet<class AFortPlayerState*> AlreadyProcessedPlayerStates; // 0x618 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_OverrideInventoryOnce.MarkPlayerInventoryImmune (Underlying native function: MarkPlayerInventoryImmune 0x84ee334)
	void MarkPlayerInventoryImmune(class AFortPlayerState*& ImmunePlayer); // (Final | Native | Public | BlueprintCallable)
};

