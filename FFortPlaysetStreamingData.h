// ScriptStruct /Script/FortniteGame.FortPlaysetStreamingData
// Size: 0x40
struct FFortPlaysetStreamingData
{
	struct FName PackageName; // 0x0 (0x4)
	struct FName UniquePackageName; // 0x4 (0x4)
	struct FVector Location; // 0x8 (0x18)
	struct FRotator Rotation; // 0x20 (0x18)
	unsigned char bValid; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

