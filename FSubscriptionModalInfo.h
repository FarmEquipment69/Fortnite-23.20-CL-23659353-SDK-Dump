// ScriptStruct /Script/FortniteUI.SubscriptionModalInfo
// Size: 0x38
struct FSubscriptionModalInfo
{
	struct FString ModalId; // 0x0 (0x10)
	enum EAppStore PlatformId; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FText> Entries; // 0x18 (0x10)
	struct FString QrCodeImage; // 0x28 (0x10)
};

