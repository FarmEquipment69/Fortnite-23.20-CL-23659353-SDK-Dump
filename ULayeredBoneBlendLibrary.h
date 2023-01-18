// Class /Script/AnimGraphRuntime.LayeredBoneBlendLibrary
// Size: 0x28
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask (Underlying native function: SetBlendMask 0x99ff31c)
	static struct FLayeredBoneBlendReference SetBlendMask(struct FAnimUpdateContext& UpdateContext, struct FLayeredBoneBlendReference& LayeredBoneBlend, int& PoseIndex, struct FName& BlendMaskName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses (Underlying native function: GetNumPoses 0x99fcc1c)
	static int GetNumPoses(struct FLayeredBoneBlendReference& LayeredBoneBlend); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend (Underlying native function: ConvertToLayeredBoneBlend 0x99fb5a8)
	static struct FLayeredBoneBlendReference ConvertToLayeredBoneBlend(struct FAnimNodeReference& Node, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure (Underlying native function: ConvertToLayeredBlendPerBonePure 0x99fb43c)
	static void ConvertToLayeredBlendPerBonePure(struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

