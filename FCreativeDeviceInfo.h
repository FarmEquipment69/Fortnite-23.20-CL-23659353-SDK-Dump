// ScriptStruct /Script/FortniteUI.CreativeDeviceInfo
// Size: 0x80
struct FCreativeDeviceInfo
{
	int DeviceTrackingGUID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class AActor> ActorPtr; // 0x8 (0x28)
	struct FVector_NetQuantize10 ActorLocation; // 0x30 (0x18)
	struct FString DisplayName; // 0x48 (0x10)
	struct TArray<struct FCreativeDeviceSubscription> OutgoingEvents; // 0x58 (0x10)
	struct TArray<struct FCreativeDeviceSubscription> CalledFunctions; // 0x68 (0x10)
	int NumBoundEvents; // 0x78 (0x4)
	int NumBoundFunctions; // 0x7c (0x4)
};

