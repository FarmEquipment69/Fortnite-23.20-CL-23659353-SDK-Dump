// ScriptStruct /Script/ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// Size: 0x40
struct FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline; // 0x8 (0x18)
	struct FVector Position; // 0x20 (0x18)
	float U; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

