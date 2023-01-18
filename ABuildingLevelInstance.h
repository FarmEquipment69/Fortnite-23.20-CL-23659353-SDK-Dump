// Class /Script/FortniteGame.BuildingLevelInstance
// Size: 0x808
class ABuildingLevelInstance : public ABuildingActor
{
	unsigned char unreflected_780[0x8]; // 0x780 (0x8) 
	struct TWeakObjectPtr<class UWorld> WorldAsset; // 0x788 (0x28)
	struct FGuid LevelInstanceSpawnGuid; // 0x7b0 (0x10)
	unsigned char padding_7c0[0x48]; // 0x7c0 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.BuildingLevelInstance.OnRep_LevelInstanceSpawnGuid (Underlying native function: OnRep_LevelInstanceSpawnGuid 0x1af2040)
	void OnRepLevelInstanceSpawnGuid(); // (Final | Native | Public)
};

