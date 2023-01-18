// ScriptStruct /Script/GameplayMessages.GameplayMessageReceiverHandle
// Size: 0x18
struct FGameplayMessageReceiverHandle
{
	struct TWeakObjectPtr<class UGameplayMessageRouter> Subsystem; // 0x0 (0x8)
	struct FEventMessageTag Channel; // 0x8 (0x4)
	int ID; // 0xc (0x4)
	unsigned char padding_10[0x8]; // 0x10 (0x8)
};

