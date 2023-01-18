// ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage
// Size: 0x40
struct FLiveLinkPongMessage
{
	struct FString ProviderName; // 0x0 (0x10)
	struct FString MachineName; // 0x10 (0x10)
	struct FGuid PollRequest; // 0x20 (0x10)
	int LiveLinkVersion; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	double CreationPlatformTime; // 0x38 (0x8)
};

