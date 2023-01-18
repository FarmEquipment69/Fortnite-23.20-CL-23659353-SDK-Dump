// AnimBlueprintGeneratedClass /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
// Size: 0x1818
class UMechanical_Engineer_Female_AnimBP_C : public UCustomCharacterPartAnimInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x6f0 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionPropertyAccess; // 0x6f8 (0x8)
	struct FAnimSubsystemInstance* AnimBlueprintExtensionBase; // 0x700 (0x8)
	struct FAnimNode_LinkedInputPose AnimGraphNodeLinkedInputPose; // 0x708 (0xc0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNodeLocalToComponentSpace; // 0x7c8 (0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNodeComponentToLocalSpace; // 0x7e8 (0x20)
	struct FAnimNode_Root AnimGraphNodeRoot; // 0x808 (0x20)
	unsigned char unreflected_828[0x8]; // 0x828 (0x8) 
	struct FAnimNode_AnimDynamics AnimGraphNodeAnimDynamics; // 0x830 (0x510)
	struct FAnimNode_RigidBody AnimGraphNodeRigidBody; // 0xd40 (0x990)
	struct FAnimNode_ModifyBone AnimGraphNodeModifyBone; // 0x16d0 (0x128)
	struct FRotator gearrot; // 0x17f8 (0x18)
	class USkeletalMeshComponent* skelmesh; // 0x1810 (0x8)

	/* Functions */

	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph (Has no native function)
	void AnimGraph(struct FPoseLink& InPose, struct FPoseLink& AnimGraph); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation (Has no native function)
	void BlueprintUpdateAnimation(float& DeltaTimeX); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation (Has no native function)
	void BlueprintInitializeAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP (Has no native function)
	void ExecuteUbergraphMechanicalEngineerFemaleAnimBP(int& EntryPoint, class USkeletalMeshComponent*& CallFuncGetPartSkeletalMeshComponentReturnValue, float& K2NodeEventDeltaTimeX, float& CallFuncGetAlphaFromReferenceTransformDeltaAlphaOutput, float& CallFuncGetAlphaFromReferenceTransformDeltaRawOutput, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, double& CallFuncMultiplyDoubleDoubleAImplicitCast, float& CallFuncMakeRotatorRollImplicitCast); // (Final | 0x00008000)
};

