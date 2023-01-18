// Class /Script/FortniteGame.FortMountedTurret
// Size: 0x1b90
class AFortMountedTurret : public AFortAthenaSKVehicle
{
	unsigned char TeamIndex; // 0x19c8 (0x1)
	bool bConstrainVerticalRotationOnly; // 0x19c9 (0x1)
	bool bImplementsOnSpecialPressed; // 0x19ca (0x1)
	unsigned char unreflected_19cb[0x5]; // 0x19cb (0x5) 
	struct FTransform LastFrameTurretTransform; // 0x19d0 (0x60)
	float PedalScaler; // 0x1a30 (0x4)
	float MovementParam; // 0x1a34 (0x4)
	float BatteryParam; // 0x1a38 (0x4)
	float RumbleIntensity; // 0x1a3c (0x4)
	class ULegacyCameraShake* DriverCameraShake; // 0x1a40 (0x8)
	class ULegacyCameraShake* PassengerCameraShake; // 0x1a48 (0x8)
	class AFortPlayerPawn* LocalPlayerPawn; // 0x1a50 (0x8)
	struct FTurretCosmeticData TurretCosmeticData; // 0x1a58 (0xb8)
	unsigned char unreflected_1b10[0x10]; // 0x1b10 (0x10) 
	class UFortMountedTurretConfigs* FortMountedTurretConfigs; // 0x1b20 (0x8)
	bool bTurretSleeping; // 0x1b28 (0x1)
	unsigned char padding_1b29[0x67]; // 0x1b29 (0x67)

	/* Functions */

	// Function /Script/FortniteGame.FortMountedTurret.TriggerVehicleSeatChangedCallbacks (Underlying native function: TriggerVehicleSeatChangedCallbacks 0x8a79f70)
	void TriggerVehicleSeatChangedCallbacks(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMountedTurret.ShouldShowActionLabelAtIndex (Underlying native function: ShouldShowActionLabelAtIndex 0x8a79404)
	bool ShouldShowActionLabelAtIndex(int& Index, struct TArray<struct FName>& SeatActionNames, struct TArray<struct FText>& SeatActionLabels); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMountedTurret.SetOverheating (Underlying native function: SetOverheating 0x8a79250)
	void SetOverheating(bool& bInIsOverheating); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMountedTurret.SetManned (Underlying native function: SetManned 0x8a791d0)
	void SetManned(bool& bInIsManned); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMountedTurret.OnSpecialReleased (Has no native function)
	void OnSpecialReleased(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMountedTurret.OnSpecialPressed (Has no native function)
	void OnSpecialPressed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMountedTurret.OnRep_TurretSleeping (Underlying native function: OnRep_TurretSleeping 0x8a78e44)
	void OnRepTurretSleeping(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMountedTurret.OnRep_TeamIndex (Underlying native function: OnRep_TeamIndex 0x8a78dc0)
	void OnRepTeamIndex(unsigned char& OldVal); // (Native | Public)

	// Function /Script/FortniteGame.FortMountedTurret.OnGetExitSocketTransform (Has no native function)
	void OnGetExitSocketTransform(struct FName& ExitSocket, int& SocketIndex, struct FTransform& InTransform, bool& bOutOverriderExitSocket, struct FTransform& OutOverrideTransform); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortMountedTurret.NativeUpdateOverheatCosmetics (Underlying native function: NativeUpdateOverheatCosmetics 0x8a78b94)
	void NativeUpdateOverheatCosmetics(class AFortPlayerPawn*& InDriverPawn, float& InReplicateOverheatOf20, struct FRotator& OutTurretRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMountedTurret.NativeCurrentOverheatScalar (Underlying native function: NativeCurrentOverheatScalar 0x8a78b00)
	float NativeCurrentOverheatScalar(float& InReplicateOverheatOf20); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMountedTurret.IsLocalPlayerRiding (Underlying native function: IsLocalPlayerRiding 0x8a78ac0)
	bool IsLocalPlayerRiding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMountedTurret.GetYawPitchDeltaToTargetAimDirection (Underlying native function: GetYawPitchDeltaToTargetAimDirection 0x8a787f0)
	void GetYawPitchDeltaToTargetAimDirection(int& SocketIndex, struct FVector& TargetAimDirection, float& OutYawDelta, float& OutPitchDelta); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortMountedTurret.GetAimDirectionToHitTarget (Underlying native function: GetAimDirectionToHitTarget 0x8a77f08)
	struct FVector GetAimDirectionToHitTarget(struct FVector& TargetLocation, float& LaunchVelocity, float& InGravityMult); // (Final | Native | Public | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortMountedTurret.DebugDrawTrajectory (Underlying native function: DebugDrawTrajectory 0x8a77d3c)
	void DebugDrawTrajectory(struct FVector& AimDirection, struct FVector& TargetLocation, float& LaunchVelocity, float& InGravityMult, struct FColor& LineColor, float& KeepTime, int& Subdivisions); // (Final | Native | Public | HasDefaults | BlueprintCallable | Const)
};

