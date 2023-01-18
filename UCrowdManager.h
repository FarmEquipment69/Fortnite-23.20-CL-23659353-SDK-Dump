// Class /Script/AIModule.CrowdManager
// Size: 0xf0
class UCrowdManager : public UCrowdManagerBase
{
	class ANavigationData* MyNavData; // 0x28 (0x8)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30 (0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40 (0x10)
	int MaxAgents; // 0x50 (0x4)
	float MaxAgentRadius; // 0x54 (0x4)
	int MaxAvoidedAgents; // 0x58 (0x4)
	int MaxAvoidedWalls; // 0x5c (0x4)
	float NavmeshCheckInterval; // 0x60 (0x4)
	float PathOptimizationInterval; // 0x64 (0x4)
	float SeparationDirClamp; // 0x68 (0x4)
	float PathOffsetRadiusMultiplier; // 0x6c (0x4)
	unsigned char bResolveCollisions; // 0x70 (0x1)
	unsigned char padding_71[0x7f]; // 0x71 (0x7f)
};

