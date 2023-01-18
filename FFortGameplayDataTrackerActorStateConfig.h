// ScriptStruct /Script/FortniteGame.FortGameplayDataTrackerActorStateConfig
// Size: 0x268
struct FFortGameplayDataTrackerActorStateConfig
{
	struct FGameplayTag StateTag; // 0x0 (0x4)
	struct FGameplayTag EventTag; // 0x4 (0x4)
	struct FScalableFloat ShouldUseDistanceCheck; // 0x8 (0x28)
	struct FScalableFloat ShouldInterpolateValueOverDistance; // 0x30 (0x28)
	struct FScalableFloat DistanceNear; // 0x58 (0x28)
	struct FScalableFloat DistanceFar; // 0x80 (0x28)
	struct FScalableFloat DistancePercentLerpExponent; // 0xa8 (0x28)
	struct FScalableFloat ShouldUseDotProductTest; // 0xd0 (0x28)
	struct FScalableFloat DotProductComparisonValue; // 0xf8 (0x28)
	struct FScalableFloat DotProductFalureMultiplier; // 0x120 (0x28)
	struct FScalableFloat ShouldHaveFirstEntryEvent; // 0x148 (0x28)
	struct FGameplayTag FirstEntryEvent; // 0x170 (0x4)
	unsigned char unreflected_174[0x4]; // 0x174 (0x4) 
	struct FScalableFloat FirstEntryEventGuaranteedRange; // 0x178 (0x28)
	struct FScalableFloat FirstEntryEventNearComparisonRange; // 0x1a0 (0x28)
	struct FScalableFloat FirstEntryEventTrackedActorFacingNearDotProductComparisonValue; // 0x1c8 (0x28)
	struct FScalableFloat FirstEntryEventTrackedActorFacingFarDotProductComparisonValue; // 0x1f0 (0x28)
	struct FScalableFloat FirstEntryEventAvatarActorFacingNearDotProductComparisonValue; // 0x218 (0x28)
	struct FScalableFloat FirstEntryEventAvatarActorFacingFarDotProductComparisonValue; // 0x240 (0x28)
};

