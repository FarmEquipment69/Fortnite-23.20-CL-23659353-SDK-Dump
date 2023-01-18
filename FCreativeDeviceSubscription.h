// ScriptStruct /Script/FortniteUI.CreativeDeviceSubscription
// Size: 0x68
struct FCreativeDeviceSubscription
{
	int DestinationDeviceGUID; // 0x0 (0x4)
	bool bIsEvent; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FText SourceSubscriptionDisplayName; // 0x8 (0x18)
	struct FText DestinationDeviceDisplayName; // 0x20 (0x18)
	struct FText DestinationSubscriptionDisplayName; // 0x38 (0x18)
	struct FVector_NetQuantize10 ActorLocation; // 0x50 (0x18)
};

