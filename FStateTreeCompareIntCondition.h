// ScriptStruct /Script/StateTreeModule.StateTreeCompareIntCondition
// Size: 0x28
struct FStateTreeCompareIntCondition : FStateTreeConditionCommonBase
{
	bool bInvert; // 0x20 (0x1)
	enum EGenericAICheck Operator; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

