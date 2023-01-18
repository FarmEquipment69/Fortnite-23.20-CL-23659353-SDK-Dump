// Class /Script/Engine.CachedAnimDataLibrary
// Size: 0x28
class UCachedAnimDataLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.CachedAnimDataLibrary.StateMachine_IsStateRelevant (Underlying native function: StateMachine_IsStateRelevant 0x9c7e56c)
	static bool StateMachineIsStateRelevant(class UAnimInstance*& InAnimInstance, struct FCachedAnimStateData& CachedAnimStateData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.CachedAnimDataLibrary.StateMachine_GetLocalWeight (Underlying native function: StateMachine_GetLocalWeight 0x9c7e480)
	static float StateMachineGetLocalWeight(class UAnimInstance*& InAnimInstance, struct FCachedAnimStateData& CachedAnimStateData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.CachedAnimDataLibrary.StateMachine_GetGlobalWeight (Underlying native function: StateMachine_GetGlobalWeight 0x9c7e394)
	static float StateMachineGetGlobalWeight(class UAnimInstance*& InAnimInstance, struct FCachedAnimStateData& CachedAnimStateData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

