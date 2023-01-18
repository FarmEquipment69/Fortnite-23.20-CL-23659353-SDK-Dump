// ScriptStruct /Script/EventScreenBase.EventScreenCMSData
// Size: 0x160
struct FEventScreenCMSData
{
	struct FString EventCMSId; // 0x0 (0x10)
	struct FText EventName; // 0x10 (0x18)
	struct FText EventDescription; // 0x28 (0x18)
	struct FText ResourceHeader; // 0x40 (0x18)
	struct FText StarterHeader; // 0x58 (0x18)
	struct FText CompletionHeader; // 0x70 (0x18)
	struct FText EventCTA; // 0x88 (0x18)
	struct FText EventCTACompleted; // 0xa0 (0x18)
	struct FString CTAIconURL; // 0xb8 (0x10)
	struct FString KeyArtURL; // 0xc8 (0x10)
	struct FText MoreInfoHeader; // 0xd8 (0x18)
	struct FText MoreInfoSubHeader; // 0xf0 (0x18)
	struct FText MoreInfoBody; // 0x108 (0x18)
	struct FText MoreInfoLegal; // 0x120 (0x18)
	struct FText PurchaseLegal; // 0x138 (0x18)
	struct TArray<struct FEventScreenCMSResourceGroupOverride> ResourceGroupOverrides; // 0x150 (0x10)
};

