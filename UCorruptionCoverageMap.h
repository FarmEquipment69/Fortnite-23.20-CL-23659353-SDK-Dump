// Class /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap
// Size: 0x90
class UCorruptionCoverageMap : public UObject
{
	unsigned char unreflected_90[0x90]; 

	/* Functions */

	// Function /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap.UpdateCorruptionCoverageMap (Underlying native function: UpdateCorruptionCoverageMap 0x72bfbdc)
	bool UpdateCorruptionCoverageMap(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& CorruptionRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float& CoverageThreshold, float& DebugDrawDuration); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap.IsLocationCorrupted (Underlying native function: IsLocationCorrupted 0x72bf164)
	bool IsLocationCorrupted(struct FVector& Location, float& Padding); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

