// ScriptStruct /Script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTask
// Size: 0x40
struct FGameplayInteractionSendSlotEventTask : FGameplayInteractionStateTreeTask
{
	struct FGameplayTag EventTag; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FInstancedStruct Payload; // 0x28 (0x10)
	enum EGameplayInteractionTaskTrigger Trigger; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

