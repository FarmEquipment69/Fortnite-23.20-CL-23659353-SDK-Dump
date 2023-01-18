// ScriptStruct /Script/FullBodyIK.FBIKEndEffector
// Size: 0x60
struct FFBIKEndEffector
{
	struct FRigElementKey* Item; // 0x0 (0x8)
	struct FVector Position; // 0x8 (0x18)
	float PositionAlpha; // 0x20 (0x4)
	int PositionDepth; // 0x24 (0x4)
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FQuat Rotation; // 0x30 (0x20)
	float RotationAlpha; // 0x50 (0x4)
	int RotationDepth; // 0x54 (0x4)
	float Pull; // 0x58 (0x4)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

