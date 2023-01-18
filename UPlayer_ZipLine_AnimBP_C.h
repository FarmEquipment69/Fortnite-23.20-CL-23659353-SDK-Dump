// AnimBlueprintGeneratedClass /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C
// Size: 0x20a0
class UPlayer_ZipLine_AnimBP_C : public UFortZiplineAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x6a0 (0x8)
	struct FAnimBlueprintGeneratedMutableData AnimBlueprintMutables; // 0x6a8 (0x70)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x718 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x720 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot20; // 0x728 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose8; // 0x748 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot19; // 0x808 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose7; // 0x828 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot18; // 0x8e8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot17; // 0x908 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot16; // 0x928 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot15; // 0x948 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot14; // 0x968 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot13; // 0x988 (0x20)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool4; // 0x9a8 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool3; // 0x9f0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer16; // 0xa38 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer15; // 0xa80 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer14; // 0xac8 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer13; // 0xb10 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum3; // 0xb58 (0x48)
	struct FAnimNode_Root AnimGraphNodeRoot12; // 0xba0 (0x20)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool2; // 0xbc0 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool1; // 0xc08 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer12; // 0xc50 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer11; // 0xc98 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer10; // 0xce0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer9; // 0xd28 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum2; // 0xd70 (0x48)
	struct FAnimNode_Root AnimGraphNodeRoot11; // 0xdb8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose6; // 0xdd8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot10; // 0xe98 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose5; // 0xeb8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot9; // 0xf78 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot8; // 0xf98 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot7; // 0xfb8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot6; // 0xfd8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot5; // 0xff8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot4; // 0x1018 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose4; // 0x1038 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot3; // 0x10f8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose3; // 0x1118 (0xc0)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose2; // 0x11d8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot2; // 0x1298 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose1; // 0x12b8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot1; // 0x1378 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose; // 0x1398 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x1458 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult3; // 0x1478 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult2; // 0x14a0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult1; // 0x14c8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult; // 0x14f0 (0x28)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose1; // 0x1518 (0x28)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool; // 0x1540 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer8; // 0x1588 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer7; // 0x15d0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer6; // 0x1618 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum1; // 0x1660 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer5; // 0x16a8 (0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend; // 0x16f0 (0xe0)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer4; // 0x17d0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer3; // 0x1818 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer2; // 0x1860 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer1; // 0x18a8 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum; // 0x18f0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult2; // 0x1938 (0x20)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose; // 0x1958 (0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer1; // 0x1980 (0x70)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive2; // 0x19f0 (0xc8)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive1; // 0x1ab8 (0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer; // 0x1b80 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult1; // 0x1bc8 (0x20)
	struct FAnimNode_LinkedAnimLayer AnimGraphNodeLinkedAnimLayer1; // 0x1be8 (0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer; // 0x1cb0 (0x70)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive; // 0x1d20 (0xc8)
	struct FAnimNode_StateResult AnimGraphNodeStateResult; // 0x1de8 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine; // 0x1e08 (0xc8)
	struct FAnimNode_LinkedAnimLayer AnimGraphNodeLinkedAnimLayer; // 0x1ed0 (0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose; // 0x1f98 (0x100)
	double PivotAnimBlendTime; // 0x2098 (0x8)

	/* Functions */

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemUpperBody (Has no native function)
	void ItemUpperBody(struct FPoseLink& InPoseUpperBody, struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink& ItemUpperBody); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemIdleAdditive (Has no native function)
	void ItemIdleAdditive(struct FPoseLink& InPoseIdleAdditive, struct FPoseLink& ItemIdleAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemJumpUpAdditive (Has no native function)
	void ItemJumpUpAdditive(struct FPoseLink& ItemJumpUpAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemJumpLoopAdditive (Has no native function)
	void ItemJumpLoopAdditive(struct FPoseLink& ItemJumpLoopAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemFallAdditive (Has no native function)
	void ItemFallAdditive(struct FPoseLink& ItemFallAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemFallLandAdditive (Has no native function)
	void ItemFallLandAdditive(struct FPoseLink& ItemFallLandAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemJetPackStartAdditive (Has no native function)
	void ItemJetPackStartAdditive(struct FPoseLink& ItemJetPackStartAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemJetPackJumpAdditive (Has no native function)
	void ItemJetPackJumpAdditive(struct FPoseLink& ItemJetPackJumpAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemZipLineStartAdditive (Has no native function)
	void ItemZipLineStartAdditive(struct FPoseLink& ItemZipLineStartAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemLowerBodyMovement (Has no native function)
	void ItemLowerBodyMovement(struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink& ItemLowerBodyMovement); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemRelaxedEntry (Has no native function)
	void ItemRelaxedEntry(struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink& ItemRelaxedEntry); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemSwimJumpStart (Has no native function)
	void ItemSwimJumpStart(struct FPoseLink& ItemSwimJumpStart); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemSwimJumpStartLoop (Has no native function)
	void ItemSwimJumpStartLoop(struct FPoseLink& ItemSwimJumpStartLoop); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemSwimJumpFallLoop (Has no native function)
	void ItemSwimJumpFallLoop(struct FPoseLink& ItemSwimJumpFallLoop); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemSwimJumpSurfaceLoop (Has no native function)
	void ItemSwimJumpSurfaceLoop(struct FPoseLink& ItemSwimJumpSurfaceLoop); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemSwimJumpSurfaceEnd (Has no native function)
	void ItemSwimJumpSurfaceEnd(struct FPoseLink& ItemSwimJumpSurfaceEnd); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemSkeletalControl (Has no native function)
	void ItemSkeletalControl(struct FPoseLink& InPose, struct FPoseLink& ItemSkeletalControl); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemAimOffset (Has no native function)
	void ItemAimOffset(struct FPoseLink& InPoseAimOffset, double& AimOffsetAlpha, double& Yaw, double& Pitch, struct FPoseLink& InPoseUpperLowerPreMeleeAO, struct FPoseLink& ItemAimOffset); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemFullBodyOverride (Has no native function)
	void ItemFullBodyOverride(struct FPoseLink& InPoseFullBody, struct FPoseLink& ItemFullBodyOverride); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ItemPreIK (Has no native function)
	void ItemPreIK(struct FPoseLink& InPosePreIK, struct FPoseLink& ItemPreIK); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.ExecuteUbergraph_Player_ZipLine_AnimBP (Has no native function)
	void ExecuteUbergraphPlayerZipLineAnimBP(int& EntryPoint); // (Final | 0x00008000)
};

