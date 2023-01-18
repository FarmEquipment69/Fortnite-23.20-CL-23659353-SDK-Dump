// Class /Script/Engine.LevelInstance
// Size: 0x310
class ALevelInstance : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TWeakObjectPtr<class UWorld> CookedWorldAsset; // 0x290 (0x28)
	struct FGuid LevelInstanceSpawnGuid; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x48]; // 0x2c8 (0x48)

	/* Functions */

	// Function /Script/Engine.LevelInstance.OnRep_LevelInstanceSpawnGuid (Underlying native function: OnRep_LevelInstanceSpawnGuid 0x9e30688)
	void OnRepLevelInstanceSpawnGuid(); // (Final | Native | Public)
};

