// Class /Script/RockVehicleRuntime.RockVehicleAbility
// Size: 0xb0
class URockVehicleAbility : public UActorComponent
{
	class ARockVehicle* Vehicle; // 0xa0 (0x8)
	float ActiveSeconds; // 0xa8 (0x4)
	float LastDeactivationTimeSeconds; // 0xac (0x4)

	/* Functions */

	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetVehicle (Underlying native function: GetVehicle 0x2676038)
	class ARockVehicle* GetVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds (Underlying native function: GetInactiveSeconds 0x7543f70)
	float GetInactiveSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds (Underlying native function: GetActiveSeconds 0x71cfd1c)
	float GetActiveSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

