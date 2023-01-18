// ScriptStruct /Script/Engine.RigTransformConstraint
// Size: 0xc
struct FRigTransformConstraint
{
	struct TEnumAsByte<EConstraintTransform> TranformType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName ParentSpace; // 0x4 (0x4)
	float Weight; // 0x8 (0x4)
};

