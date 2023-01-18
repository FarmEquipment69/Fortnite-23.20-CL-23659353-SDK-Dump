// ScriptStruct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
// Size: 0x40
struct FLivingWorldSpawnAroundPlayerConfiguration
{
	struct TWeakObjectPtr<class UFortAthenaLivingWorldEncounter> Encounter; // 0x0 (0x28)
	struct TArray<class UClass*> PointProviderClasses; // 0x28 (0x10)
	bool bRegisterReservoir; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

