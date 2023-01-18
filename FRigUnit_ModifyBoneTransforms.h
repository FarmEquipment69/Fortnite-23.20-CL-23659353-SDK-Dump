// ScriptStruct /Script/ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x68
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x38 (0x10)
	float Weight; // 0x48 (0x4)
	float WeightMinimum; // 0x4c (0x4)
	float WeightMaximum; // 0x50 (0x4)
	enum EControlRigModifyBoneMode Mode; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x58 (0x10)
};

