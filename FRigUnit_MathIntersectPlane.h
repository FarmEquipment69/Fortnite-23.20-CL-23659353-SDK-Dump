// ScriptStruct /Script/ControlRig.RigUnit_MathIntersectPlane
// Size: 0x88
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{
	struct FVector Start; // 0x8 (0x18)
	struct FVector Direction; // 0x20 (0x18)
	struct FVector PlanePoint; // 0x38 (0x18)
	struct FVector PlaneNormal; // 0x50 (0x18)
	struct FVector Result; // 0x68 (0x18)
	float Distance; // 0x80 (0x4)
	unsigned char padding_84[0x4]; // 0x84 (0x4)
};

