// ScriptStruct /Script/SpecialEventGameplayRuntime.PhaseLevelEntry
// Size: 0xb8
struct FPhaseLevelEntry
{
	struct TWeakObjectPtr<class UWorld> LevelToLoad; // 0x0 (0x28)
	struct FString LevelName; // 0x28 (0x10)
	bool bLoadLevelOnScriptStart; // 0x38 (0x1)
	bool bLevelStartsVisible; // 0x39 (0x1)
	bool bUnloadLevelOnPhaseEnd; // 0x3a (0x1)
	bool bExcludeFromServerPreload; // 0x3b (0x1)
	bool bMakeVisibleOnPhaseStart; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct FGameplayTagContainer MakeVisibleAtPhaseTags; // 0x40 (0x20)
	struct FGameplayTagContainer UnloadLevelAtPhaseTags; // 0x60 (0x20)
	struct FVector Location; // 0x80 (0x18)
	struct FRotator Rotation; // 0x98 (0x18)
	class ULevelStreamingDynamic* LevelInstance; // 0xb0 (0x8)
};

