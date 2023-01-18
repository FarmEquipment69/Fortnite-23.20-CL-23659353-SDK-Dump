// Class /Script/FortniteAI.FortAthenaPlayMontageStateTreeTask
// Size: 0x78
class UFortAthenaPlayMontageStateTreeTask : public UStateTreeTaskBlueprintBase
{
	class AActor* Actor; // 0x38 (0x8)
	class UAnimMontage* Montage; // 0x40 (0x8)
	bool bWaitForNotifyEventToEnd; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FName NotifyEventNameToEnd; // 0x4c (0x4)
	bool bSetMovementModeToFlying; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	int LoopsToRun; // 0x54 (0x4)
	bool bLoopForever; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	float DelayBetweenLoops; // 0x5c (0x4)
	float RandomDeviationBetweenLoops; // 0x60 (0x4)
	bool bStopAnimMontageOnExit; // 0x64 (0x1)
	unsigned char padding_65[0x13]; // 0x65 (0x13)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaPlayMontageStateTreeTask.HandleNotifyBeginReceived (Underlying native function: HandleNotifyBeginReceived 0xa3e2b60)
	void HandleNotifyBeginReceived(struct FName& NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteAI.FortAthenaPlayMontageStateTreeTask.HandleMontageEnded (Underlying native function: HandleMontageEnded 0xa3e2a98)
	void HandleMontageEnded(class UAnimMontage*& EndedMontage, bool& bInterrupted); // (Final | Native | Private)
};

