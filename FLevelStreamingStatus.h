// ScriptStruct /Script/Engine.LevelStreamingStatus
// Size: 0xc
struct FLevelStreamingStatus
{
	struct FName PackageName; // 0x0 (0x4)
	unsigned char bShouldBeLoaded; // 0x4 (0x1)
	unsigned char bShouldBeVisible; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	uint32_t LODIndex; // 0x8 (0x4)
};

