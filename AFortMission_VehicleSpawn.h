// Class /Script/FortniteGame.FortMission_VehicleSpawn
// Size: 0x7e8
class AFortMission_VehicleSpawn : public AFortMission
{
	struct TArray<struct FMissionVehicleSpawnSet> SpawnSets; // 0x6e0 (0x10)
	class UEnvQuery* SpawnLocationQuery; // 0x6f0 (0x8)
	unsigned char padding_6f8[0xf0]; // 0x6f8 (0xf0)

	/* Functions */

	// Function /Script/FortniteGame.FortMission_VehicleSpawn.VehicleDestroyed (Underlying native function: VehicleDestroyed 0x71a663c)
	void VehicleDestroyed(class AActor*& InVehicle); // (Final | Native | Protected)
};

