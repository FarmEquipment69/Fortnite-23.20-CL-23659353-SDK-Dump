// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionTask
// Size: 0x30
struct FGameplayInteractionSyncSlotTagTransitionTask : FGameplayInteractionStateTreeTask
{
	struct FGameplayTag TransitionFromTag; // 0x20 (0x4)
	struct FGameplayTag TransitionToTag; // 0x24 (0x4)
	struct FGameplayTag TransitionEventTag; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

