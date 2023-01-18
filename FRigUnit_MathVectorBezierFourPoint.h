// ScriptStruct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
// Size: 0xa0
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier; // 0x8 (0x60)
	float T; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FVector Result; // 0x70 (0x18)
	struct FVector Tangent; // 0x88 (0x18)
};

