// Class /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails
// Size: 0x108
class URockVehicleAbility_GroundTrails : public URockVehicleAbility
{
	struct FGroundTrailsMap GroundTrailsMap; // 0xb0 (0x18)
	struct TArray<struct FName> GroundTrailSockets; // 0xc8 (0x10)
	class UNiagaraSystem* HandbrakeSystem; // 0xd8 (0x8)
	struct TArray<class UNiagaraComponent*> GroundTrailComponents; // 0xe0 (0x10)
	struct TArray<class UNiagaraComponent*> HandbrakeComponents; // 0xf0 (0x10)
	unsigned char padding_100[0x8]; // 0x100 (0x8)

	/* Functions */

	// Function /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails.SetEnabled (Underlying native function: SetEnabled 0x7544af0)
	void SetEnabled(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged (Underlying native function: OnSurfaceChanged 0x7544728)
	void OnSurfaceChanged(struct TEnumAsByte<EPhysicalSurface>& NewSurface); // (Final | Native | Protected | BlueprintCallable)
};

