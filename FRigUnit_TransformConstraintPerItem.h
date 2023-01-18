// ScriptStruct /Script/ControlRig.RigUnit_TransformConstraintPerItem
// Size: 0x130
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	enum ETransformSpaceMode BaseTransformSpace; // 0x40 (0x1)
	unsigned char unreflected_41[0xf]; // 0x41 (0xf) 
	struct FTransform BaseTransform; // 0x50 (0x60)
	struct FRigElementKey* BaseItem; // 0xb0 (0x8)
	struct TArray<struct FConstraintTarget> Targets; // 0xb8 (0x10)
	bool bUseInitialTransforms; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xd0 (0x60)
};

