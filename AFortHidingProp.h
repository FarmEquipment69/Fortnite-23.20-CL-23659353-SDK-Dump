// Class /Script/FortniteGame.FortHidingProp
// Size: 0xf40
class AFortHidingProp : public ABuildingProp
{
	bool InteractToExit; // 0xee8 (0x1)
	unsigned char padding_ee9[0x57]; // 0xee9 (0x57)

	/* Functions */

	// Function /Script/FortniteGame.FortHidingProp.ShouldUseInteractionForExit (Underlying native function: ShouldUseInteractionForExit 0x8392df8)
	bool ShouldUseInteractionForExit(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHidingProp.SetInputEnabled (Underlying native function: SetInputEnabled 0x83928c8)
	void SetInputEnabled(class AFortPlayerPawn*& TargetPlayerPawn, bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHidingProp.BP_HandleExitPressed (Has no native function)
	void BPHandleExitPressed(class AFortPlayerPawn*& TargetPlayerPawn); // (Event | Protected | BlueprintEvent)
};

