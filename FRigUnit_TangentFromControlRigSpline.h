// ScriptStruct /Script/ControlRigSpline.RigUnit_TangentFromControlRigSpline
// Size: 0x40
struct FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline; // 0x8 (0x18)
	float U; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FVector Tangent; // 0x28 (0x18)
};

