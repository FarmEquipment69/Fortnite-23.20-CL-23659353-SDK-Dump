// ScriptStruct /Script/FortniteGame.FortCreativeMessageDispatcherErrorMessage
// Size: 0x28
struct FFortCreativeMessageDispatcherErrorMessage
{
	enum EMessageDispatcherErrorMessageType ErrorMessageType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText MessageName; // 0x8 (0x18)
	struct FGameplayTag ChannelId; // 0x20 (0x4)
	int LimitValue; // 0x24 (0x4)
};

