// Class /Script/HoagieRuntime.FortHoagieVehicle
// Size: 0x1ff0
class AFortHoagieVehicle : public AFortAthenaSKVehicle
{
	struct FName PassengerCollision; // 0x19c8 (0x4)
	float CameraBoomDistance; // 0x19cc (0x4)
	float CameraBoomHeight; // 0x19d0 (0x4)
	unsigned char unreflected_19d4[0x4]; // 0x19d4 (0x4) 
	struct FMulticastInlineDelegate OnBoostStateChanged; // 0x19d8 (0x10)
	struct FMulticastInlineDelegate OnAltimeterTraceUpdated; // 0x19e8 (0x10)
	struct FMulticastInlineDelegate OnCrashingStateEntered; // 0x19f8 (0x10)
	bool bEngineAudioDisabled; // 0x1a08 (0x1)
	unsigned char unreflected_1a09[0x3]; // 0x1a09 (0x3) 
	float LiftRumbleTimer; // 0x1a0c (0x4)
	bool bLiftUp; // 0x1a10 (0x1)
	unsigned char unreflected_1a11[0x7]; // 0x1a11 (0x7) 
	uint64_t LiftForceFeedbackHandle; // 0x1a18 (0x8)
	uint64_t PassiveForceFeedbackHandle; // 0x1a20 (0x8)
	float ThetaNative; // 0x1a28 (0x4)
	float WashAltAlphaNative; // 0x1a2c (0x4)
	float RotorWashTickTimer; // 0x1a30 (0x4)
	unsigned char unreflected_1a34[0x4]; // 0x1a34 (0x4) 
	struct TArray<struct FVector> RotorTraceArray; // 0x1a38 (0x10)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> RotorWashObjectsTypes; // 0x1a48 (0x10)
	class UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs; // 0x1a58 (0x8)
	class UCurveFloat* RumbleIntensity; // 0x1a60 (0x8)
	struct FFortHeliFlightModel FlightModel; // 0x1a68 (0x1e8)
	bool bClearPitchInput; // 0x1c50 (0x1)
	unsigned char unreflected_1c51[0x3]; // 0x1c51 (0x3) 
	float BoostTimeLeft; // 0x1c54 (0x4)
	float BoostBrakingTimeLeft; // 0x1c58 (0x4)
	float BoostCooldown; // 0x1c5c (0x4)
	float ShutdownTimer; // 0x1c60 (0x4)
	float FoliageDestructionTimer; // 0x1c64 (0x4)
	float CrashingScrapingTimer; // 0x1c68 (0x4)
	float CrashingNotMovingTimer; // 0x1c6c (0x4)
	bool bCanSleep; // 0x1c70 (0x1)
	bool bHasAppliedCrashDamage; // 0x1c71 (0x1)
	bool bOrientedForLanding; // 0x1c72 (0x1)
	bool bForceNegativeLift; // 0x1c73 (0x1)
	float AltimeterTraceTimer; // 0x1c74 (0x4)
	float LastRotorImpulseTime; // 0x1c78 (0x4)
	float CriticalExplodeTimer; // 0x1c7c (0x4)
	bool bCriticalExplosionPlayed; // 0x1c80 (0x1)
	unsigned char unreflected_1c81[0x3]; // 0x1c81 (0x3) 
	float TimeWhileCritical; // 0x1c84 (0x4)
	float TimeWhileLanding; // 0x1c88 (0x4)
	float LiftFromOverrideButton; // 0x1c8c (0x4)
	struct FVector BoostDirection; // 0x1c90 (0x18)
	struct FVector LastRotorSweepDirection; // 0x1ca8 (0x18)
	struct FHitResult AltimeterTraceResult; // 0x1cc0 (0xe0)
	int HoagieStateRep; // 0x1da0 (0x4)
	enum EHoagieState CurrentHoagieState; // 0x1da4 (0x4)
	float CurrentRotorSpeed; // 0x1da8 (0x4)
	float CurrentRotorAngle; // 0x1dac (0x4)
	float RotorImpactTraceAngle; // 0x1db0 (0x4)
	struct FVehicleGamepadLiftInputs* LiftInputs; // 0x1db4 (0x8)
	unsigned char unreflected_1dbc[0x4]; // 0x1dbc (0x4) 
	struct TArray<struct FRotorHit> RotorHits; // 0x1dc0 (0x10)
	struct TArray<struct FCachedSeatCollision*> CachedSeatCollision; // 0x1dd0 (0x10)
	struct FVector RotorHitLinearImpulse; // 0x1de0 (0x18)
	struct FVector RotorHitAngularImpulse; // 0x1df8 (0x18)
	class UNiagaraComponent* HoagieIdleFXNative; // 0x1e10 (0x8)
	class UNiagaraComponent* DamageFXNative; // 0x1e18 (0x8)
	class UNiagaraComponent* RotorWashFXNative; // 0x1e20 (0x8)
	class UFortHoagieVehicleAnimInstance* HoagieAnimBPNative; // 0x1e28 (0x8)
	struct FName AltimeterTraceSocketName; // 0x1e30 (0x4)
	struct FName RotorDamageTraceSocketName; // 0x1e34 (0x4)
	struct FName MainRotorCritSocketName; // 0x1e38 (0x4)
	struct FName TailRotorCritSocketName; // 0x1e3c (0x4)
	class UAnimMontage* SeatTransitionToDriver; // 0x1e40 (0x8)
	class UAnimMontage* SeatTransitionToPassenger; // 0x1e48 (0x8)
	struct FName RotorTraceProfile; // 0x1e50 (0x4)
	struct FName FoliageOverlapsBoxTag; // 0x1e54 (0x4)
	struct FReplicatedHeliControlState ControlState; // 0x1e58 (0x30)
	float CurrentViewDistanceScale; // 0x1e88 (0x4)
	float CurrentHLODDistanceOverrideScale; // 0x1e8c (0x4)
	float CurrentHLODMaxDrawDistanceScale; // 0x1e90 (0x4)
	unsigned char unreflected_1e94[0xc]; // 0x1e94 (0xc) 
	struct FHoagieDeathEffectInfo CachedDeathEffectInfo; // 0x1ea0 (0x148)
	unsigned char padding_1fe8[0x8]; // 0x1fe8 (0x8)

	/* Functions */

	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP (Underlying native function: UpdateHoagieAnimBP 0x70f5d30)
	void UpdateHoagieAnimBP(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative (Underlying native function: UpdateDamageStateNative 0x70f5cac)
	void UpdateDamageStateNative(float& Damage); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.ShowCooldownCue (Has no native function)
	void ShowCooldownCue(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation (Has no native function)
	void SetTailRotorRotation(float& Degrees); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetRotorWashActive (Has no native function)
	void SetRotorWashActive(bool& bActive); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation (Has no native function)
	void SetMainRotorRotation(float& Degrees); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState (Underlying native function: ServerUpdateControlState 0x70f5bf4)
	void ServerUpdateControlState(struct FReplicatedHeliControlState& InControlState); // (Final | Net | Native | Event | Private | NetServer)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnTickRotors (Has no native function)
	void OnTickRotors(float& RotorAngleDegrees); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupEnd (Has no native function)
	void OnStartupEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupBegin (Has no native function)
	void OnStartupBegin(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorsStop (Has no native function)
	void OnRotorsStop(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer (Has no native function)
	void OnRotorDamagePlayer(struct FHitResult& Impact); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter (Has no native function)
	void OnRotorDamageDealtOuter(struct FHitResult& Impact); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner (Has no native function)
	void OnRotorDamageDealtInner(struct FHitResult& Impact); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt (Has no native function)
	void OnRotorDamageDealt(struct FHitResult& Impact, bool& bInner); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState (Underlying native function: OnRep_HoagieState 0x70f5be0)
	void OnRepHoagieState(); // (Final | Native | Protected)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_ControlState (Underlying native function: OnRep_ControlState 0x26daa0c)
	void OnRepControlState(); // (Final | Native | Private)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty (Underlying native function: OnRefueledFromEmpty 0x70f5bcc)
	void OnRefueledFromEmpty(); // (Final | Native | Protected)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical (Has no native function)
	void OnImpactWhileCritical(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie (Has no native function)
	void OnImpactOtherHoagie(struct FVector& HitLocation, struct FVector& NormalImpulse); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnCritRotor (Has no native function)
	void OnCritRotor(float& Damage, struct FVector& ImpactLocation, class AController*& DamageInstigator, class AActor*& DamageCauser, bool& bMainRotor); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostStarted (Has no native function)
	void OnBoostStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostReady (Has no native function)
	void OnBoostReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFinished (Has no native function)
	void OnBoostFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFailed (Has no native function)
	void OnBoostFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse (Underlying native function: MulticastRotorImpulse 0x70f5b3c)
	void MulticastRotorImpulse(struct FHitResult& RotorHit); // (Net | NetReliable | Native | Event | NetMulticast | Protected | BlueprintCallable)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsStartingUp (Underlying native function: IsStartingUp 0x70f5b20)
	bool IsStartingUp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsShuttingDown (Underlying native function: IsShuttingDown 0x70f5b00)
	bool IsShuttingDown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsScrapingBottom (Underlying native function: IsScrapingBottom 0x70f5adc)
	bool IsScrapingBottom(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh (Underlying native function: GetVerticalSpeedKmh 0x70f5ab4)
	float GetVerticalSpeedKmh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetThrustDirection (Underlying native function: GetThrustDirection 0x70f5a10)
	struct FVector GetThrustDirection(bool& bWorldSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha (Underlying native function: GetStrafeAlpha 0x70f5878)
	float GetStrafeAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetSteerAlpha (Underlying native function: GetSteerAlpha 0x70f59dc)
	float GetSteerAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft (Underlying native function: GetShutdownTimeLeft 0x70f59c4)
	float GetShutdownTimeLeft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent (Underlying native function: GetRotorSpeedPercent 0x70f59a4)
	float GetRotorSpeedPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeed (Underlying native function: GetRotorSpeed 0x70f598c)
	float GetRotorSpeed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition (Underlying native function: GetRotorCenterPosition 0x70f5954)
	struct FVector GetRotorCenterPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees (Underlying native function: GetRotorAngleDegrees 0x70f593c)
	float GetRotorAngleDegrees(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown (Underlying native function: GetMaxBoostCooldown 0x70f591c)
	float GetMaxBoostCooldown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxAltitude (Underlying native function: GetMaxAltitude 0x70f58fc)
	float GetMaxAltitude(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetLiftAlpha (Underlying native function: GetLiftAlpha 0x70f58c8)
	float GetLiftAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetIsEngineOn (Underlying native function: GetIsEngineOn 0x70f58a8)
	bool GetIsEngineOn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetForwardAlpha (Underlying native function: GetForwardAlpha 0x70f5878)
	float GetForwardAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetDistanceToGround (Underlying native function: GetDistanceToGround 0x70f5860)
	float GetDistanceToGround(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft (Underlying native function: GetBoostTimeLeft 0x70f5848)
	float GetBoostTimeLeft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDuration (Underlying native function: GetBoostDuration 0x70f5828)
	float GetBoostDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDirection (Underlying native function: GetBoostDirection 0x70f5800)
	struct FVector GetBoostDirection(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostCooldown (Underlying native function: GetBoostCooldown 0x70f57e8)
	float GetBoostCooldown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetAltitude (Underlying native function: GetAltitude 0x70f57c8)
	float GetAltitude(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

