// ScriptStruct /Script/StateTreeModule.StateTreeConditionBase
// Size: 0x20
struct FStateTreeConditionBase : FStateTreeNodeBase
{
	enum EStateTreeConditionOperand Operand; // 0x18 (0x1)
	int8_t DeltaIndent; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

