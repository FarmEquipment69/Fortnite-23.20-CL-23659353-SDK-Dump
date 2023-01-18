// ScriptStruct /Script/FortniteAI.GameplayTagActorHasMatchingGameplayContainerTagCondition
// Size: 0x28
struct FGameplayTagActorHasMatchingGameplayContainerTagCondition : FStateTreeConditionCommonBase
{
	enum EHasMatchingGameplayTagContainerTestType TestType; // 0x20 (0x1)
	bool bInvert; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

