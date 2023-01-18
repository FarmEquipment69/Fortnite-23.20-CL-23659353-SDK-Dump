// Class /Script/FortniteGame.FortBuildingActorSpawner
// Size: 0x2d8
class AFortBuildingActorSpawner : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	class UClass* ActorClassToSpawn; // 0x2a0 (0x8)
	class UEnvQuery* QueryTemplate; // 0x2a8 (0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x2b0 (0x10)
	bool bSpawnAtPreviewPositionNoQuery; // 0x2c0 (0x1)
	bool bSpawnAtPreviewRotation; // 0x2c1 (0x1)
	unsigned char padding_2c2[0x16]; // 0x2c2 (0x16)
};

