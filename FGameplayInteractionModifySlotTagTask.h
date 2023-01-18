// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTask
// Size: 0x30
struct FGameplayInteractionModifySlotTagTask : FGameplayInteractionStateTreeTask
{
	enum EGameplayInteractionTaskModify Modify; // 0x20 (0x1)
	enum EGameplayInteractionModifyGameplayTagOperation Operation; // 0x21 (0x1)
	unsigned char unreflected_22[0x2]; // 0x22 (0x2) 
	struct FGameplayTag tag; // 0x24 (0x4)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

