// ScriptStruct /Script/WorldConditions.WorldConditionBase
// Size: 0x10
struct FWorldConditionBase
{
	unsigned char bInvert; // 0xb (0x1)
	enum EWorldConditionOperator Operator; // 0xc (0x1)
	unsigned char NextExpressionDepth; // 0xd (0x1)
	unsigned char padding_e[0x2]; // 0xe (0x2)
};

