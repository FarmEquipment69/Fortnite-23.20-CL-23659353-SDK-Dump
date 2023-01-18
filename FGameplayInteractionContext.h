// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionContext
// Size: 0x60
struct FGameplayInteractionContext
{
	struct FStateTreeInstanceData StateTreeInstanceData; // 0x0 (0x30)
	struct FSmartObjectClaimHandle ClaimedHandle; // 0x30 (0x10)
	struct FGameplayInteractionAbortContext AbortContext; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	class AActor* ContextActor; // 0x48 (0x8)
	class AActor* SmartObjectActor; // 0x50 (0x8)
	class UGameplayInteractionSmartObjectBehaviorDefinition* Definition; // 0x58 (0x8)
};

