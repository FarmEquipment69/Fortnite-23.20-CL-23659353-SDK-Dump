// ScriptStruct /Script/ControlRig.RigUnit_MathDistanceToPlane
// Size: 0x70
struct FRigUnit_MathDistanceToPlane : FRigUnit_MathVectorBase
{
	struct FVector Point; // 0x8 (0x18)
	struct FVector PlanePoint; // 0x20 (0x18)
	struct FVector PlaneNormal; // 0x38 (0x18)
	struct FVector ClosestPointOnPlane; // 0x50 (0x18)
	float SignedDistance; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

