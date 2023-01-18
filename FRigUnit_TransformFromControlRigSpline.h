// ScriptStruct /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline
// Size: 0xa0
struct FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline; // 0x8 (0x18)
	struct FVector UpVector; // 0x20 (0x18)
	float Roll; // 0x38 (0x4)
	float U; // 0x3c (0x4)
	struct FTransform Transform; // 0x40 (0x60)
};

