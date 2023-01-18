// AnimBlueprintGeneratedClass /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C
// Size: 0xd29
class UPlayer_DBNO_AnimBP_C : public UFortDBNOAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x460 (0x8)
	struct FAnimBlueprintGeneratedMutableData AnimBlueprintMutables; // 0x468 (0x18)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x480 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x488 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x490 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult10; // 0x4b0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult9; // 0x4d8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult8; // 0x500 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult7; // 0x528 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult6; // 0x550 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult5; // 0x578 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult4; // 0x5a0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult3; // 0x5c8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult2; // 0x5f0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult1; // 0x618 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer3; // 0x640 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult4; // 0x688 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer2; // 0x6a8 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult3; // 0x6f0 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer1; // 0x710 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult2; // 0x758 (0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer1; // 0x778 (0x70)
	struct FAnimNode_StateResult AnimGraphNodeStateResult1; // 0x7e8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer; // 0x808 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult; // 0x850 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult; // 0x870 (0x28)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine; // 0x898 (0xc8)
	struct FAnimNode_ApplyAdditive AnimGraphNodeApplyAdditive; // 0x960 (0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer; // 0xa28 (0x70)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone1; // 0xa98 (0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace; // 0xbc0 (0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace; // 0xbe0 (0x20)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone; // 0xc00 (0x128)
	bool AdjustLargeBody; // 0xd28 (0x1)

	/* Functions */

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_F28F19494706BFB6D2F74181D211D9E5 (Has no native function)
	void EvaluateGraphExposedInputsExecuteUbergraphPlayerDBNOAnimBPAnimGraphNodeModifyBoneF28F19494706BFB6D2F74181D211D9E5(); // (BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_5F4823B441208B2FBDD3F9A03D4F08DD (Has no native function)
	void EvaluateGraphExposedInputsExecuteUbergraphPlayerDBNOAnimBPAnimGraphNodeModifyBone5F4823B441208B2FBDD3F9A03D4F08DD(); // (BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C.BlueprintUpdateAnimation (Has no native function)
	void BlueprintUpdateAnimation(float& DeltaTimeX); // (Event | Public | BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C.ExecuteUbergraph_Player_DBNO_AnimBP (Has no native function)
	void ExecuteUbergraphPlayerDBNOAnimBP(int& EntryPoint, float& K2NodeEventDeltaTimeX, bool& CallFuncEqualEqualByteByteReturnValue); // (Final | 0x00008000)
};

