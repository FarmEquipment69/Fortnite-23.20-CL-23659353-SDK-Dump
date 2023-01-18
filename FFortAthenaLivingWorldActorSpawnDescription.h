// ScriptStruct /Script/LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
// Size: 0x100
struct FFortAthenaLivingWorldActorSpawnDescription
{
	struct TWeakObjectPtr<class UClass> ActorClass; // 0x0 (0x28)
	struct TWeakObjectPtr<class UClass> SpawnerData; // 0x28 (0x28)
	struct FGameplayTagQuery SpawnerDataTagQuery; // 0x50 (0x48)
	struct FScalableFloat ActorDensityValue; // 0x98 (0x28)
	struct FScalableFloat DensityComputationRangeOverride; // 0xc0 (0x28)
	struct TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration> TagDensityRegistrations; // 0xe8 (0x10)
	bool bPreloadOnClient; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)
};

