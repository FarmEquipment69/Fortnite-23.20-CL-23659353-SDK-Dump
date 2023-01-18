// Class /Script/LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
// Size: 0x190
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator
{
	struct TArray<struct FFortAthenaActorDensityDebugInfo> ActorDebugInfos; // 0x140 (0x10)
	struct TArray<float> DensityGridValues; // 0x150 (0x10)
	struct FVector GridOrigin; // 0x160 (0x18)
	struct FIntVector MaxGridSize; // 0x178 (0xc)
	float CellSize; // 0x184 (0x4)
	float MaxDensity; // 0x188 (0x4)
	unsigned char padding_18c[0x4]; // 0x18c (0x4)
};

