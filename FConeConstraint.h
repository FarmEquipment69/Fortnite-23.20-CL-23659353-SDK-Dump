// ScriptStruct /Script/Engine.ConeConstraint
// Size: 0x20
struct FConeConstraint : FConstraintBaseParams
{
	float Swing1LimitDegrees; // 0x14 (0x4)
	float Swing2LimitDegrees; // 0x18 (0x4)
	struct TEnumAsByte<EAngularConstraintMotion> Swing1Motion; // 0x1c (0x1)
	struct TEnumAsByte<EAngularConstraintMotion> Swing2Motion; // 0x1d (0x1)
	unsigned char padding_1e[0x2]; // 0x1e (0x2)
};

