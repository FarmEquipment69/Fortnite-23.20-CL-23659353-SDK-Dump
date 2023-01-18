// Class /Script/GameplayStateMachine.GameplayState
// Size: 0x78
class UGameplayState : public UObject
{
	struct FGameplayTag StateId; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FGameplayTagContainer StateRuntimeTags; // 0x30 (0x20)
	bool bEvaluateTransition; // 0x50 (0x1)
	bool bReplicates; // 0x51 (0x1)
	bool bStateBegun; // 0x52 (0x1)
	bool bStateEnded; // 0x53 (0x1)
	float InitializationServerTime; // 0x54 (0x4)
	float BeginStateDelay; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	class UGameplayStateMachine* CachedGameplayStateMachine; // 0x60 (0x8)
	class UGameplayStateMachineManager* CachedStateMachineManager; // 0x68 (0x8)
	class UGameplayState* HackStateToDelayProcess; // 0x70 (0x8)

	/* Functions */

	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEventServer (Has no native function)
	void UpdateStateEventServer(float& DeltaTime); // (Event | Protected | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEventClient (Has no native function)
	void UpdateStateEventClient(float& DeltaTime); // (Event | Protected | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEvent (Has no native function)
	void UpdateStateEvent(float& DeltaTime); // (Event | Protected | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.RemoveStateRuntimeTag (Underlying native function: RemoveStateRuntimeTag 0x743b9ec)
	void RemoveStateRuntimeTag(struct FGameplayTag& RemovedTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions (Underlying native function: MarkStateToEvaluateTransitions 0x743b9c4)
	void MarkStateToEvaluateTransitions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEventServer (Has no native function)
	void InitializeStateEventServer(struct FGameplayTag& PrevStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEventClient (Has no native function)
	void InitializeStateEventClient(struct FGameplayTag& PrevStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEvent (Has no native function)
	void InitializeStateEvent(struct FGameplayTag& PrevStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.HasStateRuntimeTag (Underlying native function: HasStateRuntimeTag 0x743b898)
	bool HasStateRuntimeTag(struct FGameplayTag& QueryTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayStateMachine.GameplayState.HasAuthority (Underlying native function: HasAuthority 0x743b874)
	bool HasAuthority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayState.GetStateRuntimeTags (Underlying native function: GetStateRuntimeTags 0x743b858)
	struct FGameplayTagContainer GetStateRuntimeTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayState.GetStateId (Underlying native function: GetStateId 0x743b82c)
	struct FGameplayTag GetStateId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayState.GetOwningActor (Underlying native function: GetOwningActor 0x743b808)
	class AActor* GetOwningActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayState.GetGameplayStateMachine (Underlying native function: GetGameplayStateMachine 0x743b7f0)
	class UGameplayStateMachine* GetGameplayStateMachine(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayStateMachine.GameplayState.EndStateEventServer (Has no native function)
	void EndStateEventServer(struct FGameplayTag& NextStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.EndStateEventClient (Has no native function)
	void EndStateEventClient(struct FGameplayTag& NextStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.EndStateEvent (Has no native function)
	void EndStateEvent(struct FGameplayTag& NextStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEventServer (Has no native function)
	void BeginStateEventServer(struct FGameplayTag& PrevStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEventClient (Has no native function)
	void BeginStateEventClient(struct FGameplayTag& PrevStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEvent (Has no native function)
	void BeginStateEvent(struct FGameplayTag& PrevStateId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayStateMachine.GameplayState.AddStateRuntimeTag (Underlying native function: AddStateRuntimeTag 0x743b70c)
	void AddStateRuntimeTag(struct FGameplayTag& AddedTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

