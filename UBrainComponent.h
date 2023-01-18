// Class /Script/AIModule.BrainComponent
// Size: 0xf8
class UBrainComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	class UBlackboardComponent* BlackboardComp; // 0xa8 (0x8)
	class AAIController* AIOwner; // 0xb0 (0x8)
	unsigned char padding_b8[0x40]; // 0xb8 (0x40)

	/* Functions */

	// Function /Script/AIModule.BrainComponent.StopLogic (Underlying native function: StopLogic 0xa1bba64)
	void StopLogic(struct FString& Reason); // (Native | Public | BlueprintCallable)

	// Function /Script/AIModule.BrainComponent.StartLogic (Underlying native function: StartLogic 0x25f7420)
	void StartLogic(); // (Native | Public | BlueprintCallable)

	// Function /Script/AIModule.BrainComponent.RestartLogic (Underlying native function: RestartLogic 0x292d060)
	void RestartLogic(); // (Native | Public | BlueprintCallable)

	// Function /Script/AIModule.BrainComponent.IsRunning (Underlying native function: IsRunning 0x756fed4)
	bool IsRunning(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BrainComponent.IsPaused (Underlying native function: IsPaused 0x756feac)
	bool IsPaused(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

