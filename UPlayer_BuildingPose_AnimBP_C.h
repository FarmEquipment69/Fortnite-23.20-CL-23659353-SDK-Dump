// AnimBlueprintGeneratedClass /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C
// Size: 0x930
class UPlayer_BuildingPose_AnimBP_C : public UFortPlayerBuildingAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x450 (0x8)
	struct FAnimBlueprintGeneratedMutableData AnimBlueprintMutables; // 0x458 (0x5)
	unsigned char unreflected_45d[0x3]; // 0x45d (0x3) 
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x460 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x468 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x470 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult4; // 0x490 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult3; // 0x4b8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult2; // 0x4e0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult1; // 0x508 (0x28)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool1; // 0x530 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer5; // 0x578 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum1; // 0x5c0 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer4; // 0x608 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer3; // 0x650 (0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNodeBlendListByEnum; // 0x698 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer2; // 0x6e0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult1; // 0x728 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer1; // 0x748 (0x48)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer; // 0x790 (0x48)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool; // 0x7d8 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult; // 0x820 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult; // 0x840 (0x28)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine; // 0x868 (0xc8)

	/* Functions */

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C.ExecuteUbergraph_Player_BuildingPose_AnimBP (Has no native function)
	void ExecuteUbergraphPlayerBuildingPoseAnimBP(int& EntryPoint); // (Final | 0x00008000)
};

