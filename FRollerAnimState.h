// ScriptStruct /Script/FortniteGame.RollerAnimState
// Size: 0x50
struct FRollerAnimState
{
	struct FName BoneName; // 0x0 (0x4)
	int BoneIndex; // 0x4 (0x4)
	struct TEnumAsByte<ETreadSide> TreadSide; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FVector Offset; // 0x10 (0x18)
	float Compression; // 0x28 (0x4)
	float CompressionTarget; // 0x2c (0x4)
	float CompressionVelocity; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FRotator Rotation; // 0x38 (0x18)
};

