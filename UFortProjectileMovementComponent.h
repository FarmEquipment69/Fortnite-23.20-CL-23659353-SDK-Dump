// Class /Script/FortniteGame.FortProjectileMovementComponent
// Size: 0x3e0
class UFortProjectileMovementComponent : public UProjectileMovementComponent
{
	struct FProjectileHomingData HomingData; // 0x238 (0x58)
	enum EFortHomingStyle InitialHomingStyle; // 0x290 (0x1)
	bool bHasHomedTowardTarget; // 0x291 (0x1)
	bool bSetInitialLocAndDir; // 0x292 (0x1)
	unsigned char bReplicatedAutoRegisterUpdatedComponent; // 0x293 (0x1)
	unsigned char bReplicateStopSimulating; // 0x293 (0x1)
	float HomingLaserTargetDistance; // 0x294 (0x4)
	float HomingTravelTime; // 0x298 (0x4)
	struct TWeakObjectPtr<class AFortPawn> LockedOnTarget; // 0x29c (0x8)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	struct FVector DesiredDirection; // 0x2a8 (0x18)
	struct FVector PreviousHomingTargetPosition; // 0x2c0 (0x18)
	struct FVector LaunchPosition; // 0x2d8 (0x18)
	struct FVector InitialDirection; // 0x2f0 (0x18)
	float StickyImpactAngle; // 0x308 (0x4)
	float AccelerationMagnitude; // 0x30c (0x4)
	struct FFortReplicatedVelocityData ReplicatedVelocityData; // 0x310 (0x20)
	struct FFortStopSimulatingRepData FortStopSimulatingRepData; // 0x330 (0x20)
	bool bUseSurfaceMaterial; // 0x350 (0x1)
	unsigned char unreflected_351[0x7]; // 0x351 (0x7) 
	class UFortWaterInteractionComponent* WaterInteractionComponent; // 0x358 (0x8)
	unsigned char unreflected_360[0x18]; // 0x360 (0x18) 
	struct FMulticastInlineDelegate OnProjectileVelocityReplicated; // 0x378 (0x10)
	unsigned char unreflected_388[0x48]; // 0x388 (0x48) 
	bool bUseSeparateGravityScaleInWater; // 0x3d0 (0x1)
	unsigned char unreflected_3d1[0x3]; // 0x3d1 (0x3) 
	float GravityScaleInWater; // 0x3d4 (0x4)
	unsigned char padding_3d8[0x8]; // 0x3d8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetWaterInteractionComponent (Underlying native function: SetWaterInteractionComponent 0x8703924)
	void SetWaterInteractionComponent(class UFortWaterInteractionComponent*& WaterComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetVelocity (Underlying native function: SetVelocity 0x8703780)
	void SetVelocity(struct FVector& InReplicatedVelocity); // (0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetReplicatedAutoRegisterUpdatedComponent (Underlying native function: SetReplicatedAutoRegisterUpdatedComponent 0x8703594)
	void SetReplicatedAutoRegisterUpdatedComponent(bool& bInReplicatedAutoRegisterUpdatedComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingTurnSpeedMin (Underlying native function: SetHomingTurnSpeedMin 0x8702fdc)
	void SetHomingTurnSpeedMin(float& NewHomingTurnSpeedMin); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingTurnSpeedMax (Underlying native function: SetHomingTurnSpeedMax 0x8702f58)
	void SetHomingTurnSpeedMax(float& NewHomingTurnSpeedMax); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingTimeUntilMaxTurnSpeed (Underlying native function: SetHomingTimeUntilMaxTurnSpeed 0x8702ed4)
	void SetHomingTimeUntilMaxTurnSpeed(float& NewTimeUntilMax); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingTargetPosition (Underlying native function: SetHomingTargetPosition 0x8702e4c)
	void SetHomingTargetPosition(struct FVector& HomingTargetPosition); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingTargetOffset (Underlying native function: SetHomingTargetOffset 0x8702d74)
	void SetHomingTargetOffset(struct FVector& NewHomingOffset, bool& bScaleTargetOffsetWithCapsuleHeight); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingTarget (Underlying native function: SetHomingTarget 0x8702cf4)
	void SetHomingTarget(class AActor*& HomingTarget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingStyle (Underlying native function: SetHomingStyle 0x8702c28)
	void SetHomingStyle(enum EFortHomingStyle& NewHomingStyle, bool& ResetHomingTurnSpeedTimer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingLockTargetDistanceThreshold (Underlying native function: SetHomingLockTargetDistanceThreshold 0x8702ba4)
	void SetHomingLockTargetDistanceThreshold(float& NewDistanceThreshold); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingLaserTargetDistance (Underlying native function: SetHomingLaserTargetDistance 0x8702b20)
	void SetHomingLaserTargetDistance(float& NewDistance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetHomingData (Underlying native function: SetHomingData 0x8702a40)
	void SetHomingData(struct FProjectileHomingData& NewHomingData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetDesiredDirection (Underlying native function: SetDesiredDirection 0x8702920)
	void SetDesiredDirection(struct FVector& Direction); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.SetAccelerationMagnitude (Underlying native function: SetAccelerationMagnitude 0x87026d4)
	void SetAccelerationMagnitude(float& InAccelerationMagnitude); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.OnRep_ReplicatedVelocity (Underlying native function: OnRep_ReplicatedVelocity 0x2a2c348)
	void OnRepReplicatedVelocity(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.OnRep_ReplicatedAutoRegisterUpdatedComponent (Underlying native function: OnRep_ReplicatedAutoRegisterUpdatedComponent 0x87022e0)
	void OnRepReplicatedAutoRegisterUpdatedComponent(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.OnRep_HomingData (Underlying native function: OnRep_HomingData 0x8702284)
	void OnRepHomingData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.OnRep_FortStopSimulatingRepData (Underlying native function: OnRep_FortStopSimulatingRepData 0x27c5058)
	void OnRepFortStopSimulatingRepData(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortProjectileMovementComponent.OnProjectileVelocityReplicated__DelegateSignature (Has no native function)
	void OnProjectileVelocityReplicatedDelegateSignature(struct FVector& ReplicatedVelocity); // (MulticastDelegate | Public | Delegate | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortProjectileMovementComponent.GetInitalHomingStyle (Underlying native function: GetInitalHomingStyle 0x8700490)
	enum EFortHomingStyle GetInitalHomingStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

