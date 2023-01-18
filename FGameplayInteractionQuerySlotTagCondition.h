// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagCondition
// Size: 0x78
struct FGameplayInteractionQuerySlotTagCondition : FGameplayInteractionStateTreeCondition
{
	enum EGameplayInteractionMatchSlotTagSource Source; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct FGameplayTagQuery TagQuery; // 0x28 (0x48)
	bool bInvert; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

