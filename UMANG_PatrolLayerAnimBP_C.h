// AnimBlueprintGeneratedClass /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C
// Size: 0x11a0
class UMANG_PatrolLayerAnimBP_C : public UFortPatrolAnimLayer
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4c0 (0x8)
	struct FAnimBlueprintGeneratedMutableData AnimBlueprintMutables; // 0x4c8 (0x1c)
	unsigned char unreflected_4e4[0x4]; // 0x4e4 (0x4) 
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x4e8 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x4f0 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot2; // 0x4f8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose1; // 0x518 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot1; // 0x5d8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose; // 0x5f8 (0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool; // 0x6b8 (0x48)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult7; // 0x700 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult6; // 0x728 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult5; // 0x750 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult4; // 0x778 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult3; // 0x7a0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult2; // 0x7c8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult1; // 0x7f0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult; // 0x818 (0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer2; // 0x840 (0x70)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend1; // 0x8b0 (0xe0)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose4; // 0x990 (0x28)
	struct FAnimNode_StateResult AnimGraphNodeStateResult3; // 0x9b8 (0x20)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose3; // 0x9d8 (0x28)
	struct FAnimNode_StateResult AnimGraphNodeStateResult2; // 0xa00 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer1; // 0xa20 (0x70)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive1; // 0xa90 (0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend; // 0xb58 (0xe0)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose2; // 0xc38 (0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer; // 0xc60 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult1; // 0xcd0 (0x20)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose1; // 0xcf0 (0x28)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive; // 0xd18 (0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer1; // 0xde0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult; // 0xe28 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine; // 0xe48 (0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose1; // 0xf10 (0x100)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose; // 0x1010 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer; // 0x1038 (0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose; // 0x1080 (0x100)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x1180 (0x20)

	/* Functions */

	// Function /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.CharacterSkeletalControlPostLegIK (Has no native function)
	void CharacterSkeletalControlPostLegIK(struct FPoseLink& InPosePostLegIK, struct FPoseLink& CharacterSkeletalControlPostLegIK); // (HasOutParms | BlueprintCallable)

	// Function /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.FullBodyOverride (Has no native function)
	void FullBodyOverride(struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink& FullBodyOverride); // (HasOutParms | BlueprintCallable)

	// Function /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.ExecuteUbergraph_MANG_PatrolLayerAnimBP (Has no native function)
	void ExecuteUbergraphMANGPatrolLayerAnimBP(int& EntryPoint); // (Final | 0x00008000)
};

