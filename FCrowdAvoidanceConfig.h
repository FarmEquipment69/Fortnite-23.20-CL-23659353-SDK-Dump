// ScriptStruct /Script/AIModule.CrowdAvoidanceConfig
// Size: 0x1c
struct FCrowdAvoidanceConfig
{
	float VelocityBias; // 0x0 (0x4)
	float DesiredVelocityWeight; // 0x4 (0x4)
	float CurrentVelocityWeight; // 0x8 (0x4)
	float SideBiasWeight; // 0xc (0x4)
	float ImpactTimeWeight; // 0x10 (0x4)
	float ImpactTimeRange; // 0x14 (0x4)
	unsigned char CustomPatternIdx; // 0x18 (0x1)
	unsigned char AdaptiveDivisions; // 0x19 (0x1)
	unsigned char AdaptiveRings; // 0x1a (0x1)
	unsigned char AdaptiveDepth; // 0x1b (0x1)
};

