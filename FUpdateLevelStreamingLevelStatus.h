// ScriptStruct /Script/Engine.UpdateLevelStreamingLevelStatus
// Size: 0xc
struct FUpdateLevelStreamingLevelStatus
{
	struct FName PackageName; // 0x0 (0x4)
	int LODIndex; // 0x4 (0x4)
	bool bNewShouldBeLoaded; // 0x8 (0x1)
	bool bNewShouldBeVisible; // 0x9 (0x1)
	bool bNewShouldBlockOnLoad; // 0xa (0x1)
	bool bNewShouldBlockOnUnload; // 0xb (0x1)
};

