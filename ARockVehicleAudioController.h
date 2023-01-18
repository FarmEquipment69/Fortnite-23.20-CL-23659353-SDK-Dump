// Class /Script/RockVehicleRuntime.RockVehicleAudioController
// Size: 0x3d8
class ARockVehicleAudioController : public AFortVehicleAudioController
{
	struct FRuntimeFloatCurve SideSpeedToSkidVolume; // 0x2e8 (0x88)
	float SurfaceTypeInterpSpeed; // 0x370 (0x4)
	unsigned char unreflected_374[0x4]; // 0x374 (0x4) 
	class UAudioComponent* TireSurfaceComponent; // 0x378 (0x8)
	class UAudioComponent* AirLoopComponent; // 0x380 (0x8)
	class UAudioComponent* SuperSonicComponent; // 0x388 (0x8)
	bool bInWater; // 0x390 (0x1)
	unsigned char unreflected_391[0x7]; // 0x391 (0x7) 
	class UAudioMotorModelComponent* MotorModel; // 0x398 (0x8)
	class ARockVehicle* CachedVehicle; // 0x3a0 (0x8)
	unsigned char padding_3a8[0x30]; // 0x3a8 (0x30)

	/* Functions */

	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam (Underlying native function: SetSurfaceTypeParam 0x7544b70)
	void SetSurfaceTypeParam(float& NewSurfaceParam); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.SetBoosting (Underlying native function: SetBoosting 0x7544a70)
	void SetBoosting(bool& bNewBoosting); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated (Has no native function)
	void OnInAirUpdated(bool& bNewInAir); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent (Underlying native function: GetMotorSimComponent 0x7543fc4)
	class UAudioMotorModelComponent* GetMotorSimComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

