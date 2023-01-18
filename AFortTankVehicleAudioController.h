// Class /Script/TankRuntime.FortTankVehicleAudioController
// Size: 0x5f8
class AFortTankVehicleAudioController : public AFortVehicleAudioController
{
	struct FFortAudioFloatParameterMapping SpeedParam; // 0x2e8 (0x28)
	struct FFortAudioFloatParameterMapping TurnPowerParam; // 0x310 (0x28)
	struct FFortAudioFloatParameterMapping OutOfFuelParam; // 0x338 (0x28)
	struct FFortAudioFloatParameterMapping IdleParam; // 0x360 (0x28)
	struct FFortAudioFloatParameterMapping TurningParam; // 0x388 (0x28)
	struct FFortAudioFloatParameterMapping ForwardParam; // 0x3b0 (0x28)
	struct FFortAudioFloatParameterMapping ReverseParam; // 0x3d8 (0x28)
	struct FFortAudioFloatParameterMapping SurfaceParam; // 0x400 (0x28)
	struct FFortAudioFloatParameterMapping IsInWaterParam; // 0x428 (0x28)
	struct FFortAudioFloatParameterMapping IsInAirParam; // 0x450 (0x28)
	struct FFortAudioFloatParameterMapping BoostParam; // 0x478 (0x28)
	struct FFortAudioFloatParameterMapping CannonHorizontalMovementParam; // 0x4a0 (0x28)
	struct FFortAudioFloatParameterMapping CannonVerticalMovementParam; // 0x4c8 (0x28)
	struct FFortAudioFloatParameterMapping TurretHorizontalMovementParam; // 0x4f0 (0x28)
	struct FFortAudioFloatParameterMapping TurretVerticalMovementParam; // 0x518 (0x28)
	struct FTankAudioUpdateContext Context; // 0x540 (0xb8)

	/* Functions */

	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot (Has no native function)
	void PlayTurningOneShot(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot (Has no native function)
	void PlayDecelOneShot(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot (Has no native function)
	void PlayAccelOneShot(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor (Underlying native function: GetTankVehicleActor 0x73b7228)
	class AFortTankVehicle* GetTankVehicleActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

