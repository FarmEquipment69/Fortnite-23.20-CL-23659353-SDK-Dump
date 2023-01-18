// ScriptStruct /Script/StateTreeModule.GameplayTagMatchCondition
// Size: 0x28
struct FGameplayTagMatchCondition : FStateTreeConditionCommonBase
{
	bool bExactMatch; // 0x20 (0x1)
	bool bInvert; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

