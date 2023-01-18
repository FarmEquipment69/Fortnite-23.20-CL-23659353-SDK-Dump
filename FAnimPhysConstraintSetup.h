// ScriptStruct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x88
struct FAnimPhysConstraintSetup
{
	enum AnimPhysLinearConstraintType LinearXLimitType; // 0x0 (0x1)
	enum AnimPhysLinearConstraintType LinearYLimitType; // 0x1 (0x1)
	enum AnimPhysLinearConstraintType LinearZLimitType; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FVector LinearAxesMin; // 0x8 (0x18)
	struct FVector LinearAxesMax; // 0x20 (0x18)
	enum AnimPhysAngularConstraintType AngularConstraintType; // 0x38 (0x1)
	enum AnimPhysTwistAxis TwistAxis; // 0x39 (0x1)
	enum AnimPhysTwistAxis AngularTargetAxis; // 0x3a (0x1)
	unsigned char unreflected_3b[0x1]; // 0x3b (0x1) 
	float ConeAngle; // 0x3c (0x4)
	struct FVector AngularLimitsMin; // 0x40 (0x18)
	struct FVector AngularLimitsMax; // 0x58 (0x18)
	struct FVector AngularTarget; // 0x70 (0x18)
};

