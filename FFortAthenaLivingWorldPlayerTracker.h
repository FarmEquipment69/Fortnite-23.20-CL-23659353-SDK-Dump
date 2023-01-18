// ScriptStruct /Script/LagerRuntime.FortAthenaLivingWorldPlayerTracker
// Size: 0xb0
struct FFortAthenaLivingWorldPlayerTracker
{
	struct TSet<class AFortAthenaAIBotController*> TrackedBotControllers; // 0x0 (0x50)
	struct TArray<class AFortPlayerPawn*> TrackedPlayerPawns; // 0x50 (0x10)
	struct TArray<class AController*> TrackedPlayerControllers; // 0x60 (0x10)
	unsigned char padding_70[0x40]; // 0x70 (0x40)
};

