// Class /Script/AnimGraphRuntime.SequenceEvaluatorLibrary
// Size: 0x28
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending (Underlying native function: SetSequenceWithInertialBlending 0x99ffe50)
	static struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase*& Sequence, float& BlendTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence (Underlying native function: SetSequence 0x99ffc50)
	static struct FSequenceEvaluatorReference SetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase*& Sequence); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime (Underlying native function: SetExplicitTime 0x99ff780)
	static struct FSequenceEvaluatorReference SetExplicitTime(struct FSequenceEvaluatorReference& SequenceEvaluator, float& Time); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence (Underlying native function: GetSequence 0x99fcff8)
	static class UAnimSequenceBase* GetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime (Underlying native function: GetAccumulatedTime 0x99fc504)
	static float GetAccumulatedTime(struct FSequenceEvaluatorReference& SequenceEvaluator); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure (Underlying native function: ConvertToSequenceEvaluatorPure 0x99fbbb8)
	static void ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator (Underlying native function: ConvertToSequenceEvaluator 0x99fbaa0)
	static struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(struct FAnimNodeReference& Node, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime (Underlying native function: AdvanceTime 0x99fa768)
	static struct FSequenceEvaluatorReference AdvanceTime(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float& PlayRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

