// Class /Script/Engine.MovementComponent
// Size: 0x108
class UMovementComponent : public UActorComponent
{
	class USceneComponent* UpdatedComponent; // 0xa0 (0x8)
	class UPrimitiveComponent* UpdatedPrimitive; // 0xa8 (0x8)
	unsigned char unreflected_b0[0x8]; // 0xb0 (0x8) 
	struct FVector Velocity; // 0xb8 (0x18)
	struct FVector PlaneConstraintNormal; // 0xd0 (0x18)
	struct FVector PlaneConstraintOrigin; // 0xe8 (0x18)
	unsigned char bUpdateOnlyIfRendered; // 0x100 (0x1)
	unsigned char bAutoUpdateTickRegistration; // 0x100 (0x1)
	unsigned char bTickBeforeOwner; // 0x100 (0x1)
	unsigned char bAutoRegisterUpdatedComponent; // 0x100 (0x1)
	unsigned char bConstrainToPlane; // 0x100 (0x1)
	unsigned char bSnapToPlaneAtStart; // 0x100 (0x1)
	unsigned char bAutoRegisterPhysicsVolumeUpdates; // 0x100 (0x1)
	unsigned char bComponentShouldUpdatePhysicsVolume; // 0x100 (0x1)
	unsigned char unreflected_101[0x2]; // 0x101 (0x2) 
	enum EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0x103 (0x1)
	unsigned char padding_104[0x4]; // 0x104 (0x4)

	/* Functions */

	// Function /Script/Engine.MovementComponent.StopMovementImmediately (Underlying native function: StopMovementImmediately 0x14cfdb4)
	void StopMovementImmediately(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.SnapUpdatedComponentToPlane (Underlying native function: SnapUpdatedComponentToPlane 0x8d3c2e8)
	void SnapUpdatedComponentToPlane(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.SetUpdatedComponent (Underlying native function: SetUpdatedComponent 0x14fc060)
	void SetUpdatedComponent(class USceneComponent*& NewUpdatedComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.SetPlaneConstraintOrigin (Underlying native function: SetPlaneConstraintOrigin 0x9cf9fe4)
	void SetPlaneConstraintOrigin(struct FVector& PlaneOrigin); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.SetPlaneConstraintNormal (Underlying native function: SetPlaneConstraintNormal 0x9cf9f50)
	void SetPlaneConstraintNormal(struct FVector& PlaneNormal); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.SetPlaneConstraintFromVectors (Underlying native function: SetPlaneConstraintFromVectors 0x9cf9e60)
	void SetPlaneConstraintFromVectors(struct FVector& Forward, struct FVector& Up); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.SetPlaneConstraintEnabled (Underlying native function: SetPlaneConstraintEnabled 0x9cf9ddc)
	void SetPlaneConstraintEnabled(bool& bEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.SetPlaneConstraintAxisSetting (Underlying native function: SetPlaneConstraintAxisSetting 0x9cf9d58)
	void SetPlaneConstraintAxisSetting(enum EPlaneConstraintAxisSetting& NewAxisSetting); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.PhysicsVolumeChanged (Underlying native function: PhysicsVolumeChanged 0x298e6c8)
	void PhysicsVolumeChanged(class APhysicsVolume*& NewVolume); // (Native | Public)

	// Function /Script/Engine.MovementComponent.K2_MoveUpdatedComponent (Underlying native function: K2_MoveUpdatedComponent 0x9cf7a7c)
	bool K2MoveUpdatedComponent(struct FVector& Delta, struct FRotator& NewRotation, struct FHitResult& OutHit, bool& bSweep, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MovementComponent.IsExceedingMaxSpeed (Underlying native function: IsExceedingMaxSpeed 0x9cf7830)
	bool IsExceedingMaxSpeed(float& MaxSpeed); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.GetPlaneConstraintOrigin (Underlying native function: GetPlaneConstraintOrigin 0x9cf74d8)
	struct FVector GetPlaneConstraintOrigin(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.GetPlaneConstraintNormal (Underlying native function: GetPlaneConstraintNormal 0x9cf74b0)
	struct FVector GetPlaneConstraintNormal(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.GetPlaneConstraintAxisSetting (Underlying native function: GetPlaneConstraintAxisSetting 0x9cf7498)
	enum EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.GetPhysicsVolume (Underlying native function: GetPhysicsVolume 0x9cf7470)
	class APhysicsVolume* GetPhysicsVolume(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.GetMaxSpeed (Underlying native function: GetMaxSpeed 0x89e9488)
	float GetMaxSpeed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.GetGravityZ (Underlying native function: GetGravityZ 0x2cfe730)
	float GetGravityZ(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.ConstrainNormalToPlane (Underlying native function: ConstrainNormalToPlane 0x9cf69c4)
	struct FVector ConstrainNormalToPlane(struct FVector& Normal); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.ConstrainLocationToPlane (Underlying native function: ConstrainLocationToPlane 0x9cf6904)
	struct FVector ConstrainLocationToPlane(struct FVector& Location); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.MovementComponent.ConstrainDirectionToPlane (Underlying native function: ConstrainDirectionToPlane 0x9cf6844)
	struct FVector ConstrainDirectionToPlane(struct FVector& Direction); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

