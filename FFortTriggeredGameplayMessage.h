// ScriptStruct /Script/FortniteGame.FortTriggeredGameplayMessage
// Size: 0x18
struct FFortTriggeredGameplayMessage
{
	class UFortGameplayTriggerMessageComponent* Sender; // 0x0 (0x8)
	struct FGameplayTag ChannelId; // 0x8 (0x4)
	struct TWeakObjectPtr<class AController> TriggerInstigator; // 0xc (0x8)
	unsigned char padding_14[0x4]; // 0x14 (0x4)
};

