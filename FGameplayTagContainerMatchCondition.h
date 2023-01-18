// ScriptStruct /Script/StateTreeModule.GameplayTagContainerMatchCondition
// Size: 0x28
struct FGameplayTagContainerMatchCondition : FStateTreeConditionCommonBase
{
	enum EGameplayContainerMatchType MatchType; // 0x20 (0x1)
	bool bExactMatch; // 0x21 (0x1)
	bool bInvert; // 0x22 (0x1)
	unsigned char padding_23[0x5]; // 0x23 (0x5)
};

