// ScriptStruct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x30
struct FAnimPhysSphericalLimit
{
	struct FBoneReference DrivingBone; // 0x0 (0xc)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector SphereLocalOffset; // 0x10 (0x18)
	float LimitRadius; // 0x28 (0x4)
	enum ESphericalLimitType LimitType; // 0x2c (0x1)
	unsigned char padding_2d[0x3]; // 0x2d (0x3)
};

