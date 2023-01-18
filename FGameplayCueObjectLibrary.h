// ScriptStruct /Script/GameplayAbilities.GameplayCueObjectLibrary
// Size: 0x50
struct FGameplayCueObjectLibrary
{
	struct TArray<struct FString> Paths; // 0x0 (0x10)
	unsigned char unreflected_10[0x20]; // 0x10 (0x20) 
	class UObjectLibrary* ActorObjectLibrary; // 0x30 (0x8)
	class UObjectLibrary* StaticObjectLibrary; // 0x38 (0x8)
	class UGameplayCueSet* CueSet; // 0x40 (0x8)
	unsigned char unreflected_48[0x4]; // 0x48 (0x4) 
	bool bShouldSyncScan; // 0x4c (0x1)
	bool bShouldAsyncLoad; // 0x4d (0x1)
	bool bShouldSyncLoad; // 0x4e (0x1)
	bool bHasBeenInitialized; // 0x4f (0x1)
};

