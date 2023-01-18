// Class /Script/SkeletalMerging.SkeletalMergingLibrary
// Size: 0x28
class USkeletalMergingLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SkeletalMerging.SkeletalMergingLibrary.MergeSkeletons (Underlying native function: MergeSkeletons 0x750c55c)
	static class USkeleton* MergeSkeletons(struct FSkeletonMergeParams& Params); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SkeletalMerging.SkeletalMergingLibrary.MergeMeshes (Underlying native function: MergeMeshes 0x750c4c0)
	static class USkeletalMesh* MergeMeshes(struct FSkeletalMeshMergeParams& Params); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

