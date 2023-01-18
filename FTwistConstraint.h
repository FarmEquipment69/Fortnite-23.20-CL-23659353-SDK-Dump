// ScriptStruct /Script/Engine.TwistConstraint
// Size: 0x1c
struct FTwistConstraint : FConstraintBaseParams
{
	float TwistLimitDegrees; // 0x14 (0x4)
	struct TEnumAsByte<EAngularConstraintMotion> TwistMotion; // 0x18 (0x1)
	unsigned char padding_19[0x3]; // 0x19 (0x3)
};

