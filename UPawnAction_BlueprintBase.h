// Class /Script/AIModule.PawnAction_BlueprintBase
// Size: 0x90
class UPawnAction_BlueprintBase : public UPawnAction
{

	/* Functions */

	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick (Has no native function)
	void ActionTick(class APawn*& ControlledPawn, float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart (Has no native function)
	void ActionStart(class APawn*& ControlledPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume (Has no native function)
	void ActionResume(class APawn*& ControlledPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause (Has no native function)
	void ActionPause(class APawn*& ControlledPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished (Has no native function)
	void ActionFinished(class APawn*& ControlledPawn, struct TEnumAsByte<EPawnActionResult>& WithResult); // (Event | Public | BlueprintEvent)
};

