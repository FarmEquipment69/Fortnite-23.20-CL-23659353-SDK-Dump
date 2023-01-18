// Class /Script/Engine.DemoNetDriver
// Size: 0x1430
class UDemoNetDriver : public UNetDriver
{
	unsigned char unreflected_788[0x38]; // 0x788 (0x38) 
	struct TMap<struct FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x7c0 (0x50)
	unsigned char unreflected_810[0xdc]; // 0x810 (0xdc) 
	float CheckpointSaveMaxMSPerFrame; // 0x8ec (0x4)
	unsigned char unreflected_8f0[0x18]; // 0x8f0 (0x18) 
	struct TArray<struct FMulticastRecordOptions> MulticastRecordOptions; // 0x908 (0x10)
	struct TArray<class APlayerController*> SpectatorControllers; // 0x918 (0x10)
	unsigned char padding_928[0xb08]; // 0x928 (0xb08)
};

