// ScriptStruct /Script/FortniteGame.FortBounceData
// Size: 0x30
struct FFortBounceData
{
	float StartTime; // 0x0 (0x4)
	float BounceValue; // 0x4 (0x4)
	float Radius; // 0x8 (0x4)
	struct FLinearColor DeformationVector; // 0xc (0x10)
	struct FLinearColor DeformationCenter; // 0x1c (0x10)
	struct TEnumAsByte<EFortBounceType> BounceType; // 0x2c (0x1)
	bool bLocalInstigator; // 0x2d (0x1)
	bool bIsPlaying; // 0x2e (0x1)
	unsigned char padding_2f[0x1]; // 0x2f (0x1)
};

