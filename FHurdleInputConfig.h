// ScriptStruct /Script/VaultingCodeRuntime.HurdleInputConfig
// Size: 0x3c0
struct FHurdleInputConfig
{
	struct FScalableFloat CastRadius; // 0x0 (0x28)
	struct FScalableFloat MaxAllowedFallDistance; // 0x28 (0x28)
	struct FScalableFloat ForwardCastDistancePhase1; // 0x50 (0x28)
	struct FScalableFloat ForwardCastDistancePhase1ManualHurdle; // 0x78 (0x28)
	struct FScalableFloat Phase1WallAngleToleranceFlat; // 0xa0 (0x28)
	struct FScalableFloat Phase1SweepGroundBufferHeight; // 0xc8 (0x28)
	struct FScalableFloat Phase1SweepGroundMaxHeight; // 0xf0 (0x28)
	struct FScalableFloat Phase1FloorWallOffset; // 0x118 (0x28)
	struct FScalableFloat Phase1FloorMinHeightForHurlde; // 0x140 (0x28)
	unsigned char unreflected_168[0x28]; // 0x168 (0x28) 
	struct FScalableFloat Phase2UpAngleTolerance; // 0x190 (0x28)
	struct FScalableFloat Phase2FloorMaxHeightForHurlde; // 0x1b8 (0x28)
	unsigned char unreflected_1e0[0x28]; // 0x1e0 (0x28) 
	struct FScalableFloat Phase3CapsuleOffset; // 0x208 (0x28)
	struct FScalableFloat Phase3ClearanceCapsuleSize; // 0x230 (0x28)
	struct FScalableFloat Phase3ForwardCastDistance; // 0x258 (0x28)
	struct FScalableFloat Phase3MinTopClearanceForHurdleOn; // 0x280 (0x28)
	struct FScalableFloat Phase4MaxDownDistance; // 0x2a8 (0x28)
	struct FScalableFloat Phase4UpAngleTolerance; // 0x2d0 (0x28)
	struct FScalableFloat Phase4HurdleOnZTolerance; // 0x2f8 (0x28)
	struct FScalableFloat Phase5CapsuleOffset; // 0x320 (0x28)
	struct FScalableFloat Phase5ClearanceCapsuleSize; // 0x348 (0x28)
	struct FScalableFloat FinalResultGroundAimOffset; // 0x370 (0x28)
	struct FScalableFloat SlideBufferTime; // 0x398 (0x28)
};

