// ScriptStruct /Script/PBIK.PBIKBoneSetting
// Size: 0x50
struct FPBIKBoneSetting
{
	struct FName bone; // 0x0 (0x4)
	float RotationStiffness; // 0x4 (0x4)
	float PositionStiffness; // 0x8 (0x4)
	enum EPBIKLimitType X; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float MinX; // 0x10 (0x4)
	float MaxX; // 0x14 (0x4)
	enum EPBIKLimitType Y; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float MinY; // 0x1c (0x4)
	float MaxY; // 0x20 (0x4)
	enum EPBIKLimitType Z; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	float MinZ; // 0x28 (0x4)
	float MaxZ; // 0x2c (0x4)
	bool bUsePreferredAngles; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FVector PreferredAngles; // 0x38 (0x18)
};

