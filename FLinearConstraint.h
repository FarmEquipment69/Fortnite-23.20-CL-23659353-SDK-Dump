// ScriptStruct /Script/Engine.LinearConstraint
// Size: 0x1c
struct FLinearConstraint : FConstraintBaseParams
{
	float Limit; // 0x14 (0x4)
	struct TEnumAsByte<ELinearConstraintMotion> XMotion; // 0x18 (0x1)
	struct TEnumAsByte<ELinearConstraintMotion> YMotion; // 0x19 (0x1)
	struct TEnumAsByte<ELinearConstraintMotion> ZMotion; // 0x1a (0x1)
	unsigned char padding_1b[0x1]; // 0x1b (0x1)
};

