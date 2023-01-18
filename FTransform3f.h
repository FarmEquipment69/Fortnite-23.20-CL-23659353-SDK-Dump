// ScriptStruct /Script/CoreUObject.Transform3f
// Size: 0x30
struct FTransform3f
{
	struct FQuat4f Rotation; // 0x0 (0x10)
	struct FVector3f Translation; // 0x10 (0xc)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FVector3f Scale3D; // 0x20 (0xc)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

