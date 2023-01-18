// ScriptStruct /Script/FortniteGame.MissionVehicleSpawnSet
// Size: 0x58
struct FMissionVehicleSpawnSet
{
	class UClass* VehicleClass; // 0x0 (0x8)
	int MinSpawnCount; // 0x8 (0x4)
	int MaxSpawnCount; // 0xc (0x4)
	struct FVector SpawnOffset; // 0x10 (0x18)
	class UClass* OccupiedLocationGameplayEffect; // 0x28 (0x8)
	int OccupiedLocationGameplayEffectLevel; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FGameplayTagContainer OccupiedLocationAdditionalContextTags; // 0x38 (0x20)
};

