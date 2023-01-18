// Class /Script/FortniteUI.AthenaRebootVanIndicator
// Size: 0x5d8
class UAthenaRebootVanIndicator : public UAthenaMarkedActorIndicator
{
	int SpawnMachineIndex; // 0x5c8 (0x4)
	enum ESpawnMachineState SpawnMachineState; // 0x5cc (0x1)
	unsigned char unreflected_5cd[0x3]; // 0x5cd (0x3) 
	float SpawnMachineCooldownStartTime; // 0x5d0 (0x4)
	float SpawnMachineCooldownEndTime; // 0x5d4 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaRebootVanIndicator.OnSpawnMachineStateChanged (Has no native function)
	void OnSpawnMachineStateChanged(); // (Event | Protected | BlueprintEvent)
};

