// Class /Script/FortniteAI.FortAthenaPlayInteractionStateTreeTask
// Size: 0xb0
class UFortAthenaPlayInteractionStateTreeTask : public UStateTreeTaskBlueprintBase
{
	class AActor* InteractorActor; // 0x38 (0x8)
	class AActor* InteractableActor; // 0x40 (0x8)
	class UAnimMontage* InteractorMontage; // 0x48 (0x8)
	class UAnimMontage* InteractableMontage; // 0x50 (0x8)
	bool bWaitForNotifyEventToEnd; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	struct FName NotifyEventNameToEnd; // 0x5c (0x4)
	bool bAddMotionWarpingTargets; // 0x60 (0x1)
	bool bDisableCollisionBetweenActors; // 0x61 (0x1)
	bool bSetMovementModeToFlying; // 0x62 (0x1)
	unsigned char unreflected_63[0x1]; // 0x63 (0x1) 
	int LoopsToRun; // 0x64 (0x4)
	bool bLoopForever; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	float DelayBetweenLoops; // 0x6c (0x4)
	float RandomDeviationBetweenLoops; // 0x70 (0x4)
	bool bStopInteractorAnimMontageOnExit; // 0x74 (0x1)
	bool bStopInteractableAnimMontageOnExit; // 0x75 (0x1)
	unsigned char padding_76[0x3a]; // 0x76 (0x3a)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaPlayInteractionStateTreeTask.OnNotifyBeginReceived (Underlying native function: OnNotifyBeginReceived 0xa3e3b68)
	void OnNotifyBeginReceived(struct FName& NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteAI.FortAthenaPlayInteractionStateTreeTask.OnMontageEnded (Underlying native function: OnMontageEnded 0xa3e3aa0)
	void OnMontageEnded(class UAnimMontage*& EndedMontage, bool& bInterrupted); // (Final | Native | Private)
};

