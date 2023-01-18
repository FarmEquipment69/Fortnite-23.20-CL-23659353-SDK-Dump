// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledTask
// Size: 0x28
struct FGameplayInteractionSetSlotEnabledTask : FGameplayInteractionStateTreeTask
{
	enum EGameplayInteractionTaskModify Modify; // 0x20 (0x1)
	bool bEnableSlot; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

