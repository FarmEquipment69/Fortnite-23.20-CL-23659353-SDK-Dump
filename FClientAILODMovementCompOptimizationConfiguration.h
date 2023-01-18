// ScriptStruct /Script/FortniteAI.ClientAILODMovementCompOptimizationConfiguration
// Size: 0x1e0
struct FClientAILODMovementCompOptimizationConfiguration
{
	struct FScalableFloat bEnable; // 0x0 (0x28)
	struct FScalableFloat bEnableSimulationDataOptimizations; // 0x28 (0x28)
	struct FScalableFloat MinDistanceToApplyFrameSkippingWhenVisible; // 0x50 (0x28)
	struct FScalableFloat FrameSkippingOnLOD1; // 0x78 (0x28)
	struct FScalableFloat bRequireHittingPawnThresholdForLOD1; // 0xa0 (0x28)
	struct FScalableFloat FrameSkippingOnLOD2; // 0xc8 (0x28)
	struct FScalableFloat bRequireHittingPawnThresholdForLOD2; // 0xf0 (0x28)
	struct FScalableFloat FrameSkippingOnLowestLOD; // 0x118 (0x28)
	struct FScalableFloat FrameSkippingOnLowestLODWithSmallViewAngleRendered; // 0x140 (0x28)
	struct FScalableFloat FrameSkippingOnLowestLODWithSmallViewAngleNotRendered; // 0x168 (0x28)
	struct FScalableFloat FrameSkippingInvisible; // 0x190 (0x28)
	struct FScalableFloat bForceInvisibleValueWhenNotRenderedForThreshold; // 0x1b8 (0x28)
};

