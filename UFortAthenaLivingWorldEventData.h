// Class /Script/LagerRuntime.FortAthenaLivingWorldEventData
// Size: 0x108
class UFortAthenaLivingWorldEventData : public UDataAsset
{
	int TimeOfDayFilters; // 0x30 (0x4)
	float WaterLevelIndexMin; // 0x34 (0x4)
	float WaterLevelIndexMax; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FGameplayTagQuery ProviderFiltersTagQuery; // 0x40 (0x48)
	struct TArray<struct FPointProviderFilterEntry> ProviderFiltersEntries; // 0x88 (0x10)
	struct TArray<struct FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions; // 0x98 (0x10)
	struct FScalableFloat MinActorCountToSpawn; // 0xa8 (0x28)
	struct FScalableFloat MaxActorCountToSpawn; // 0xd0 (0x28)
	struct TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions; // 0xf8 (0x10)
};

