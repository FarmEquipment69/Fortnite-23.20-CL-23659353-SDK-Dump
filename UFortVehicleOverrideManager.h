// Class /Script/FortniteGame.FortVehicleOverrideManager
// Size: 0x2e0
class UFortVehicleOverrideManager : public UGameStateComponent
{
	unsigned char unreflected_a0[0x128]; // 0xa0 (0x128) 
	struct FFortReplicatedVehicleOverrideDataContainer ReplicatedVehicleOverrides; // 0x1c8 (0x118)

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleOverrideManager.HandleVehicleDeath (Underlying native function: HandleVehicleDeath 0x900e430)
	void HandleVehicleDeath(class AFortAthenaVehicle*& DeadVehicle, struct FGameplayTagContainer& InTags, class AController*& EventInstigator, class AActor*& DamageCauser); // (Final | Native | Private | HasOutParms)
};

