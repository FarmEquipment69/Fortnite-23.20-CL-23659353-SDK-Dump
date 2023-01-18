// Class /Script/FortniteGame.FortSpawnableByPlacementSystemInterface
// Size: 0x28
class IFortSpawnableByPlacementSystemInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortSpawnableByPlacementSystemInterface.GetMissionGuid (Underlying native function: GetMissionGuid 0x89d20e8)
	struct FGuid GetMissionGuid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpawnableByPlacementSystemInterface.GetMission (Underlying native function: GetMission 0x809386c)
	class AFortMission* GetMission(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

