// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent
// Size: 0xb0
class UFortVehicleSoundComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TWeakObjectPtr<class AFortVehicleAudioController> AudioController; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Update (Underlying native function: Update 0x720c758)
	void Update(float& DeltaSeconds); // (Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Shutdown (Underlying native function: Shutdown 0x292d060)
	void Shutdown(); // (Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Init (Underlying native function: Init 0x206352c)
	void Init(); // (Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetVehicleActor (Underlying native function: GetVehicleActor 0x145ece0)
	class AFortAthenaVehicle* GetVehicleActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetRootComponent (Underlying native function: GetRootComponent 0x22fa798)
	class USceneComponent* GetRootComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetREVComponent (Underlying native function: GetREVComponent 0x21f595c)
	class UREVComponent* GetREVComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetPhysicsVehicleConfigs (Underlying native function: GetPhysicsVehicleConfigs 0x530f5f0)
	class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetMotorModelComponent (Underlying native function: GetMotorModelComponent 0x2072cfc)
	class UAudioMotorModelComponent* GetMotorModelComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetLayeredAudioComponent (Underlying native function: GetLayeredAudioComponent 0x145eda0)
	class UFortLayeredAudioComponent* GetLayeredAudioComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioParameterComponent (Underlying native function: GetAudioParameterComponent 0x202ddc8)
	class UAudioParameterComponent* GetAudioParameterComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioController (Underlying native function: GetAudioController 0x221ccec)
	class AFortVehicleAudioController* GetAudioController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

