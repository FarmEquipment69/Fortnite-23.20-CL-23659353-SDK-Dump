// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionSlotTagsMatchCondition
// Size: 0x28
struct FGameplayInteractionSlotTagsMatchCondition : FGameplayInteractionStateTreeCondition
{
	enum EGameplayInteractionMatchSlotTagSource Source; // 0x20 (0x1)
	enum EGameplayContainerMatchType MatchType; // 0x21 (0x1)
	bool bExactMatch; // 0x22 (0x1)
	bool bInvert; // 0x23 (0x1)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

