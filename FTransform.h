// ScriptStruct /Script/CoreUObject.Transform
// Size: 0x60
struct FTransform
{
	struct FQuat Rotation; // 0x0 (0x20)
	struct FVector Translation; // 0x20 (0x18)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FVector Scale3D; // 0x40 (0x18)
	unsigned char padding_58[0x8]; // 0x58 (0x8)
};

