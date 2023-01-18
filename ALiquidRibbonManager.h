// Class /Script/UnstableLiquidGunRuntime.LiquidRibbonManager
// Size: 0x440
class ALiquidRibbonManager : public AActor
{
	int PointsPerSegment; // 0x288 (0x4)
	unsigned char unreflected_28c[0x4]; // 0x28c (0x4) 
	struct FScalableFloat MaxSegmentLengthBeforeBreak; // 0x290 (0x28)
	float SplineCurveTension; // 0x2b8 (0x4)
	float MinPointSize; // 0x2bc (0x4)
	float MaxPointSize; // 0x2c0 (0x4)
	int NumPointsAtMinPointSize; // 0x2c4 (0x4)
	int NumPointsAtMaxPointSize; // 0x2c8 (0x4)
	float SplineLengthForSizeCalculation; // 0x2cc (0x4)
	int NumPointsToTaperDownSplineEndSize; // 0x2d0 (0x4)
	float MinSplineEndTaperSize; // 0x2d4 (0x4)
	float TaperSizeAtDetachmentRemapClosenessToBreakageOldMin; // 0x2d8 (0x4)
	float TaperSizeAtDetachmentRemapClosenessToBreakageOldMax; // 0x2dc (0x4)
	float MinPointSizePercentForFlashIntensity; // 0x2e0 (0x4)
	float MaxPointSizePercentForFlashIntensity; // 0x2e4 (0x4)
	struct FName PositionsNiagaraParamName; // 0x2e8 (0x4)
	struct FName RibbonIDsNiagaraParamName; // 0x2ec (0x4)
	struct FName RibbonVisibilitiesNiagaraParamName; // 0x2f0 (0x4)
	struct FName FlashIntensitiesNiagaraParamName; // 0x2f4 (0x4)
	struct FName RibbonSizesNiagaraParamName; // 0x2f8 (0x4)
	unsigned char unreflected_2fc[0x4]; // 0x2fc (0x4) 
	struct FScalableFloat CalculateBaseCurlOffsetMaxSegmentLength; // 0x300 (0x28)
	struct FScalableFloat CalculateBaseCurlOffsetMaxTimeSinceDetachment; // 0x328 (0x28)
	struct FScalableFloat CalculateBaseCurlOffsetTowardPerpendicularMult; // 0x350 (0x28)
	struct FScalableFloat CalculateBaseCurlOffsetTowardEndMult; // 0x378 (0x28)
	struct FScalableFloat CalculateBaseCurlOffsetTowardRandomMult; // 0x3a0 (0x28)
	class UCurveFloat* TimeSinceDetachmentCurlCurve; // 0x3c8 (0x8)
	struct FScalableFloat TimeSinceDetachmentCurlCurveMaxTime; // 0x3d0 (0x28)
	float CurlingMaxClosenessToBreakage; // 0x3f8 (0x4)
	unsigned char unreflected_3fc[0x4]; // 0x3fc (0x4) 
	struct TArray<float> SegmentLengths; // 0x400 (0x10)
	struct TArray<struct FLiquidRibbonSplineDetachment> Detachments; // 0x410 (0x10)
	struct TArray<struct FLiquidRibbonSplineSegment> SplineSegments; // 0x420 (0x10)
	struct TArray<class AFortLiquidGunProjectile*> ProjectilesNative; // 0x430 (0x10)

	/* Functions */

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.SetNiagaraData (Underlying native function: SetNiagaraData 0x77c1074)
	void SetNiagaraData(class UNiagaraComponent*& NiagaraComponent, struct TArray<struct FVector>& Positions, struct TArray<int>& RibbonIDs, struct TArray<bool>& RibbonVisibilities, struct TArray<float>& FlashIntensities, struct TArray<int>& RibbonSizes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.RunSplineCollisionTestOnProjectiles (Underlying native function: RunSplineCollisionTestOnProjectiles 0x77c0fac)
	void RunSplineCollisionTestOnProjectiles(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetPointOnSegment (Underlying native function: GetPointOnSegment 0x77c0e90)
	struct FVector GetPointOnSegment(float& T, struct FLiquidRibbonSplineSegment& Segment); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetOrAddDetachment (Underlying native function: GetOrAddDetachment 0x77c0d84)
	struct FLiquidRibbonSplineDetachment GetOrAddDetachment(int& RibbonID, struct FLiquidRibbonSplineSegment& Segment); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetFirstVisiblePointIndex (Underlying native function: GetFirstVisiblePointIndex 0x77c0d5c)
	int GetFirstVisiblePointIndex(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSplinePointsAndSetNiagaraData (Underlying native function: CalculateSplinePointsAndSetNiagaraData 0x77c090c)
	void CalculateSplinePointsAndSetNiagaraData(struct TArray<class AFortLiquidGunProjectile*>& Projectiles, bool& bAttachSplineToMuzzle, class UNiagaraComponent*& NiagaraComponent, struct TArray<struct FVector>& OutAllPositions, struct TArray<int>& OutRibbonIDs, struct TArray<bool>& OutRibbonVisibilities, struct TArray<float>& OutFlashIntensities, struct TArray<int>& OutRibbonSizes); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSegments (Underlying native function: CalculateSegments 0x77c07fc)
	struct TArray<struct FLiquidRibbonSplineSegment> CalculateSegments(struct TArray<struct FVector>& Points, float& Tension); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointSize (Underlying native function: CalculatePointSize 0x77c0740)
	float CalculatePointSize(int& SegmentIndex, int& PointIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointFlashIntensity (Underlying native function: CalculatePointFlashIntensity 0x77c06b0)
	float CalculatePointFlashIntensity(int& PointSize); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

