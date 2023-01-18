// ScriptStruct /Script/FortniteGame.CreativeDeviceInstanceInfo
// Size: 0x80
struct FCreativeDeviceInstanceInfo
{
	struct TWeakObjectPtr<class AActor> ActorPtr; // 0x0 (0x28)
	int DeviceTrackingGUID; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UClass* Class; // 0x30 (0x8)
	struct FString Label; // 0x38 (0x10)
	bool bIsActorCut; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FVector_NetQuantize10 ActorLocation; // 0x50 (0x18)
	struct TArray<struct FCreativeDeviceEventSubscriptionInfo> DeviceFunctionSubscriptions; // 0x68 (0x10)
	unsigned char padding_78[0x8]; // 0x78 (0x8)
};

