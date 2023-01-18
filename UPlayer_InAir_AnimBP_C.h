// AnimBlueprintGeneratedClass /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C
// Size: 0x4540
class UPlayer_InAir_AnimBP_C : public UFortPlayerPrototypeAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1680 (0x8)
	struct FAnimBlueprintGeneratedMutableData AnimBlueprintMutables; // 0x1688 (0x88)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x1710 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x1718 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot20; // 0x1720 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose9; // 0x1740 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot19; // 0x1800 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose8; // 0x1820 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot18; // 0x18e0 (0x20)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool15; // 0x1900 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer26; // 0x1948 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer25; // 0x1990 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer24; // 0x19d8 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool14; // 0x1a20 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer23; // 0x1a68 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer22; // 0x1ab0 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool13; // 0x1af8 (0x48)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose7; // 0x1b40 (0x10)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool12; // 0x1b50 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer21; // 0x1b98 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum2; // 0x1be0 (0x48)
	struct FAnimNode_Root AnimGraphNodeRoot17; // 0x1c28 (0x20)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool11; // 0x1c48 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer20; // 0x1c90 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer19; // 0x1cd8 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer18; // 0x1d20 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool10; // 0x1d68 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer17; // 0x1db0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer16; // 0x1df8 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool9; // 0x1e40 (0x48)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose6; // 0x1e88 (0x10)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool8; // 0x1e98 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer15; // 0x1ee0 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum1; // 0x1f28 (0x48)
	struct FAnimNode_Root AnimGraphNodeRoot16; // 0x1f70 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer14; // 0x1f90 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool7; // 0x1fd8 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer13; // 0x2020 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer12; // 0x2068 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool6; // 0x20b0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer11; // 0x20f8 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool5; // 0x2140 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer10; // 0x2188 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool4; // 0x21d0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer9; // 0x2218 (0x48)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose5; // 0x2260 (0x10)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool3; // 0x2270 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer8; // 0x22b8 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum; // 0x2300 (0x48)
	struct FAnimNode_Root AnimGraphNodeRoot15; // 0x2348 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot14; // 0x2368 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot13; // 0x2388 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot12; // 0x23a8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot11; // 0x23c8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose7; // 0x23e8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot10; // 0x24a8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose6; // 0x24c8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot9; // 0x2588 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot8; // 0x25a8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot7; // 0x25c8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot6; // 0x25e8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot5; // 0x2608 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot4; // 0x2628 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose5; // 0x2648 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot3; // 0x2708 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose4; // 0x2728 (0xc0)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose3; // 0x27e8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot2; // 0x28a8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose2; // 0x28c8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot1; // 0x2988 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose1; // 0x29a8 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x2a68 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose; // 0x2a88 (0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose; // 0x2b48 (0x100)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend5; // 0x2c48 (0xe0)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult24; // 0x2d28 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult23; // 0x2d50 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult22; // 0x2d78 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult21; // 0x2da0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult20; // 0x2dc8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult19; // 0x2df0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult18; // 0x2e18 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult17; // 0x2e40 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult16; // 0x2e68 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult15; // 0x2e90 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult14; // 0x2eb8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult13; // 0x2ee0 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer7; // 0x2f08 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult7; // 0x2f50 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer6; // 0x2f70 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult6; // 0x2fb8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer5; // 0x2fd8 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult5; // 0x3020 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine2; // 0x3040 (0xc8)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose2; // 0x3108 (0x28)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive1; // 0x3130 (0xc8)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult12; // 0x31f8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult11; // 0x3220 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult10; // 0x3248 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult9; // 0x3270 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult8; // 0x3298 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult7; // 0x32c0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult6; // 0x32e8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult5; // 0x3310 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult4; // 0x3338 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult3; // 0x3360 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult2; // 0x3388 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult1; // 0x33b0 (0x28)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose4; // 0x33d8 (0x10)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend2; // 0x33e8 (0xc0)
	struct FAnimNode_LinkedAnimLayer AnimGraphNodeLinkedAnimLayer1; // 0x34a8 (0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend4; // 0x3570 (0xe0)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer4; // 0x3650 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult4; // 0x3698 (0x20)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose3; // 0x36b8 (0x10)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend1; // 0x36c8 (0xc0)
	struct FAnimNode_LinkedAnimLayer AnimGraphNodeLinkedAnimLayer; // 0x3788 (0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer3; // 0x3850 (0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend3; // 0x3898 (0xe0)
	struct FAnimNode_StateResult AnimGraphNodeStateResult3; // 0x3978 (0x20)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose2; // 0x3998 (0x10)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend; // 0x39a8 (0xc0)
	struct FAnimNode_LinkedAnimLayer AnimGraphNodeLayer; // 0x3a68 (0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend2; // 0x3b30 (0xe0)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer2; // 0x3c10 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult2; // 0x3c58 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine1; // 0x3c78 (0xc8)
	struct FAnimNode_Inertialization AnimGraphNodeInertialization; // 0x3d40 (0x100)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer; // 0x3e40 (0x70)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive; // 0x3eb0 (0xc8)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose1; // 0x3f78 (0x28)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool2; // 0x3fa0 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool1; // 0x3fe8 (0x48)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult; // 0x4030 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer1; // 0x4058 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult1; // 0x40a0 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer; // 0x40c0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult; // 0x4108 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine; // 0x4128 (0xc8)
	struct FAnimNode_ModifyCurve AnimGraphNodeModifyCurve; // 0x41f0 (0x100)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend1; // 0x42f0 (0xe0)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose1; // 0x43d0 (0x10)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend; // 0x43e0 (0xe0)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose; // 0x44c0 (0x10)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool; // 0x44d0 (0x48)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose; // 0x4518 (0x28)

	/* Functions */

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemUpperBody (Has no native function)
	void ItemUpperBody(struct FPoseLink& InPoseUpperBody, struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink& ItemUpperBody); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemIdleAdditive (Has no native function)
	void ItemIdleAdditive(struct FPoseLink& InPoseIdleAdditive, struct FPoseLink& ItemIdleAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemJumpUpAdditive (Has no native function)
	void ItemJumpUpAdditive(struct FPoseLink& ItemJumpUpAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemJumpLoopAdditive (Has no native function)
	void ItemJumpLoopAdditive(struct FPoseLink& ItemJumpLoopAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemFallAdditive (Has no native function)
	void ItemFallAdditive(struct FPoseLink& ItemFallAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemFallLandAdditive (Has no native function)
	void ItemFallLandAdditive(struct FPoseLink& ItemFallLandAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemJetPackStartAdditive (Has no native function)
	void ItemJetPackStartAdditive(struct FPoseLink& ItemJetPackStartAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemJetPackJumpAdditive (Has no native function)
	void ItemJetPackJumpAdditive(struct FPoseLink& ItemJetPackJumpAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemZipLineStartAdditive (Has no native function)
	void ItemZipLineStartAdditive(struct FPoseLink& ItemZipLineStartAdditive); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemLowerBodyMovement (Has no native function)
	void ItemLowerBodyMovement(struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink& ItemLowerBodyMovement); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemRelaxedEntry (Has no native function)
	void ItemRelaxedEntry(struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink& ItemRelaxedEntry); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemSwimJumpStart (Has no native function)
	void ItemSwimJumpStart(struct FPoseLink& ItemSwimJumpStart); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemSwimJumpStartLoop (Has no native function)
	void ItemSwimJumpStartLoop(struct FPoseLink& ItemSwimJumpStartLoop); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemSwimJumpFallLoop (Has no native function)
	void ItemSwimJumpFallLoop(struct FPoseLink& ItemSwimJumpFallLoop); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemSwimJumpSurfaceLoop (Has no native function)
	void ItemSwimJumpSurfaceLoop(struct FPoseLink& ItemSwimJumpSurfaceLoop); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemSwimJumpSurfaceEnd (Has no native function)
	void ItemSwimJumpSurfaceEnd(struct FPoseLink& ItemSwimJumpSurfaceEnd); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemSkeletalControl (Has no native function)
	void ItemSkeletalControl(struct FPoseLink& InPose, struct FPoseLink& ItemSkeletalControl); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemAimOffset (Has no native function)
	void ItemAimOffset(struct FPoseLink& InPoseAimOffset, double& AimOffsetAlpha, double& Yaw, double& Pitch, struct FPoseLink& InPoseUpperLowerPreMeleeAO, struct FPoseLink& ItemAimOffset); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemFullBodyOverride (Has no native function)
	void ItemFullBodyOverride(struct FPoseLink& InPoseFullBody, struct FPoseLink& ItemFullBodyOverride); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ItemPreIK (Has no native function)
	void ItemPreIK(struct FPoseLink& InPosePreIK, struct FPoseLink& ItemPreIK); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& SourcePose, struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.BlueprintUpdateAnimation (Has no native function)
	void BlueprintUpdateAnimation(float& DeltaTimeX); // (Event | Public | BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.ExecuteUbergraph_Player_InAir_AnimBP (Has no native function)
	void ExecuteUbergraphPlayerInAirAnimBP(int& EntryPoint, float& K2NodeEventDeltaTimeX); // (Final | 0x00008000)
};

