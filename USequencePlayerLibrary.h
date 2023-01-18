// Class /Script/AnimGraphRuntime.SequencePlayerLibrary
// Size: 0x28
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition (Underlying native function: SetStartPosition 0x9a001a0)
	static struct FSequencePlayerReference SetStartPosition(struct FSequencePlayerReference& SequencePlayer, float& StartPosition); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending (Underlying native function: SetSequenceWithInertialBlending 0x99ffff8)
	static struct FSequencePlayerReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& Sequence, float& BlendTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetSequence (Underlying native function: SetSequence 0x99ffd50)
	static struct FSequencePlayerReference SetSequence(struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& Sequence); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate (Underlying native function: SetPlayRate 0x99ffa60)
	static struct FSequencePlayerReference SetPlayRate(struct FSequencePlayerReference& SequencePlayer, float& PlayRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime (Underlying native function: SetAccumulatedTime 0x99ff13c)
	static struct FSequencePlayerReference SetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer, float& Time); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition (Underlying native function: GetStartPosition 0x99fd314)
	static float GetStartPosition(struct FSequencePlayerReference& SequencePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure (Underlying native function: GetSequencePure 0x99fd1c4)
	static class UAnimSequenceBase* GetSequencePure(struct FSequencePlayerReference& SequencePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetSequence (Underlying native function: GetSequence 0x99fd0b8)
	static struct FSequencePlayerReference GetSequence(struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& SequenceBase); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate (Underlying native function: GetPlayRate 0x99fcd6c)
	static float GetPlayRate(struct FSequencePlayerReference& SequencePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation (Underlying native function: GetLoopAnimation 0x99fcb5c)
	static bool GetLoopAnimation(struct FSequencePlayerReference& SequencePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime (Underlying native function: GetAccumulatedTime 0x99fc594)
	static float GetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure (Underlying native function: ConvertToSequencePlayerPure 0x99fbe3c)
	static void ConvertToSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequencePlayerReference& SequencePlayer, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer (Underlying native function: ConvertToSequencePlayer 0x99fbd24)
	static struct FSequencePlayerReference ConvertToSequencePlayer(struct FAnimNodeReference& Node, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration (Underlying native function: ComputePlayRateFromDuration 0x99fa9b0)
	static float ComputePlayRateFromDuration(struct FSequencePlayerReference& SequencePlayer, float& Duration); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

