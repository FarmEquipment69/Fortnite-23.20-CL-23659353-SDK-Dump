// ScriptStruct /Script/Engine.ConstraintProfileProperties
// Size: 0x160
struct FConstraintProfileProperties
{
	float ProjectionLinearTolerance; // 0x0 (0x4)
	float ProjectionAngularTolerance; // 0x4 (0x4)
	float ProjectionLinearAlpha; // 0x8 (0x4)
	float ProjectionAngularAlpha; // 0xc (0x4)
	float ShockPropagationAlpha; // 0x10 (0x4)
	float LinearBreakThreshold; // 0x14 (0x4)
	float LinearPlasticityThreshold; // 0x18 (0x4)
	float AngularBreakThreshold; // 0x1c (0x4)
	float AngularPlasticityThreshold; // 0x20 (0x4)
	float ContactTransferScale; // 0x24 (0x4)
	struct FLinearConstraint LinearLimit; // 0x28 (0x1c)
	struct FConeConstraint ConeLimit; // 0x44 (0x20)
	struct FTwistConstraint TwistLimit; // 0x64 (0x1c)
	unsigned char bDisableCollision; // 0x80 (0x1)
	unsigned char bParentDominates; // 0x80 (0x1)
	unsigned char bEnableShockPropagation; // 0x80 (0x1)
	unsigned char bEnableProjection; // 0x80 (0x1)
	unsigned char bEnableMassConditioning; // 0x80 (0x1)
	unsigned char bAngularBreakable; // 0x80 (0x1)
	unsigned char bAngularPlasticity; // 0x80 (0x1)
	unsigned char bLinearBreakable; // 0x80 (0x1)
	unsigned char bLinearPlasticity; // 0x81 (0x1)
	unsigned char unreflected_82[0x6]; // 0x82 (0x6) 
	struct FLinearDriveConstraint LinearDrive; // 0x88 (0x68)
	struct FAngularDriveConstraint AngularDrive; // 0xf0 (0x68)
	struct TEnumAsByte<EConstraintPlasticityType> LinearPlasticityType; // 0x158 (0x1)
	unsigned char padding_159[0x7]; // 0x159 (0x7)
};

