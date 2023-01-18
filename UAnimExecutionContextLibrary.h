// Class /Script/AnimGraphRuntime.AnimExecutionContextLibrary
// Size: 0x28
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime (Underlying native function: GetDeltaTime 0x99fc92c)
	static float GetDeltaTime(struct FAnimUpdateContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight (Underlying native function: GetCurrentWeight 0x99fc87c)
	static float GetCurrentWeight(struct FAnimUpdateContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference (Underlying native function: GetAnimNodeReference 0x99fc6b4)
	static struct FAnimNodeReference GetAnimNodeReference(class UAnimInstance*& Instance, int& Index); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance (Underlying native function: GetAnimInstance 0x251d17c)
	static class UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext (Underlying native function: ConvertToUpdateContext 0x99fc22c)
	static struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext (Underlying native function: ConvertToPoseContext 0x99fb944)
	static struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext (Underlying native function: ConvertToInitializationContext 0x99fb2e0)
	static struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext (Underlying native function: ConvertToComponentSpacePoseContext 0x99fb184)
	static struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, enum EAnimExecutionContextConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

