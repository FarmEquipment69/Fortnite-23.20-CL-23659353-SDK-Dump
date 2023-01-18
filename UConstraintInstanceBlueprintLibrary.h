// Class /Script/Engine.ConstraintInstanceBlueprintLibrary
// Size: 0x28
class UConstraintInstanceBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetProjectionParams (Underlying native function: SetProjectionParams 0x9ecd334)
	static void SetProjectionParams(struct FConstraintInstanceAccessor& Accessor, bool& bEnableProjection, float& ProjectionLinearAlpha, float& ProjectionAngularAlpha); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetParentDominates (Underlying native function: SetParentDominates 0x9ecd21c)
	static void SetParentDominates(struct FConstraintInstanceAccessor& Accessor, bool& bParentDominates); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetOrientationDriveTwistAndSwing (Underlying native function: SetOrientationDriveTwistAndSwing 0x9ecd0f0)
	static void SetOrientationDriveTwistAndSwing(struct FConstraintInstanceAccessor& Accessor, bool& bEnableTwistDrive, bool& bEnableSwingDrive); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetOrientationDriveSLERP (Underlying native function: SetOrientationDriveSLERP 0x9ecd004)
	static void SetOrientationDriveSLERP(struct FConstraintInstanceAccessor& Accessor, bool& bEnableSLERP); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetMassConditioningEnabled (Underlying native function: SetMassConditioningEnabled 0x6097d40)
	static void SetMassConditioningEnabled(struct FConstraintInstanceAccessor& Accessor, bool& bEnableMassConditioning); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearVelocityTarget (Underlying native function: SetLinearVelocityTarget 0x9eccf14)
	static void SetLinearVelocityTarget(struct FConstraintInstanceAccessor& Accessor, struct FVector& InVelTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearVelocityDrive (Underlying native function: SetLinearVelocityDrive 0x9eccd94)
	static void SetLinearVelocityDrive(struct FConstraintInstanceAccessor& Accessor, bool& bEnableDriveX, bool& bEnableDriveY, bool& bEnableDriveZ); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearSoftLimitParams (Underlying native function: SetLinearSoftLimitParams 0x9eccbb0)
	static void SetLinearSoftLimitParams(struct FConstraintInstanceAccessor& Accessor, bool& bSoftLinearLimit, float& LinearLimitStiffness, float& LinearLimitDamping, float& LinearLimitRestitution, float& LinearLimitContactDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearPositionTarget (Underlying native function: SetLinearPositionTarget 0x9eccac0)
	static void SetLinearPositionTarget(struct FConstraintInstanceAccessor& Accessor, struct FVector& InPosTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearPositionDrive (Underlying native function: SetLinearPositionDrive 0x9ecc940)
	static void SetLinearPositionDrive(struct FConstraintInstanceAccessor& Accessor, bool& bEnableDriveX, bool& bEnableDriveY, bool& bEnableDriveZ); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearPlasticity (Underlying native function: SetLinearPlasticity 0x9ecc7e4)
	static void SetLinearPlasticity(struct FConstraintInstanceAccessor& Accessor, bool& bLinearPlasticity, float& LinearPlasticityThreshold, struct TEnumAsByte<EConstraintPlasticityType>& PlasticityType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearLimits (Underlying native function: SetLinearLimits 0x9ecc654)
	static void SetLinearLimits(struct FConstraintInstanceAccessor& Accessor, struct TEnumAsByte<ELinearConstraintMotion>& XMotion, struct TEnumAsByte<ELinearConstraintMotion>& YMotion, struct TEnumAsByte<ELinearConstraintMotion>& ZMotion, float& Limit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearDriveParams (Underlying native function: SetLinearDriveParams 0x9ecc510)
	static void SetLinearDriveParams(struct FConstraintInstanceAccessor& Accessor, float& PositionStrength, float& VelocityStrength, float& InForceLimit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetLinearBreakable (Underlying native function: SetLinearBreakable 0x9ecc3f4)
	static void SetLinearBreakable(struct FConstraintInstanceAccessor& Accessor, bool& bLinearBreakable, float& LinearBreakThreshold); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetDisableCollision (Underlying native function: SetDisableCollision 0x9ecc308)
	static void SetDisableCollision(struct FConstraintInstanceAccessor& Accessor, bool& bDisableCollision); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetContactTransferScale (Underlying native function: SetContactTransferScale 0x9ecc214)
	static void SetContactTransferScale(struct FConstraintInstanceAccessor& Accessor, float& ContactTransferScale); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularVelocityTarget (Underlying native function: SetAngularVelocityTarget 0x9ecc00c)
	static void SetAngularVelocityTarget(struct FConstraintInstanceAccessor& Accessor, struct FVector& InVelTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularVelocityDriveTwistAndSwing (Underlying native function: SetAngularVelocityDriveTwistAndSwing 0x9ecbee0)
	static void SetAngularVelocityDriveTwistAndSwing(struct FConstraintInstanceAccessor& Accessor, bool& bEnableTwistDrive, bool& bEnableSwingDrive); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularVelocityDriveSLERP (Underlying native function: SetAngularVelocityDriveSLERP 0x9ecbdf4)
	static void SetAngularVelocityDriveSLERP(struct FConstraintInstanceAccessor& Accessor, bool& bEnableSLERP); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularSoftTwistLimitParams (Underlying native function: SetAngularSoftTwistLimitParams 0x9ecbc10)
	static void SetAngularSoftTwistLimitParams(struct FConstraintInstanceAccessor& Accessor, bool& bSoftTwistLimit, float& TwistLimitStiffness, float& TwistLimitDamping, float& TwistLimitRestitution, float& TwistLimitContactDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularSoftSwingLimitParams (Underlying native function: SetAngularSoftSwingLimitParams 0x9ecba2c)
	static void SetAngularSoftSwingLimitParams(struct FConstraintInstanceAccessor& Accessor, bool& bSoftSwingLimit, float& SwingLimitStiffness, float& SwingLimitDamping, float& SwingLimitRestitution, float& SwingLimitContactDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularPlasticity (Underlying native function: SetAngularPlasticity 0x9ecb910)
	static void SetAngularPlasticity(struct FConstraintInstanceAccessor& Accessor, bool& bAngularPlasticity, float& AngularPlasticityThreshold); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularOrientationTarget (Underlying native function: SetAngularOrientationTarget 0x9ecb80c)
	static void SetAngularOrientationTarget(struct FConstraintInstanceAccessor& Accessor, struct FRotator& InPosTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularLimits (Underlying native function: SetAngularLimits 0x9ecb5f4)
	static void SetAngularLimits(struct FConstraintInstanceAccessor& Accessor, struct TEnumAsByte<EAngularConstraintMotion>& Swing1MotionType, float& Swing1LimitAngle, struct TEnumAsByte<EAngularConstraintMotion>& Swing2MotionType, float& Swing2LimitAngle, struct TEnumAsByte<EAngularConstraintMotion>& TwistMotionType, float& TwistLimitAngle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularDriveParams (Underlying native function: SetAngularDriveParams 0x9ecb4b0)
	static void SetAngularDriveParams(struct FConstraintInstanceAccessor& Accessor, float& PositionStrength, float& VelocityStrength, float& InForceLimit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularDriveMode (Underlying native function: SetAngularDriveMode 0x9ecb3d0)
	static void SetAngularDriveMode(struct FConstraintInstanceAccessor& Accessor, struct TEnumAsByte<EAngularDriveMode>& DriveMode); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.SetAngularBreakable (Underlying native function: SetAngularBreakable 0x9ecb2b4)
	static void SetAngularBreakable(struct FConstraintInstanceAccessor& Accessor, bool& bAngularBreakable, float& AngularBreakThreshold); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetProjectionParams (Underlying native function: GetProjectionParams 0x9ecaeec)
	static void GetProjectionParams(struct FConstraintInstanceAccessor& Accessor, bool& bEnableProjection, float& ProjectionLinearAlpha, float& ProjectionAngularAlpha); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetParentDominates (Underlying native function: GetParentDominates 0x9ecae24)
	static bool GetParentDominates(struct FConstraintInstanceAccessor& Accessor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetOrientationDriveTwistAndSwing (Underlying native function: GetOrientationDriveTwistAndSwing 0x9ecacc0)
	static void GetOrientationDriveTwistAndSwing(struct FConstraintInstanceAccessor& Accessor, bool& bOutEnableTwistDrive, bool& bOutEnableSwingDrive); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetOrientationDriveSLERP (Underlying native function: GetOrientationDriveSLERP 0x9ecabc8)
	static void GetOrientationDriveSLERP(struct FConstraintInstanceAccessor& Accessor, bool& bOutEnableSLERP); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetMassConditioningEnabled (Underlying native function: GetMassConditioningEnabled 0x6097c40)
	static bool GetMassConditioningEnabled(struct FConstraintInstanceAccessor& Accessor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearVelocityTarget (Underlying native function: GetLinearVelocityTarget 0x9eca9f8)
	static void GetLinearVelocityTarget(struct FConstraintInstanceAccessor& Accessor, struct FVector& OutVelTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearVelocityDrive (Underlying native function: GetLinearVelocityDrive 0x9eca840)
	static void GetLinearVelocityDrive(struct FConstraintInstanceAccessor& Accessor, bool& bOutEnableDriveX, bool& bOutEnableDriveY, bool& bOutEnableDriveZ); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearSoftLimitParams (Underlying native function: GetLinearSoftLimitParams 0x9eca61c)
	static void GetLinearSoftLimitParams(struct FConstraintInstanceAccessor& Accessor, bool& bSoftLinearLimit, float& LinearLimitStiffness, float& LinearLimitDamping, float& LinearLimitRestitution, float& LinearLimitContactDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearPositionTarget (Underlying native function: GetLinearPositionTarget 0x9eca50c)
	static void GetLinearPositionTarget(struct FConstraintInstanceAccessor& Accessor, struct FVector& OutPosTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearPositionDrive (Underlying native function: GetLinearPositionDrive 0x9eca358)
	static void GetLinearPositionDrive(struct FConstraintInstanceAccessor& Accessor, bool& bOutEnableDriveX, bool& bOutEnableDriveY, bool& bOutEnableDriveZ); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearPlasticity (Underlying native function: GetLinearPlasticity 0x9eca1dc)
	static void GetLinearPlasticity(struct FConstraintInstanceAccessor& Accessor, bool& bLinearPlasticity, float& LinearPlasticityThreshold, struct TEnumAsByte<EConstraintPlasticityType>& PlasticityType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearLimits (Underlying native function: GetLinearLimits 0x9eca000)
	static void GetLinearLimits(struct FConstraintInstanceAccessor& Accessor, struct TEnumAsByte<ELinearConstraintMotion>& XMotion, struct TEnumAsByte<ELinearConstraintMotion>& YMotion, struct TEnumAsByte<ELinearConstraintMotion>& ZMotion, float& Limit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearDriveParams (Underlying native function: GetLinearDriveParams 0x9ec9e8c)
	static void GetLinearDriveParams(struct FConstraintInstanceAccessor& Accessor, float& OutPositionStrength, float& OutVelocityStrength, float& OutForceLimit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetLinearBreakable (Underlying native function: GetLinearBreakable 0x9ec9d5c)
	static void GetLinearBreakable(struct FConstraintInstanceAccessor& Accessor, bool& bLinearBreakable, float& LinearBreakThreshold); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetDisableCollsion (Underlying native function: GetDisableCollsion 0x9ec9cc0)
	static bool GetDisableCollsion(struct FConstraintInstanceAccessor& Accessor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetContactTransferScale (Underlying native function: GetContactTransferScale 0x9ec9b48)
	static void GetContactTransferScale(struct FConstraintInstanceAccessor& Accessor, float& ContactTransferScale); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAttachedBodyNames (Underlying native function: GetAttachedBodyNames 0x9ec99d4)
	static void GetAttachedBodyNames(struct FConstraintInstanceAccessor& Accessor, struct FName& ParentBody, struct FName& ChildBody); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularVelocityTarget (Underlying native function: GetAngularVelocityTarget 0x9ec98c4)
	static void GetAngularVelocityTarget(struct FConstraintInstanceAccessor& Accessor, struct FVector& OutVelTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularVelocityDriveTwistAndSwing (Underlying native function: GetAngularVelocityDriveTwistAndSwing 0x9ec977c)
	static void GetAngularVelocityDriveTwistAndSwing(struct FConstraintInstanceAccessor& Accessor, bool& bOutEnableTwistDrive, bool& bOutEnableSwingDrive); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularVelocityDriveSLERP (Underlying native function: GetAngularVelocityDriveSLERP 0x9ec9680)
	static void GetAngularVelocityDriveSLERP(struct FConstraintInstanceAccessor& Accessor, bool& bOutEnableSLERP); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularSoftTwistLimitParams (Underlying native function: GetAngularSoftTwistLimitParams 0x9ec945c)
	static void GetAngularSoftTwistLimitParams(struct FConstraintInstanceAccessor& Accessor, bool& bSoftTwistLimit, float& TwistLimitStiffness, float& TwistLimitDamping, float& TwistLimitRestitution, float& TwistLimitContactDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularSoftSwingLimitParams (Underlying native function: GetAngularSoftSwingLimitParams 0x9ec9238)
	static void GetAngularSoftSwingLimitParams(struct FConstraintInstanceAccessor& Accessor, bool& bSoftSwingLimit, float& SwingLimitStiffness, float& SwingLimitDamping, float& SwingLimitRestitution, float& SwingLimitContactDistance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularPlasticity (Underlying native function: GetAngularPlasticity 0x9ec9108)
	static void GetAngularPlasticity(struct FConstraintInstanceAccessor& Accessor, bool& bAngularPlasticity, float& AngularPlasticityThreshold); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularOrientationTarget (Underlying native function: GetAngularOrientationTarget 0x9ec8ff8)
	static void GetAngularOrientationTarget(struct FConstraintInstanceAccessor& Accessor, struct FRotator& OutPosTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularLimits (Underlying native function: GetAngularLimits 0x9ec8d7c)
	static void GetAngularLimits(struct FConstraintInstanceAccessor& Accessor, struct TEnumAsByte<EAngularConstraintMotion>& Swing1MotionType, float& Swing1LimitAngle, struct TEnumAsByte<EAngularConstraintMotion>& Swing2MotionType, float& Swing2LimitAngle, struct TEnumAsByte<EAngularConstraintMotion>& TwistMotionType, float& TwistLimitAngle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularDriveParams (Underlying native function: GetAngularDriveParams 0x9ec8c08)
	static void GetAngularDriveParams(struct FConstraintInstanceAccessor& Accessor, float& OutPositionStrength, float& OutVelocityStrength, float& OutForceLimit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularDriveMode (Underlying native function: GetAngularDriveMode 0x9ec8b10)
	static void GetAngularDriveMode(struct FConstraintInstanceAccessor& Accessor, struct TEnumAsByte<EAngularDriveMode>& OutDriveMode); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.GetAngularBreakable (Underlying native function: GetAngularBreakable 0x9ec89e0)
	static void GetAngularBreakable(struct FConstraintInstanceAccessor& Accessor, bool& bAngularBreakable, float& AngularBreakThreshold); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ConstraintInstanceBlueprintLibrary.CopyParams (Underlying native function: CopyParams 0x9ec8844)
	static void CopyParams(struct FConstraintInstanceAccessor& Accessor, struct FConstraintInstanceAccessor& SourceAccessor, bool& bKeepPosition, bool& bKeepRotation); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

