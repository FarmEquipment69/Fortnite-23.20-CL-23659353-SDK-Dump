// Class /Script/ChaosCloth.ChaosClothingInteractor
// Size: 0x40
class UChaosClothingInteractor : public UClothingInteractor
{
	unsigned char unreflected_40[0x40]; 

	/* Functions */

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetWind (Underlying native function: SetWind 0x273b500)
	void SetWind(struct FVector2D& Drag, struct FVector2D& Lift, float& AirDensity, struct FVector& WindVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetVelocityScale (Underlying native function: SetVelocityScale 0x273b3e0)
	void SetVelocityScale(struct FVector& LinearVelocityScale, float& AngularVelocityScale, float& FictitiousAngularScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetPressure (Underlying native function: SetPressure 0x8027b00)
	void SetPressure(struct FVector2D& Pressure); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialLinear (Underlying native function: SetMaterialLinear 0x8027a04)
	void SetMaterialLinear(float& EdgeStiffness, float& BendingStiffness, float& AreaStiffness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterial (Underlying native function: SetMaterial 0x29f7c90)
	void SetMaterial(struct FVector2D& EdgeStiffness, struct FVector2D& BendingStiffness, struct FVector2D& AreaStiffness); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear (Underlying native function: SetLongRangeAttachmentLinear 0x8027940)
	void SetLongRangeAttachmentLinear(float& TetherStiffness, float& TetherScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment (Underlying native function: SetLongRangeAttachment 0x273b704)
	void SetLongRangeAttachment(struct FVector2D& TetherStiffness, struct FVector2D& TetherScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetGravity (Underlying native function: SetGravity 0x273b43c)
	void SetGravity(float& GravityScale, bool& bIsGravityOverridden, struct FVector& GravityOverride); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetDamping (Underlying native function: SetDamping 0x273b640)
	void SetDamping(float& DampingCoefficient, float& LocalDampingCoefficient); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetCollision (Underlying native function: SetCollision 0x29b4efc)
	void SetCollision(float& CollisionThickness, float& FrictionCoefficient, bool& bUseCCD, float& SelfCollisionThickness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetBackstop (Underlying native function: SetBackstop 0x8027868)
	void SetBackstop(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear (Underlying native function: SetAnimDriveLinear 0x80277e4)
	void SetAnimDriveLinear(float& AnimDriveStiffness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDrive (Underlying native function: SetAnimDrive 0x2a9a7ec)
	void SetAnimDrive(struct FVector2D& AnimDriveStiffness, struct FVector2D& AnimDriveDamping); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAerodynamics (Underlying native function: SetAerodynamics 0x80276d8)
	void SetAerodynamics(float& DragCoefficient, float& LiftCoefficient, struct FVector& WindVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ChaosCloth.ChaosClothingInteractor.ResetAndTeleport (Underlying native function: ResetAndTeleport 0x8027614)
	void ResetAndTeleport(bool& bReset, bool& bTeleport); // (Final | Native | Public | BlueprintCallable)
};

