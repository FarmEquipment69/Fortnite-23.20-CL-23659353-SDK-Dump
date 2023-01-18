// ScriptStruct /Script/ControlRig.RigUnit_TransformConstraint
// Size: 0x120
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FName bone; // 0x38 (0x4)
	enum ETransformSpaceMode BaseTransformSpace; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct FTransform BaseTransform; // 0x40 (0x60)
	struct FName BaseBone; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct TArray<struct FConstraintTarget> Targets; // 0xa8 (0x10)
	bool bUseInitialTransforms; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xc0 (0x60)
};

