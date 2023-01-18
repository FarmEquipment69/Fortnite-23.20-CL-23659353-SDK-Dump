// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionFindSlotTask
// Size: 0x30
struct FGameplayInteractionFindSlotTask : FGameplayInteractionStateTreeTask
{
	enum EGameplayInteractionSlotReferenceType ReferenceType; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	struct FGameplayTag FindByTag; // 0x24 (0x4)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

