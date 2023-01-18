// Class /Script/FortniteGame.FortAthenaDoghouseVehicle
// Size: 0x2120
class AFortAthenaDoghouseVehicle : public AFortAthenaSKVehicle
{
	float AntiGravityScalerWhenEmpty; // 0x19c8 (0x4)
	float CameraPitchInterpSpeed; // 0x19cc (0x4)
	float CameraYawInterpSpeed; // 0x19d0 (0x4)
	float PropSpeed; // 0x19d4 (0x4)
	float PropRotation; // 0x19d8 (0x4)
	float AirbrakeDragCoefficient; // 0x19dc (0x4)
	struct FFortRechargingActionTimer BoostAction; // 0x19e0 (0xd8)
	struct FAileronRoll AileronRoll; // 0x1ab8 (0xe0)
	float AileronRollDoubleClickSpeed; // 0x1b98 (0x4)
	bool bFreelookAutoRecenter; // 0x1b9c (0x1)
	unsigned char unreflected_1b9d[0x3]; // 0x1b9d (0x3) 
	float FreelookPitchConstraintDegrees; // 0x1ba0 (0x4)
	float FreelookYawConstraintDegrees; // 0x1ba4 (0x4)
	float FreelookSensitivity; // 0x1ba8 (0x4)
	float MouseSteerSensitivity; // 0x1bac (0x4)
	float FreelookInterpolation; // 0x1bb0 (0x4)
	float FreelookReturnAcceleration; // 0x1bb4 (0x4)
	float FreelookReturnDecelleration; // 0x1bb8 (0x4)
	struct FName ShootCenterPointSocket; // 0x1bbc (0x4)
	float ShootAimAheadDistance; // 0x1bc0 (0x4)
	unsigned char unreflected_1bc4[0x14]; // 0x1bc4 (0x14) 
	class UFortDoghouseVehicleConfigs* FortAirVehicleConfigs; // 0x1bd8 (0x8)
	unsigned char unreflected_1be0[0x2]; // 0x1be0 (0x2) 
	bool bIsFlying; // 0x1be2 (0x1)
	unsigned char unreflected_1be3[0x2]; // 0x1be3 (0x2) 
	bool bIsEngineOn; // 0x1be5 (0x1)
	unsigned char unreflected_1be6[0x3]; // 0x1be6 (0x3) 
	bool bAutoStartEngineInAir; // 0x1be9 (0x1)
	bool bEngineStartIsBeingHeld; // 0x1bea (0x1)
	unsigned char unreflected_1beb[0x4a5]; // 0x1beb (0x4a5) 
	struct FReplicatedControlState ControlState; // 0x2090 (0x38)
	unsigned char padding_20c8[0x58]; // 0x20c8 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.ServerUpdateControlState (Underlying native function: ServerUpdateControlState 0x82b43f4)
	void ServerUpdateControlState(struct FReplicatedControlState& InControlState); // (Final | Net | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.ServerBeginAileronRoll (Underlying native function: ServerBeginAileronRoll 0x82b4358)
	void ServerBeginAileronRoll(enum EAileronRollDirection& Direction); // (Net | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnTakeoff (Has no native function)
	void OnTakeoff(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnRep_ControlState (Underlying native function: OnRep_ControlState 0x82b3aec)
	void OnRepControlState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnLanding (Has no native function)
	void OnLanding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnEngineStop (Has no native function)
	void OnEngineStop(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnEngineStart (Has no native function)
	void OnEngineStart(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.MultiBeginAileronRoll (Underlying native function: MultiBeginAileronRoll 0x82b334c)
	void MultiBeginAileronRoll(enum EAileronRollDirection& Direction); // (Net | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsStandingInPlace (Underlying native function: IsStandingInPlace 0x82b327c)
	bool IsStandingInPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsStallingFromAltitude (Underlying native function: IsStallingFromAltitude 0x82b325c)
	bool IsStallingFromAltitude(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsRollingRight (Underlying native function: IsRollingRight 0x82b3134)
	bool IsRollingRight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsRollingLeft (Underlying native function: IsRollingLeft 0x82b3110)
	bool IsRollingLeft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsRollingInverted (Underlying native function: IsRollingInverted 0x82b30ec)
	bool IsRollingInverted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsFreelooking (Underlying native function: IsFreelooking 0x82b2f20)
	bool IsFreelooking(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsFlying (Underlying native function: IsFlying 0x82b2f04)
	bool IsFlying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsEngineOn (Underlying native function: IsEngineOn 0x82b2eec)
	bool IsEngineOn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsEngineAutoStartingInAir (Underlying native function: IsEngineAutoStartingInAir 0x82b2ed4)
	bool IsEngineAutoStartingInAir(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsAileronRolling (Underlying native function: IsAileronRolling 0x82b2ebc)
	bool IsAileronRolling(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetStandingInPlaceSteeringAngle (Underlying native function: GetStandingInPlaceSteeringAngle 0x82b29c8)
	float GetStandingInPlaceSteeringAngle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetShootCenterPointLocal (Underlying native function: GetShootCenterPointLocal 0x82b2990)
	struct FVector GetShootCenterPointLocal(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetShootCenterPoint (Underlying native function: GetShootCenterPoint 0x82b2958)
	struct FVector GetShootCenterPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlTorque (Underlying native function: GetFlightControlTorque 0x82b25e4)
	struct FVector GetFlightControlTorque(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlSurfaceTargets (Underlying native function: GetFlightControlSurfaceTargets 0x82b25c8)
	struct FFlightControlSurfaces GetFlightControlSurfaceTargets(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlSurfaces (Underlying native function: GetFlightControlSurfaces 0x82b25c8)
	struct FFlightControlSurfaces GetFlightControlSurfaces(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlForce (Underlying native function: GetFlightControlForce 0x82b25a0)
	struct FVector GetFlightControlForce(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAltitudeZ (Underlying native function: GetAltitudeZ 0x82b2478)
	float GetAltitudeZ(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAimPointLocal (Underlying native function: GetAimPointLocal 0x82b2440)
	struct FVector GetAimPointLocal(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAimPoint (Underlying native function: GetAimPoint 0x82b2408)
	struct FVector GetAimPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAileronRollDirection (Underlying native function: GetAileronRollDirection 0x82b23f0)
	enum EAileronRollDirection GetAileronRollDirection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GasPedalIsDown (Underlying native function: GasPedalIsDown 0x82b23c0)
	bool GasPedalIsDown(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

