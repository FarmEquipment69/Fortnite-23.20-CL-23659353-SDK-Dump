// ScriptStruct /Script/FortniteAI.FortAIEncounterSpawnGroupCapsCategory
// Size: 0x140
struct FFortAIEncounterSpawnGroupCapsCategory
{
	struct FGameplayTagQuery TagQuery; // 0x0 (0x48)
	bool bApplyGroupPopulationCurveToCategoryMax; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FCurveTableRowHandle InitialSpawnGroupAvailabilityDelaySeconds; // 0x50 (0x10)
	struct FCurveTableRowHandle SpawnGroupAvailabilityDelaySeconds; // 0x60 (0x10)
	struct FGameplayTagQuery UnlockingTagQuery; // 0x70 (0x48)
	struct TArray<struct FFortAIEncounterSpawnGroupCap> SpawnGroupCapsPerPlayerCount; // 0xb8 (0x10)
	float InitialSpawnGroupAvailabilityTime; // 0xc8 (0x4)
	float NumActiveCategorySpawnGroups; // 0xcc (0x4)
	struct TArray<float> SpawnGroupAvailabilityTimes; // 0xd0 (0x10)
	int NumSpawnGroupAvailable; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	class UObject* CategorySource; // 0xe8 (0x8)
	unsigned char padding_f0[0x50]; // 0xf0 (0x50)
};

