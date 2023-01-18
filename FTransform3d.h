// ScriptStruct /Script/CoreUObject.Transform3d
// Size: 0x60
struct FTransform3d
{
	struct FQuat4d Rotation; // 0x0 (0x20)
	struct FVector3d Translation; // 0x20 (0x18)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FVector3d Scale3D; // 0x40 (0x18)
	unsigned char padding_58[0x8]; // 0x58 (0x8)
};

