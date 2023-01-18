// ScriptStruct /Script/FortniteGame.FortLevelStreamingInfo
// Size: 0x8
struct FFortLevelStreamingInfo
{
	struct FName PackageName; // 0x0 (0x4)
	struct TEnumAsByte<EFortLevelStreamingState> LevelState; // 0x4 (0x1)
	bool bFailedToLoad; // 0x5 (0x1)
	unsigned char padding_6[0x2]; // 0x6 (0x2)
};

