// AnimBlueprintGeneratedClass /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C
// Size: 0x54d0
class USwimmingAnimBP_C : public UFortSwimmingLayerAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9a0 (0x8)
	struct FAnimBlueprintGeneratedMutableData AnimBlueprintMutables; // 0x9a8 (0xa8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0xa50 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0xa58 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot6; // 0xa60 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose8; // 0xa80 (0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool12; // 0xb40 (0x48)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNodeRotationOffsetBlendSpace4; // 0xb88 (0x118)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum3; // 0xca0 (0x48)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose7; // 0xce8 (0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose7; // 0xda8 (0x100)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose12; // 0xea8 (0x28)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose11; // 0xed0 (0x28)
	struct FAnimNode_Root AnimGraphNodeRoot5; // 0xef8 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose6; // 0xf18 (0xc0)
	struct FAnimNode_RotateRootBone AnimGraphNodeRotateRootBone1; // 0xfd8 (0xa8)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNodeRotationOffsetBlendSpace3; // 0x1080 (0x118)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNodeRotationOffsetBlendSpace2; // 0x1198 (0x118)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult48; // 0x12b0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult47; // 0x12d8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult46; // 0x1300 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult45; // 0x1328 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult44; // 0x1350 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer18; // 0x1378 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult24; // 0x13c0 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer17; // 0x13e0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult23; // 0x1428 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer16; // 0x1448 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult22; // 0x1490 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer15; // 0x14b0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult21; // 0x14f8 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine6; // 0x1518 (0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose6; // 0x15e0 (0x100)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool11; // 0x16e0 (0x48)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose10; // 0x1728 (0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend4; // 0x1750 (0xe0)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose9; // 0x1830 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer14; // 0x1858 (0x48)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend4; // 0x18a0 (0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose5; // 0x1960 (0x100)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose8; // 0x1a60 (0x28)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum2; // 0x1a88 (0x48)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose7; // 0x1ad0 (0x28)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive; // 0x1af8 (0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer13; // 0x1bc0 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool10; // 0x1c08 (0x48)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose6; // 0x1c50 (0x28)
	struct FAnimNode_Root AnimGraphNodeRoot4; // 0x1c78 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose5; // 0x1c98 (0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose4; // 0x1d58 (0x100)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose5; // 0x1e58 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult43; // 0x1e80 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult42; // 0x1ea8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult41; // 0x1ed0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult40; // 0x1ef8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult39; // 0x1f20 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult38; // 0x1f48 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult37; // 0x1f70 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult36; // 0x1f98 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult35; // 0x1fc0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult34; // 0x1fe8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult33; // 0x2010 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult32; // 0x2038 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult31; // 0x2060 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult30; // 0x2088 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult29; // 0x20b0 (0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace4; // 0x20d8 (0x20)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone5; // 0x20f8 (0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace4; // 0x2220 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult28; // 0x2240 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult27; // 0x2268 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult26; // 0x2290 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult25; // 0x22b8 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer12; // 0x22e0 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool9; // 0x2328 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer11; // 0x2370 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult20; // 0x23b8 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer12; // 0x23d8 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult19; // 0x2448 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer10; // 0x2468 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult18; // 0x24b0 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine5; // 0x24d0 (0xc8)
	struct FAnimNode_StateResult AnimGraphNodeStateResult17; // 0x2598 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult24; // 0x25b8 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer9; // 0x25e0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult16; // 0x2628 (0x20)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose4; // 0x2648 (0x28)
	struct FAnimNode_StateResult AnimGraphNodeStateResult15; // 0x2670 (0x20)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose3; // 0x2690 (0x28)
	struct FAnimNode_StateResult AnimGraphNodeStateResult14; // 0x26b8 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine4; // 0x26d8 (0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose3; // 0x27a0 (0x100)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend3; // 0x28a0 (0xc0)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult23; // 0x2960 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult22; // 0x2988 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult21; // 0x29b0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult20; // 0x29d8 (0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer11; // 0x2a00 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult13; // 0x2a70 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer10; // 0x2a90 (0x70)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum1; // 0x2b00 (0x48)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer9; // 0x2b48 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult12; // 0x2bb8 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer8; // 0x2bd8 (0x70)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum; // 0x2c48 (0x48)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer7; // 0x2c90 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult11; // 0x2d00 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine3; // 0x2d20 (0xc8)
	struct FAnimNode_RotateRootBone AnimGraphNodeRotateRootBone; // 0x2de8 (0xa8)
	struct FAnimNode_Root AnimGraphNodeRoot3; // 0x2e90 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose4; // 0x2eb0 (0xc0)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose3; // 0x2f70 (0xc0)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose2; // 0x3030 (0xc0)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult19; // 0x30f0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult18; // 0x3118 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult17; // 0x3140 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult16; // 0x3168 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult15; // 0x3190 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult14; // 0x31b8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult13; // 0x31e0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult12; // 0x3208 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult11; // 0x3230 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult10; // 0x3258 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer8; // 0x3280 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult10; // 0x32c8 (0x20)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNodeRotationOffsetBlendSpace1; // 0x32e8 (0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace3; // 0x3400 (0x20)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone4; // 0x3420 (0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace3; // 0x3548 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer6; // 0x3568 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult9; // 0x35d8 (0x20)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNodeRotationOffsetBlendSpace; // 0x35f8 (0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace2; // 0x3710 (0x20)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone3; // 0x3730 (0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace2; // 0x3858 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer5; // 0x3878 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult8; // 0x38e8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer7; // 0x3908 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult7; // 0x3950 (0x20)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone2; // 0x3970 (0x128)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace1; // 0x3a98 (0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace1; // 0x3ab8 (0x20)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone1; // 0x3ad8 (0x128)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose2; // 0x3c00 (0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace; // 0x3c28 (0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace; // 0x3c48 (0x20)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone; // 0x3c68 (0x128)
	struct FAnimNode_StateResult AnimGraphNodeStateResult6; // 0x3d90 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine2; // 0x3db0 (0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose2; // 0x3e78 (0x100)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose1; // 0x3f78 (0x100)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer4; // 0x4078 (0x70)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool8; // 0x40e8 (0x48)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend2; // 0x4130 (0xc0)
	struct FAnimNode_Root AnimGraphNodeRoot2; // 0x41f0 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose1; // 0x4210 (0xc0)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult9; // 0x42d0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult8; // 0x42f8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult7; // 0x4320 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult6; // 0x4348 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult5; // 0x4370 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult4; // 0x4398 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult3; // 0x43c0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult2; // 0x43e8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult1; // 0x4410 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult; // 0x4438 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer6; // 0x4460 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult5; // 0x44a8 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer3; // 0x44c8 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult4; // 0x4538 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer5; // 0x4558 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult3; // 0x45a0 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer4; // 0x45c0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer3; // 0x4608 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool7; // 0x4650 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool6; // 0x4698 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer2; // 0x46e0 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool5; // 0x4728 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer1; // 0x4770 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool4; // 0x47b8 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer; // 0x4800 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult2; // 0x4848 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer2; // 0x4868 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult1; // 0x48d8 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine1; // 0x48f8 (0xc8)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool3; // 0x49c0 (0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend3; // 0x4a08 (0xe0)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose3; // 0x4ae8 (0x10)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend2; // 0x4af8 (0xe0)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose2; // 0x4bd8 (0x10)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend1; // 0x4be8 (0xe0)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose1; // 0x4cc8 (0x10)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend1; // 0x4cd8 (0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool2; // 0x4d98 (0x48)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer1; // 0x4de0 (0x70)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer; // 0x4e50 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult; // 0x4ec0 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine; // 0x4ee0 (0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNodeLayeredBoneBlend; // 0x4fa8 (0xe0)
	struct FAnimNode_RefPose AnimGraphNodeIdentityPose; // 0x5088 (0x10)
	struct FAnimNode_Root AnimGraphNodeRoot1; // 0x5098 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose; // 0x50b8 (0xc0)
	struct FAnimNode_SequenceEvaluator AnimGraphNodeSequenceEvaluator1; // 0x5178 (0x40)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend; // 0x51b8 (0xc0)
	struct FAnimNode_SequenceEvaluator AnimGraphNodeSequenceEvaluator; // 0x5278 (0x40)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool1; // 0x52b8 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool; // 0x5300 (0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNodeSaveCachedPose; // 0x5348 (0x100)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose1; // 0x5448 (0x28)
	struct FAnimNode_UseCachedPose AnimGraphNodeUseCachedPose; // 0x5470 (0x28)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x5498 (0x20)
	bool AllowSprintStop; // 0x54b8 (0x1)
	bool ChangeMovementToVelocityFromAccel; // 0x54b9 (0x1)
	unsigned char unreflected_54ba[0x6]; // 0x54ba (0x6) 
	double LocalAccelYawAngleAtStart; // 0x54c0 (0x8)
	double PivotAngle; // 0x54c8 (0x8)

	/* Functions */

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_AimOffset (Has no native function)
	void MovementModeAimOffset(struct FPoseLink& InAimOffsetsPose, struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink& MovementModeAimOffset); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_FinalPoseOverride (Has no native function)
	void MovementModeFinalPoseOverride(struct FPoseLink& InFinalPose, struct FPoseLink& MovementModeFinalPoseOverride); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_FullBodyOverride (Has no native function)
	void MovementModeFullBodyOverride(struct FPoseLink& InputPoseFullBody, struct FPoseLink& MovementModeFullBodyOverride); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_LowerBodyOverride (Has no native function)
	void MovementModeLowerBodyOverride(struct FPoseLink& InLowerBodyPose, struct FPoseLink& InSourcePose, struct FPoseLink& InSourcePosePreUpperBodySlot, struct FPoseLink& MovementModeLowerBodyOverride); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_LocomotionAdditives (Has no native function)
	void MovementModeLocomotionAdditives(struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink& MovementModeLocomotionAdditives); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_SourcePose (Has no native function)
	void MovementModeSourcePose(struct FPoseLink& InSourcePoseBase, struct FPoseLink& MovementModeSourcePose); // (HasOutParms | BlueprintCallable)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.On Dive Jump Ground Land Update (Has no native function)
	void OnDiveJumpGroundLandUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, struct FAnimationStateResultReference& CallFuncConvertToAnimationStateResultAnimationState, enum EAnimNodeReferenceConversionResult& CallFuncConvertToAnimationStateResultResult, float& CallFuncGetRelevantAnimTimeRemainingReturnValue, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A (Has no native function)
	void EvaluateGraphExposedInputsExecuteUbergraphSwimmingAnimBPAnimGraphNodeTransitionResult63C0C596447D773617BA3F81E189DD6A(); // (BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35 (Has no native function)
	void EvaluateGraphExposedInputsExecuteUbergraphSwimmingAnimBPAnimGraphNodeTransitionResultA2BC0C1C4C08F505008D78822E2CDA35(); // (BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer (Has no native function)
	void AnimNotifySwimSprintStartEnteredLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer (Has no native function)
	void AnimNotifySwimSprintStartExitedLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer (Has no native function)
	void AnimNotifySwimSprintEnteredLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer (Has no native function)
	void AnimNotifySwimSprintSlowEnteredLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer (Has no native function)
	void AnimNotifySwimStartAdditiveEnteredLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer (Has no native function)
	void AnimNotifySwimMovementAccelAdditiveExitedLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP (Has no native function)
	void ExecuteUbergraphSwimmingAnimBP(int& EntryPoint, bool& TempboolHasBeenInitdVariable, bool& TempboolWhetherthegateiscurrentlyopenorcloseVariable, bool& TempboolIsClosedVariable, float& CallFuncGetRelevantAnimTimeReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, float& CallFuncGetRelevantAnimTimeReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue1, double& CallFuncGreaterDoubleDoubleAImplicitCast, double& K2NodeVariableSetLocalAccelYawAngleAtStartImplicitCast, double& CallFuncGreaterDoubleDoubleAImplicitCast1); // (Final | 0x00008000)
};

