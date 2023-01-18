// Class /Script/FortniteGame.FortMissionAircraft
// Size: 0x6e8
class AFortMissionAircraft : public AFortMission
{
	class AFortAircraft* Aircraft; // 0x6e0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionAircraft.CreateAircraft (Underlying native function: CreateAircraft 0x8b07970)
	class AFortAircraft* CreateAircraft(struct FTransform& SpawnTransform, class UClass*& AircraftClass); // (Final | BlueprintAuthorityOnly | Native | Private | HasDefaults | BlueprintCallable)
};

