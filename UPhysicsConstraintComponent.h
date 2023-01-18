// Class /Script/Engine.PhysicsConstraintComponent
// Size: 0x560
class UPhysicsConstraintComponent : public USceneComponent
{
	class AActor* ConstraintActor1; // 0x2a0 (0x8)
	struct FConstrainComponentPropName ComponentName1; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	class AActor* ConstraintActor2; // 0x2b0 (0x8)
	struct FConstrainComponentPropName ComponentName2; // 0x2b8 (0x4)
	unsigned char unreflected_2bc[0x14]; // 0x2bc (0x14) 
	class UPhysicsConstraintTemplate* ConstraintSetup; // 0x2d0 (0x8)
	struct FMulticastInlineDelegate OnConstraintBroken; // 0x2d8 (0x10)
	struct FMulticastInlineDelegate OnPlasticDeformation; // 0x2e8 (0x10)
	struct FConstraintInstance ConstraintInstance; // 0x2f8 (0x268)

	/* Functions */

	// Function /Script/Engine.PhysicsConstraintComponent.SetOrientationDriveTwistAndSwing (Underlying native function: SetOrientationDriveTwistAndSwing 0x9efb2dc)
	void SetOrientationDriveTwistAndSwing(bool& bEnableTwistDrive, bool& bEnableSwingDrive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetOrientationDriveSLERP (Underlying native function: SetOrientationDriveSLERP 0x9efb258)
	void SetOrientationDriveSLERP(bool& bEnableSLERP); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearZLimit (Underlying native function: SetLinearZLimit 0x9efad80)
	void SetLinearZLimit(struct TEnumAsByte<ELinearConstraintMotion>& ConstraintType, float& LimitSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearYLimit (Underlying native function: SetLinearYLimit 0x9efac8c)
	void SetLinearYLimit(struct TEnumAsByte<ELinearConstraintMotion>& ConstraintType, float& LimitSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearXLimit (Underlying native function: SetLinearXLimit 0x9efabc4)
	void SetLinearXLimit(struct TEnumAsByte<ELinearConstraintMotion>& ConstraintType, float& LimitSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearVelocityTarget (Underlying native function: SetLinearVelocityTarget 0x9efab38)
	void SetLinearVelocityTarget(struct FVector& InVelTarget); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearVelocityDrive (Underlying native function: SetLinearVelocityDrive 0x9efaa28)
	void SetLinearVelocityDrive(bool& bEnableDriveX, bool& bEnableDriveY, bool& bEnableDriveZ); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearPositionTarget (Underlying native function: SetLinearPositionTarget 0x9efa90c)
	void SetLinearPositionTarget(struct FVector& InPosTarget); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearPositionDrive (Underlying native function: SetLinearPositionDrive 0x9efa7fc)
	void SetLinearPositionDrive(bool& bEnableDriveX, bool& bEnableDriveY, bool& bEnableDriveZ); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearPlasticity (Underlying native function: SetLinearPlasticity 0x9efa6e0)
	void SetLinearPlasticity(bool& bLinearPlasticity, float& LinearPlasticityThreshold, struct TEnumAsByte<EConstraintPlasticityType>& PlasticityType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearDriveParams (Underlying native function: SetLinearDriveParams 0x9efa5e0)
	void SetLinearDriveParams(float& PositionStrength, float& VelocityStrength, float& InForceLimit); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetLinearBreakable (Underlying native function: SetLinearBreakable 0x9efa46c)
	void SetLinearBreakable(bool& bLinearBreakable, float& LinearBreakThreshold); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetDisableCollision (Underlying native function: SetDisableCollision 0x9efa1e4)
	void SetDisableCollision(bool& bDisableCollision); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetContactTransferScale (Underlying native function: SetContactTransferScale 0x9ef9f4c)
	void SetContactTransferScale(float& ContactTransferScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetConstraintReferencePosition (Underlying native function: SetConstraintReferencePosition 0x9ef9e80)
	void SetConstraintReferencePosition(struct TEnumAsByte<EConstraintFrame>& Frame, struct FVector& RefPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation (Underlying native function: SetConstraintReferenceOrientation 0x9ef9d58)
	void SetConstraintReferenceOrientation(struct TEnumAsByte<EConstraintFrame>& Frame, struct FVector& PriAxis, struct FVector& SecAxis); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame (Underlying native function: SetConstraintReferenceFrame 0x9ef9c24)
	void SetConstraintReferenceFrame(struct TEnumAsByte<EConstraintFrame>& Frame, struct FTransform& RefFrame); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetConstrainedComponents (Underlying native function: SetConstrainedComponents 0x9ef99b0)
	void SetConstrainedComponents(class UPrimitiveComponent*& Component1, struct FName& BoneName1, class UPrimitiveComponent*& Component2, struct FName& BoneName2); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityTarget (Underlying native function: SetAngularVelocityTarget 0x9ef94c0)
	void SetAngularVelocityTarget(struct FVector& InVelTarget); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityDriveTwistAndSwing (Underlying native function: SetAngularVelocityDriveTwistAndSwing 0x9ef93f8)
	void SetAngularVelocityDriveTwistAndSwing(bool& bEnableTwistDrive, bool& bEnableSwingDrive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityDriveSLERP (Underlying native function: SetAngularVelocityDriveSLERP 0x9ef9374)
	void SetAngularVelocityDriveSLERP(bool& bEnableSLERP); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityDrive (Underlying native function: SetAngularVelocityDrive 0x9ef92ac)
	void SetAngularVelocityDrive(bool& bEnableSwingDrive, bool& bEnableTwistDrive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularTwistLimit (Underlying native function: SetAngularTwistLimit 0x9ef91e4)
	void SetAngularTwistLimit(struct TEnumAsByte<EAngularConstraintMotion>& ConstraintType, float& TwistLimitAngle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularSwing2Limit (Underlying native function: SetAngularSwing2Limit 0x9ef911c)
	void SetAngularSwing2Limit(struct TEnumAsByte<EAngularConstraintMotion>& MotionType, float& Swing2LimitAngle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularSwing1Limit (Underlying native function: SetAngularSwing1Limit 0x9ef9054)
	void SetAngularSwing1Limit(struct TEnumAsByte<EAngularConstraintMotion>& MotionType, float& Swing1LimitAngle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularPlasticity (Underlying native function: SetAngularPlasticity 0x9ef8ee0)
	void SetAngularPlasticity(bool& bAngularPlasticity, float& AngularPlasticityThreshold); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularOrientationTarget (Underlying native function: SetAngularOrientationTarget 0x9ef8e48)
	void SetAngularOrientationTarget(struct FRotator& InPosTarget); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularOrientationDrive (Underlying native function: SetAngularOrientationDrive 0x9ef8d80)
	void SetAngularOrientationDrive(bool& bEnableSwingDrive, bool& bEnableTwistDrive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularDriveParams (Underlying native function: SetAngularDriveParams 0x9ef8c80)
	void SetAngularDriveParams(float& PositionStrength, float& VelocityStrength, float& InForceLimit); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularDriveMode (Underlying native function: SetAngularDriveMode 0x9ef8bfc)
	void SetAngularDriveMode(struct TEnumAsByte<EAngularDriveMode>& DriveMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.SetAngularBreakable (Underlying native function: SetAngularBreakable 0x9ef8a88)
	void SetAngularBreakable(bool& bAngularBreakable, float& AngularBreakThreshold); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.IsBroken (Underlying native function: IsBroken 0x9ef6944)
	bool IsBroken(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.GetCurrentTwist (Underlying native function: GetCurrentTwist 0x9ef4d58)
	float GetCurrentTwist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicsConstraintComponent.GetCurrentSwing2 (Underlying native function: GetCurrentSwing2 0x9ef4d24)
	float GetCurrentSwing2(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicsConstraintComponent.GetCurrentSwing1 (Underlying native function: GetCurrentSwing1 0x9ef4cf0)
	float GetCurrentSwing1(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicsConstraintComponent.GetConstraintForce (Underlying native function: GetConstraintForce 0x9ef4bdc)
	void GetConstraintForce(struct FVector& OutLinearForce, struct FVector& OutAngularForce); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.GetConstraint (Underlying native function: GetConstraint 0x9ef4ba8)
	struct FConstraintInstanceAccessor GetConstraint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.GetConstrainedComponents (Underlying native function: GetConstrainedComponents 0x9ef4a04)
	void GetConstrainedComponents(class UPrimitiveComponent*& OutComponent1, struct FName& OutBoneName1, class UPrimitiveComponent*& OutComponent2, struct FName& OutBoneName2); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PhysicsConstraintComponent.BreakConstraint (Underlying native function: BreakConstraint 0x9ef1140)
	void BreakConstraint(); // (Final | Native | Public | BlueprintCallable)
};

