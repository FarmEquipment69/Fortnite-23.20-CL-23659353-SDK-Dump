// ScriptStruct /Script/FortniteGame.BasicDeviceTrackingInfo
// Size: 0x68
struct FBasicDeviceTrackingInfo
{
	int DeviceTrackingGUID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class AActor> ActorPtr; // 0x8 (0x28)
	class UClass* Class; // 0x30 (0x8)
	struct FString Label; // 0x38 (0x10)
	struct FVector_NetQuantize10 ActorLocation; // 0x48 (0x18)
	uint16_t NumBoundFunctions; // 0x60 (0x2)
	uint16_t NumBoundEvents; // 0x62 (0x2)
	int CabinModeNameNum; // 0x64 (0x4)
};

