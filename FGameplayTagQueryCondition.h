// ScriptStruct /Script/StateTreeModule.GameplayTagQueryCondition
// Size: 0x70
struct FGameplayTagQueryCondition : FStateTreeConditionCommonBase
{
	struct FGameplayTagQuery TagQuery; // 0x20 (0x48)
	bool bInvert; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

