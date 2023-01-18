// Class /Script/AnimGraphRuntime.AnimationStateMachineLibrary
// Size: 0x28
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.SetState (Underlying native function: SetState 0x9a00290)
	static void SetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node, struct FName& TargetState, float& Duration, struct TEnumAsByte<ETransitionLogicType>& BlendType, class UBlendProfile*& BlendProfile, enum EAlphaBlendOption& AlphaBlendOption, class UCurveFloat*& CustomBlendCurve); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut (Underlying native function: IsStateBlendingOut 0x99fd6f4)
	static bool IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn (Underlying native function: IsStateBlendingIn 0x99fd5ac)
	static bool IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetState (Underlying native function: GetState 0x99fd3a4)
	static struct FName GetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction (Underlying native function: GetRelevantAnimTimeRemainingFraction 0x99fcee4)
	static float GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining (Underlying native function: GetRelevantAnimTimeRemaining 0x23f6c38)
	static float GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure (Underlying native function: ConvertToAnimationStateResultPure 0x99fad88)
	static void ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult (Underlying native function: ConvertToAnimationStateResult 0x257bc60)
	static void ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure (Underlying native function: ConvertToAnimationStateMachinePure 0x99fac10)
	static void ConvertToAnimationStateMachinePure(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine (Underlying native function: ConvertToAnimationStateMachine 0x99faa98)
	static void ConvertToAnimationStateMachine(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

