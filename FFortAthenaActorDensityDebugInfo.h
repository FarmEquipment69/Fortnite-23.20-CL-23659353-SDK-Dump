// ScriptStruct /Script/LagerRuntime.FortAthenaActorDensityDebugInfo
// Size: 0x48
struct FFortAthenaActorDensityDebugInfo
{
	struct FString ActorName; // 0x0 (0x10)
	struct FVector ActorPosition; // 0x10 (0x18)
	struct FIntVector MinCellIndex; // 0x28 (0xc)
	struct FIntVector MaxCellIndex; // 0x34 (0xc)
	float DensityValue; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

