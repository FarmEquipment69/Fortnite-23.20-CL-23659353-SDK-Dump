// Class /Script/AnimGraphRuntime.BlendSpacePlayerLibrary
// Size: 0x28
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges (Underlying native function: ShouldResetPlayTimeWhenBlendSpaceChanges 0x9a0053c)
	static bool ShouldResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges (Underlying native function: SetResetPlayTimeWhenBlendSpaceChanges 0x99ffb50)
	static struct FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool& bReset); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate (Underlying native function: SetPlayRate 0x99ff970)
	static struct FBlendSpacePlayerReference SetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer, float& PlayRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop (Underlying native function: SetLoop 0x99ff870)
	static struct FBlendSpacePlayerReference SetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool& bLoop); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending (Underlying native function: SetBlendSpaceWithInertialBlending 0x99ff5d8)
	static struct FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace*& BlendSpace, float& BlendTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace (Underlying native function: SetBlendSpace 0x99ff4d8)
	static struct FBlendSpacePlayerReference SetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace*& BlendSpace); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition (Underlying native function: GetStartPosition 0x99fd284)
	static float GetStartPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition (Underlying native function: GetPosition 0x99fcdfc)
	static struct FVector GetPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate (Underlying native function: GetPlayRate 0x99fccdc)
	static float GetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop (Underlying native function: GetLoop 0x99fca9c)
	static bool GetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace (Underlying native function: GetBlendSpace 0x99fc7bc)
	static class UBlendSpace* GetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure (Underlying native function: ConvertToBlendSpacePlayerPure 0x99fb018)
	static void ConvertToBlendSpacePlayerPure(struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer (Underlying native function: ConvertToBlendSpacePlayer 0x99faf00)
	static struct FBlendSpacePlayerReference ConvertToBlendSpacePlayer(struct FAnimNodeReference& Node, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

