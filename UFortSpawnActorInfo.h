// Class /Script/FortniteGame.FortSpawnActorInfo
// Size: 0x160
class UFortSpawnActorInfo : public UPrimaryDataAsset
{
	struct FName SpawnActorID; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UClass* SpawnActorClass; // 0x38 (0x8)
	struct FCollisionProfileName CollisionProfile; // 0x40 (0x4)
	enum EFortSpawnActorTime SpawnTiming; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct FScalableFloat SafeZoneIndex; // 0x48 (0x28)
	struct FScalableFloat SpawnAtSafeZoneIndex; // 0x70 (0x28)
	struct FScalableFloat DelayBetweenSpawns; // 0x98 (0x28)
	struct FScalableFloat MinActorsToSpawn; // 0xc0 (0x28)
	struct FScalableFloat MaxActorsToSpawn; // 0xe8 (0x28)
	struct FScalableFloat MinSpawnHeight; // 0x110 (0x28)
	struct FScalableFloat MaxSpawnHeight; // 0x138 (0x28)
};

