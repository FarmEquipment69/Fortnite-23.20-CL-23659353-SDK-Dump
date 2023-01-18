// ScriptStruct /Script/ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// Size: 0x40
struct FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase
{
	struct TArray<struct FVector> Points; // 0x8 (0x10)
	enum ESplineType SplineMode; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	int SamplesPerSegment; // 0x1c (0x4)
	float Compression; // 0x20 (0x4)
	float Stretch; // 0x24 (0x4)
	struct FControlRigSpline Spline; // 0x28 (0x18)
};

