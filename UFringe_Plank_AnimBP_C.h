// AnimBlueprintGeneratedClass /Game/Gadgets/Assets/Fringe_Plank/Meshes/Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C
// Size: 0xe20
class UFringe_Plank_AnimBP_C : public UAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x350 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x358 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x360 (0x8)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x368 (0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose; // 0x388 (0xc0)
	unsigned char unreflected_448[0x8]; // 0x448 (0x8) 
	struct FAnimNode_RigidBody AnimGraphNodeRigidBody; // 0x450 (0x990)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace; // 0xde0 (0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace; // 0xe00 (0x20)

	/* Functions */

	// Function /Game/Gadgets/Assets/Fringe_Plank/Meshes/Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& InPose, struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Assets/Fringe_Plank/Meshes/Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP (Has no native function)
	void ExecuteUbergraphFringePlankAnimBP(int& EntryPoint); // (Final | 0x00008000)
};

