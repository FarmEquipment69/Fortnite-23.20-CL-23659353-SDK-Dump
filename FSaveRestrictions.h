// ScriptStruct /Script/FortniteGame.SaveRestrictions
// Size: 0x30
struct FSaveRestrictions
{
	struct TArray<class UClass*> StatsToSave; // 0x0 (0x10)
	struct TArray<class UClass*> StatsAllowedToSavePostDeath; // 0x10 (0x10)
	struct TArray<class UClass*> ItemClassesNotToSave; // 0x20 (0x10)
};

