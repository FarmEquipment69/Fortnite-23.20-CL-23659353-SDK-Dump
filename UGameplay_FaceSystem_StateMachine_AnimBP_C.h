// AnimBlueprintGeneratedClass /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
// Size: 0x167a
class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UHeadPartAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x700 (0x8)
	struct FAnimBlueprintGeneratedMutableData AnimBlueprintMutables; // 0x708 (0xc)
	unsigned char unreflected_714[0x4]; // 0x714 (0x4) 
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x718 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x720 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x728 (0x20)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult27; // 0x748 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult26; // 0x770 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult25; // 0x798 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult24; // 0x7c0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult23; // 0x7e8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult22; // 0x810 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult21; // 0x838 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult20; // 0x860 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult19; // 0x888 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult18; // 0x8b0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult17; // 0x8d8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult16; // 0x900 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult15; // 0x928 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult14; // 0x950 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult13; // 0x978 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer16; // 0x9a0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult17; // 0x9e8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer15; // 0xa08 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult16; // 0xa50 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer14; // 0xa70 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult15; // 0xab8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer13; // 0xad8 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult14; // 0xb20 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer12; // 0xb40 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult13; // 0xb88 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer11; // 0xba8 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult12; // 0xbf0 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer10; // 0xc10 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult11; // 0xc58 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer9; // 0xc78 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult10; // 0xcc0 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine1; // 0xce0 (0xc8)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult12; // 0xda8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult11; // 0xdd0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult10; // 0xdf8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult9; // 0xe20 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult8; // 0xe48 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult7; // 0xe70 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult6; // 0xe98 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult5; // 0xec0 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult4; // 0xee8 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult3; // 0xf10 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult2; // 0xf38 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult1; // 0xf60 (0x28)
	struct FAnimNode_TransitionResult AnimGraphNodeTransitionResult; // 0xf88 (0x28)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer8; // 0xfb0 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult9; // 0xff8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer7; // 0x1018 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult8; // 0x1060 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer6; // 0x1080 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult7; // 0x10c8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer5; // 0x10e8 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult6; // 0x1130 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer4; // 0x1150 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult5; // 0x1198 (0x20)
	struct FAnimNode_StateResult AnimGraphNodeStateResult4; // 0x11b8 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer3; // 0x11d8 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult3; // 0x1220 (0x20)
	struct FAnimNode_StateResult AnimGraphNodeStateResult2; // 0x1240 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer2; // 0x1260 (0x48)
	struct FAnimNode_BlendSpacePlayer AnimGraphNodeBlendSpacePlayer; // 0x12a8 (0x70)
	struct FAnimNode_BlendListByBool AnimGraphNodeBlendListByBool; // 0x1318 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult1; // 0x1360 (0x20)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer1; // 0x1380 (0x48)
	struct FAnimNode_StateResult AnimGraphNodeStateResult; // 0x13c8 (0x20)
	struct FAnimNode_StateMachine AnimGraphNodeStateMachine; // 0x13e8 (0xc8)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend1; // 0x14b0 (0xc0)
	struct FAnimNode_TwoWayBlend AnimGraphNodeTwoWayBlend; // 0x1570 (0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNodeSequencePlayer; // 0x1630 (0x48)
	bool CurrentlyShooting; // 0x1678 (0x1)
	bool UsingWeapon; // 0x1679 (0x1)

	/* Functions */

	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_589FAA9C413B34BDF8347D810349CF13 (Has no native function)
	void EvaluateGraphExposedInputsExecuteUbergraphGameplayFaceSystemStateMachineAnimBPAnimGraphNodeTransitionResult589FAA9C413B34BDF8347D810349CF13(); // (BlueprintEvent)

	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_E54914DB4B5DAD605B909E9914CC2A0C (Has no native function)
	void EvaluateGraphExposedInputsExecuteUbergraphGameplayFaceSystemStateMachineAnimBPAnimGraphNodeTransitionResultE54914DB4B5DAD605B909E9914CC2A0C(); // (BlueprintEvent)

	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_4C4AEB794B0EE8002304C6AC541E65CF (Has no native function)
	void EvaluateGraphExposedInputsExecuteUbergraphGameplayFaceSystemStateMachineAnimBPAnimGraphNodeTransitionResult4C4AEB794B0EE8002304C6AC541E65CF(); // (BlueprintEvent)

	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP (Has no native function)
	void ExecuteUbergraphGameplayFaceSystemStateMachineAnimBP(int& EntryPoint, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotPreBoolReturnValue2, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncNotPreBoolReturnValue3, bool& CallFuncBooleanANDReturnValue2, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Final | 0x00008000)
};
