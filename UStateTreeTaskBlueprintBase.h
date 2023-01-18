// Class /Script/StateTreeModule.StateTreeTaskBlueprintBase
// Size: 0x38
class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{
	unsigned char bShouldStateChangeOnReselect; // 0x30 (0x1)
	unsigned char bShouldCallTickOnlyOnEvents; // 0x30 (0x1)
	unsigned char bShouldCopyBoundPropertiesOnTick; // 0x30 (0x1)
	unsigned char bShouldCopyBoundPropertiesOnExitState; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)

	/* Functions */

	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick (Has no native function)
	enum EStateTreeRunStatus ReceiveTick(float& DeltaTime); // (Event | Public | BlueprintEvent)

	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted (Has no native function)
	void ReceiveStateCompleted(enum EStateTreeRunStatus& CompletionStatus, struct FStateTreeActiveStates& CompletedActiveStates); // (Event | Public | BlueprintEvent)

	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState (Has no native function)
	void ReceiveExitState(struct FStateTreeTransitionResult& TRANSITION); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState (Has no native function)
	enum EStateTreeRunStatus ReceiveEnterState(struct FStateTreeTransitionResult& TRANSITION); // (Event | Public | HasOutParms | BlueprintEvent)
};

