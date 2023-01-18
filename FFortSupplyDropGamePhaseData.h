// ScriptStruct /Script/FortniteGame.FortSupplyDropGamePhaseData
// Size: 0x210
struct FFortSupplyDropGamePhaseData
{
	enum EAthenaGamePhase GamePhase; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FScalableFloat SupplyDropMinPlacementHeight; // 0x8 (0x28)
	struct FScalableFloat SupplyDropMaxPlacementHeight; // 0x30 (0x28)
	struct FScalableFloat SupplyDropTimeInterval; // 0x58 (0x28)
	struct FScalableFloat SupplyDropTimeDeviation; // 0x80 (0x28)
	struct FScalableFloat SupplyDropSpawnMinWaitTime; // 0xa8 (0x28)
	struct FScalableFloat SupplyDropSpawnMaxWaitTime; // 0xd0 (0x28)
	struct FScalableFloat SupplyDropMinSpawnHeight; // 0xf8 (0x28)
	struct FScalableFloat SupplyDropMaxSpawnHeight; // 0x120 (0x28)
	struct FScalableFloat SupplyDropMinSpeed; // 0x148 (0x28)
	struct FScalableFloat SupplyDropMaxSpeed; // 0x170 (0x28)
	struct FFortSupplyDropSubPhaseData SubPhaseData; // 0x198 (0x78)
};

