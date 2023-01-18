// ScriptStruct /Script/FortniteAI.ClientAILODSettings
// Size: 0x2f0
struct FClientAILODSettings
{
	struct FScalableFloat ScoreMultiplier; // 0x0 (0x28)
	struct FScalableFloat PreloadingPriorityOverride; // 0x28 (0x28)
	struct FScalableFloat bSupportCharacterMovementOptimization; // 0x50 (0x28)
	struct FClientAILODMovementCompOptimizationConfiguration MovementCompOptimizationConfiguration; // 0x78 (0x1e0)
	struct FScalableFloat bAIPawnOnlyTickMeshWhenRendered; // 0x258 (0x28)
	struct FScalableFloat bAIPawnApplyEffectOptimizations; // 0x280 (0x28)
	unsigned char padding_2a8[0x48]; // 0x2a8 (0x48)
};

