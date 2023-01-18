// ScriptStruct /Script/FortniteGame.EQSActorSpawnerClassToSpawnData
// Size: 0x70
struct FEQSActorSpawnerClassToSpawnData
{
	struct FName SharedAssetID; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FScalableFloat Weight; // 0x18 (0x28)
	enum EEQSActorSpawnerSpawnType SpawnActorType; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	class UClass* ActorClassToSpawn; // 0x48 (0x8)
	float AdjustSpawnedActorToGroundLocationTraceZOffset; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	class UClass* AISpawnerData; // 0x58 (0x8)
	class UClass* PickupClassToSpawn; // 0x60 (0x8)
	class UFortItemDefinition* PickupItemDefinition; // 0x68 (0x8)
};

