// Class /Script/FortniteGame.FortAthenaWaterJackal
// Size: 0x1bb0
class AFortAthenaWaterJackal : public AFortAthenaJackalVehicle
{
	class UClass* FortWaterJackalVehicleConfigsClass; // 0x1b30 (0x8)
	class UFortAthenaWaterJackalConfigs* FortWaterJackalVehicleConfigs; // 0x1b38 (0x8)
	struct FNetTowhookAttachState ReplicatedAttachState; // 0x1b40 (0x38)
	unsigned char padding_1b78[0x38]; // 0x1b78 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaWaterJackal.OnRep_ReplicatedAttachState (Underlying native function: OnRep_ReplicatedAttachState 0x832eeb8)
	void OnRepReplicatedAttachState(); // (Final | Native | Protected)
};

