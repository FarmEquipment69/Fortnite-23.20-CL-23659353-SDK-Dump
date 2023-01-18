// Class /Script/FortniteGame.PocketLevelInstance
// Size: 0xa8
class UPocketLevelInstance : public UObject
{
	class UFortPocketLevel* PocketLevel; // 0x28 (0x8)
	class UWorld* World; // 0x30 (0x8)
	class UFortLocalPlayer* LocalPlayer; // 0x38 (0x8)
	struct FVector SpawnPoint; // 0x40 (0x18)
	unsigned char unreflected_58[0x38]; // 0x58 (0x38) 
	class ULevelStreamingDynamic* StreamingPocketLevel; // 0x90 (0x8)
	unsigned char padding_98[0x10]; // 0x98 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.PocketLevelInstance.HandlePocketLevelShown (Underlying native function: HandlePocketLevelShown 0x85a3c58)
	void HandlePocketLevelShown(); // (Final | Native | Private)

	// Function /Script/FortniteGame.PocketLevelInstance.HandlePocketLevelLoaded (Underlying native function: HandlePocketLevelLoaded 0x85a3c44)
	void HandlePocketLevelLoaded(); // (Final | Native | Private)
};

