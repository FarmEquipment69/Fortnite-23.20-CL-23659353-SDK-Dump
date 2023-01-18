// Class /Script/GameplayStateMachine.GameplayStateMachine
// Size: 0xc8
class UGameplayStateMachine : public UGameplayState
{
	unsigned char unreflected_78[0x18]; // 0x78 (0x18) 
	struct FGameplayTag StateMachineId; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FActiveGameplayStateData ActiveGameplayStateData; // 0x98 (0x18)
	struct TArray<struct FGameplayStateSettings> GameplayStateSettings; // 0xb0 (0x10)
	struct FGameplayTag InitialGameplayStateId; // 0xc0 (0x4)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)

	/* Functions */

	// Function /Script/GameplayStateMachine.GameplayStateMachine.SetState (Underlying native function: SetState 0x743ba7c)
	void SetState(struct FGameplayTag& InStateId, float& InBeginStateDelay); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData (Underlying native function: OnRep_ActiveGameplayStateData 0x743b9d8)
	void OnRepActiveGameplayStateData(); // (Final | Native | Private)

	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetStateMachineId (Underlying native function: GetStateMachineId 0x743b840)
	struct FGameplayTag GetStateMachineId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetActiveStateObject (Underlying native function: GetActiveStateObject 0x743b7d8)
	class UGameplayState* GetActiveStateObject(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetActiveStateId (Underlying native function: GetActiveStateId 0x743b7b0)
	struct FGameplayTag GetActiveStateId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition (Underlying native function: EvaluateStateTransition 0x743b798)
	void EvaluateStateTransition(); // (Native | Event | Protected | BlueprintEvent)
};

