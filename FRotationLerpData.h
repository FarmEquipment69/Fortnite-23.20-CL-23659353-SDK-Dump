// ScriptStruct /Script/FortniteGame.RotationLerpData
// Size: 0x80
struct FRotationLerpData
{
	struct FQuat RotationLerpStart; // 0x0 (0x20)
	struct FQuat RotationLerpEnd; // 0x20 (0x20)
	struct FQuat RotationLerpTarget; // 0x40 (0x20)
	float TotalLerpTime; // 0x60 (0x4)
	unsigned char padding_64[0x1c]; // 0x64 (0x1c)
};

