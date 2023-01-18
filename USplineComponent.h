// Class /Script/Engine.SplineComponent
// Size: 0x640
class USplineComponent : public UPrimitiveComponent
{
	struct FSplineCurves SplineCurves; // 0x540 (0x70)
	struct FInterpCurveVector SplineInfo; // 0x5b0 (0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0x5c8 (0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0x5e0 (0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0x5f8 (0x18)
	bool bAllowSplineEditingPerInstance; // 0x610 (0x1)
	unsigned char unreflected_611[0x3]; // 0x611 (0x3) 
	int ReparamStepsPerSegment; // 0x614 (0x4)
	float Duration; // 0x618 (0x4)
	bool bStationaryEndpoints; // 0x61c (0x1)
	bool bSplineHasBeenEdited; // 0x61d (0x1)
	bool bModifiedByConstructionScript; // 0x61e (0x1)
	bool bInputSplinePointsToConstructionScript; // 0x61f (0x1)
	bool bDrawDebug; // 0x620 (0x1)
	bool bClosedLoop; // 0x621 (0x1)
	bool bLoopPositionOverride; // 0x622 (0x1)
	unsigned char unreflected_623[0x1]; // 0x623 (0x1) 
	float LoopPosition; // 0x624 (0x4)
	struct FVector DefaultUpVector; // 0x628 (0x18)

	/* Functions */

	// Function /Script/Engine.SplineComponent.UpdateSpline (Underlying native function: UpdateSpline 0x9d2e4dc)
	void UpdateSpline(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetWorldLocationAtSplinePoint (Underlying native function: SetWorldLocationAtSplinePoint 0x9d2e314)
	void SetWorldLocationAtSplinePoint(int& PointIndex, struct FVector& InLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetUpVectorAtSplinePoint (Underlying native function: SetUpVectorAtSplinePoint 0x9d2e138)
	void SetUpVectorAtSplinePoint(int& PointIndex, struct FVector& InUpVector, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetUnselectedSplineSegmentColor (Underlying native function: SetUnselectedSplineSegmentColor 0x8d9961c)
	void SetUnselectedSplineSegmentColor(struct FLinearColor& SegmentColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetTangentsAtSplinePoint (Underlying native function: SetTangentsAtSplinePoint 0x9d2df14)
	void SetTangentsAtSplinePoint(int& PointIndex, struct FVector& InArriveTangent, struct FVector& InLeaveTangent, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetTangentColor (Underlying native function: SetTangentColor 0x8d9961c)
	void SetTangentColor(struct FLinearColor& TangentColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetTangentAtSplinePoint (Underlying native function: SetTangentAtSplinePoint 0x9d2ddbc)
	void SetTangentAtSplinePoint(int& PointIndex, struct FVector& InTangent, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetSplineWorldPoints (Underlying native function: SetSplineWorldPoints 0x9d2d70c)
	void SetSplineWorldPoints(struct TArray<struct FVector>& Points); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetSplinePointType (Underlying native function: SetSplinePointType 0x9d2d408)
	void SetSplinePointType(int& PointIndex, struct TEnumAsByte<ESplinePointType>& Type, bool& bUpdateSpline); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetSplinePoints (Underlying native function: SetSplinePoints 0x9d2d504)
	void SetSplinePoints(struct TArray<struct FVector>& Points, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetSplineLocalPoints (Underlying native function: SetSplineLocalPoints 0x9d2d364)
	void SetSplineLocalPoints(struct TArray<struct FVector>& Points); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetSelectedSplineSegmentColor (Underlying native function: SetSelectedSplineSegmentColor 0x8d9961c)
	void SetSelectedSplineSegmentColor(struct FLinearColor& SegmentColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetScaleAtSplinePoint (Underlying native function: SetScaleAtSplinePoint 0x9d2cf7c)
	void SetScaleAtSplinePoint(int& PointIndex, struct FVector& InScaleVector, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetRotationAtSplinePoint (Underlying native function: SetRotationAtSplinePoint 0x9d2ce24)
	void SetRotationAtSplinePoint(int& PointIndex, struct FRotator& InRotation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetLocationAtSplinePoint (Underlying native function: SetLocationAtSplinePoint 0x9d2ca1c)
	void SetLocationAtSplinePoint(int& PointIndex, struct FVector& InLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetDrawDebug (Underlying native function: SetDrawDebug 0x9d2be8c)
	void SetDrawDebug(bool& bShow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetDefaultUpVector (Underlying native function: SetDefaultUpVector 0x9d2bb34)
	void SetDefaultUpVector(struct FVector& UpVector, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetClosedLoopAtPosition (Underlying native function: SetClosedLoopAtPosition 0x9d2b984)
	void SetClosedLoopAtPosition(bool& bInClosedLoop, float& Key, bool& bUpdateSpline); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.SetClosedLoop (Underlying native function: SetClosedLoop 0x9d2b8a0)
	void SetClosedLoop(bool& bInClosedLoop, bool& bUpdateSpline); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.RemoveSplinePoint (Underlying native function: RemoveSplinePoint 0x9d2b5fc)
	void RemoveSplinePoint(int& Index, bool& bUpdateSpline); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.IsClosedLoop (Underlying native function: IsClosedLoop 0x9d2b360)
	bool IsClosedLoop(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline (Underlying native function: GetWorldTangentAtDistanceAlongSpline 0x9d2b2b0)
	struct FVector GetWorldTangentAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldRotationAtTime (Underlying native function: GetWorldRotationAtTime 0x9d2b1bc)
	struct FRotator GetWorldRotationAtTime(float& Time, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline (Underlying native function: GetWorldRotationAtDistanceAlongSpline 0x9d2b10c)
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldLocationAtTime (Underlying native function: GetWorldLocationAtTime 0x9d2b018)
	struct FVector GetWorldLocationAtTime(float& Time, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldLocationAtSplinePoint (Underlying native function: GetWorldLocationAtSplinePoint 0x9d2af70)
	struct FVector GetWorldLocationAtSplinePoint(int& PointIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline (Underlying native function: GetWorldLocationAtDistanceAlongSpline 0x9d2aec0)
	struct FVector GetWorldLocationAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldDirectionAtTime (Underlying native function: GetWorldDirectionAtTime 0x9d2adcc)
	struct FVector GetWorldDirectionAtTime(float& Time, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline (Underlying native function: GetWorldDirectionAtDistanceAlongSpline 0x9d2ad1c)
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetVectorPropertyAtSplinePoint (Underlying native function: GetVectorPropertyAtSplinePoint 0x9d2ab48)
	struct FVector GetVectorPropertyAtSplinePoint(int& Index, struct FName& PropertyName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetVectorPropertyAtSplineInputKey (Underlying native function: GetVectorPropertyAtSplineInputKey 0x9d2aa6c)
	struct FVector GetVectorPropertyAtSplineInputKey(float& InKey, struct FName& PropertyName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetUpVectorAtTime (Underlying native function: GetUpVectorAtTime 0x9d2a87c)
	struct FVector GetUpVectorAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetUpVectorAtSplinePoint (Underlying native function: GetUpVectorAtSplinePoint 0x9d2a79c)
	struct FVector GetUpVectorAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetUpVectorAtSplineInputKey (Underlying native function: GetUpVectorAtSplineInputKey 0x9d2a6c0)
	struct FVector GetUpVectorAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline (Underlying native function: GetUpVectorAtDistanceAlongSpline 0x9d2a5e4)
	struct FVector GetUpVectorAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTransformAtTime (Underlying native function: GetTransformAtTime 0x9d2a39c)
	struct FTransform GetTransformAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity, bool& bUseScale); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTransformAtSplinePoint (Underlying native function: GetTransformAtSplinePoint 0x9d2a248)
	struct FTransform GetTransformAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseScale); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTransformAtSplineInputKey (Underlying native function: GetTransformAtSplineInputKey 0x9d2a0f0)
	struct FTransform GetTransformAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseScale); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTransformAtDistanceAlongSpline (Underlying native function: GetTransformAtDistanceAlongSpline 0x9d29f98)
	struct FTransform GetTransformAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseScale); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTimeAtDistanceAlongSpline (Underlying native function: GetTimeAtDistanceAlongSpline 0x9d27e64)
	float GetTimeAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTangentAtTime (Underlying native function: GetTangentAtTime 0x9d29e80)
	struct FVector GetTangentAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTangentAtSplinePoint (Underlying native function: GetTangentAtSplinePoint 0x9d29c54)
	struct FVector GetTangentAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTangentAtSplineInputKey (Underlying native function: GetTangentAtSplineInputKey 0x9d29a34)
	struct FVector GetTangentAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetTangentAtDistanceAlongSpline (Underlying native function: GetTangentAtDistanceAlongSpline 0x9d29958)
	struct FVector GetTangentAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetSplinePointType (Underlying native function: GetSplinePointType 0x9d297cc)
	struct TEnumAsByte<ESplinePointType> GetSplinePointType(int& PointIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetSplineLength (Underlying native function: GetSplineLength 0x9d297a4)
	float GetSplineLength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetScaleAtTime (Underlying native function: GetScaleAtTime 0x9d29654)
	struct FVector GetScaleAtTime(float& Time, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetScaleAtSplinePoint (Underlying native function: GetScaleAtSplinePoint 0x9d29584)
	struct FVector GetScaleAtSplinePoint(int& PointIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetScaleAtSplineInputKey (Underlying native function: GetScaleAtSplineInputKey 0x9d294dc)
	struct FVector GetScaleAtSplineInputKey(float& InKey); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetScaleAtDistanceAlongSpline (Underlying native function: GetScaleAtDistanceAlongSpline 0x9d29434)
	struct FVector GetScaleAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRotationAtTime (Underlying native function: GetRotationAtTime 0x9d2931c)
	struct FRotator GetRotationAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRotationAtSplinePoint (Underlying native function: GetRotationAtSplinePoint 0x9d29244)
	struct FRotator GetRotationAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRotationAtSplineInputKey (Underlying native function: GetRotationAtSplineInputKey 0x9d29168)
	struct FRotator GetRotationAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRotationAtDistanceAlongSpline (Underlying native function: GetRotationAtDistanceAlongSpline 0x9d2908c)
	struct FRotator GetRotationAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRollAtTime (Underlying native function: GetRollAtTime 0x9d28f88)
	float GetRollAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRollAtSplinePoint (Underlying native function: GetRollAtSplinePoint 0x9d28ec4)
	float GetRollAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRollAtSplineInputKey (Underlying native function: GetRollAtSplineInputKey 0x9d28dc4)
	float GetRollAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRollAtDistanceAlongSpline (Underlying native function: GetRollAtDistanceAlongSpline 0x9d28cf8)
	float GetRollAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRightVectorAtTime (Underlying native function: GetRightVectorAtTime 0x9d28be0)
	struct FVector GetRightVectorAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRightVectorAtSplinePoint (Underlying native function: GetRightVectorAtSplinePoint 0x9d28b00)
	struct FVector GetRightVectorAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRightVectorAtSplineInputKey (Underlying native function: GetRightVectorAtSplineInputKey 0x9d28a24)
	struct FVector GetRightVectorAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline (Underlying native function: GetRightVectorAtDistanceAlongSpline 0x9d28948)
	struct FVector GetRightVectorAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetNumberOfSplineSegments (Underlying native function: GetNumberOfSplineSegments 0x9d28840)
	int GetNumberOfSplineSegments(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetNumberOfSplinePoints (Underlying native function: GetNumberOfSplinePoints 0x9d28828)
	int GetNumberOfSplinePoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetLocationAtTime (Underlying native function: GetLocationAtTime 0x9d28710)
	struct FVector GetLocationAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetLocationAtSplinePoint (Underlying native function: GetLocationAtSplinePoint 0x9d28638)
	struct FVector GetLocationAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetLocationAtSplineInputKey (Underlying native function: GetLocationAtSplineInputKey 0x9d2855c)
	struct FVector GetLocationAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetLocationAtDistanceAlongSpline (Underlying native function: GetLocationAtDistanceAlongSpline 0x9d28480)
	struct FVector GetLocationAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetLocationAndTangentAtSplinePoint (Underlying native function: GetLocationAndTangentAtSplinePoint 0x9d28324)
	void GetLocationAndTangentAtSplinePoint(int& PointIndex, struct FVector& Location, struct FVector& Tangent, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint (Underlying native function: GetLocalLocationAndTangentAtSplinePoint 0x9d281fc)
	void GetLocalLocationAndTangentAtSplinePoint(int& PointIndex, struct FVector& LocalLocation, struct FVector& LocalTangent); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetLeaveTangentAtSplinePoint (Underlying native function: GetLeaveTangentAtSplinePoint 0x9d27fa4)
	struct FVector GetLeaveTangentAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetInputKeyValueAtDistanceAlongSpline (Underlying native function: GetInputKeyValueAtDistanceAlongSpline 0x9d27ef8)
	float GetInputKeyValueAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline (Underlying native function: GetInputKeyAtDistanceAlongSpline 0x9d27e64)
	float GetInputKeyAtDistanceAlongSpline(float& Distance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetFloatPropertyAtSplinePoint (Underlying native function: GetFloatPropertyAtSplinePoint 0x9d27d5c)
	float GetFloatPropertyAtSplinePoint(int& Index, struct FName& PropertyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetFloatPropertyAtSplineInputKey (Underlying native function: GetFloatPropertyAtSplineInputKey 0x9d27c94)
	float GetFloatPropertyAtSplineInputKey(float& InKey, struct FName& PropertyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint (Underlying native function: GetDistanceAlongSplineAtSplinePoint 0x9d27b64)
	float GetDistanceAlongSplineAtSplinePoint(int& PointIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetDistanceAlongSplineAtSplineInputKey (Underlying native function: GetDistanceAlongSplineAtSplineInputKey 0x9d27ad0)
	float GetDistanceAlongSplineAtSplineInputKey(float& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetDirectionAtTime (Underlying native function: GetDirectionAtTime 0x9d279b8)
	struct FVector GetDirectionAtTime(float& Time, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseConstantVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetDirectionAtSplinePoint (Underlying native function: GetDirectionAtSplinePoint 0x9d278e0)
	struct FVector GetDirectionAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetDirectionAtSplineInputKey (Underlying native function: GetDirectionAtSplineInputKey 0x9d27804)
	struct FVector GetDirectionAtSplineInputKey(float& InKey, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetDirectionAtDistanceAlongSpline (Underlying native function: GetDirectionAtDistanceAlongSpline 0x9d27728)
	struct FVector GetDirectionAtDistanceAlongSpline(float& Distance, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetDefaultUpVector (Underlying native function: GetDefaultUpVector 0x9d27518)
	struct FVector GetDefaultUpVector(struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.GetArriveTangentAtSplinePoint (Underlying native function: GetArriveTangentAtSplinePoint 0x9d2729c)
	struct FVector GetArriveTangentAtSplinePoint(int& PointIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindUpVectorClosestToWorldLocation (Underlying native function: FindUpVectorClosestToWorldLocation 0x9d2719c)
	struct FVector FindUpVectorClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindTransformClosestToWorldLocation (Underlying native function: FindTransformClosestToWorldLocation 0x9d27020)
	struct FTransform FindTransformClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUseScale); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindTangentClosestToWorldLocation (Underlying native function: FindTangentClosestToWorldLocation 0x9d26f30)
	struct FVector FindTangentClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindScaleClosestToWorldLocation (Underlying native function: FindScaleClosestToWorldLocation 0x9d26e78)
	struct FVector FindScaleClosestToWorldLocation(struct FVector& WorldLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindRotationClosestToWorldLocation (Underlying native function: FindRotationClosestToWorldLocation 0x9d26d60)
	struct FRotator FindRotationClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindRollClosestToWorldLocation (Underlying native function: FindRollClosestToWorldLocation 0x9d26c84)
	float FindRollClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindRightVectorClosestToWorldLocation (Underlying native function: FindRightVectorClosestToWorldLocation 0x9d26b84)
	struct FVector FindRightVectorClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindLocationClosestToWorldLocation (Underlying native function: FindLocationClosestToWorldLocation 0x9d26a94)
	struct FVector FindLocationClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindInputKeyClosestToWorldLocation (Underlying native function: FindInputKeyClosestToWorldLocation 0x9d269fc)
	float FindInputKeyClosestToWorldLocation(struct FVector& WorldLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.FindDirectionClosestToWorldLocation (Underlying native function: FindDirectionClosestToWorldLocation 0x9d268fc)
	struct FVector FindDirectionClosestToWorldLocation(struct FVector& WorldLocation, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.DivideSplineIntoPolylineRecursiveWithDistances (Underlying native function: DivideSplineIntoPolylineRecursiveWithDistances 0x9d266c4)
	bool DivideSplineIntoPolylineRecursiveWithDistances(float& StartDistanceAlongSpline, float& EndDistanceAlongSpline, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, float& MaxSquareDistanceFromSpline, struct TArray<struct FVector>& OutPoints, struct TArray<double>& OutDistancesAlongSpline); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.DivideSplineIntoPolylineRecursive (Underlying native function: DivideSplineIntoPolylineRecursive 0x9d26518)
	bool DivideSplineIntoPolylineRecursive(float& StartDistanceAlongSpline, float& EndDistanceAlongSpline, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, float& MaxSquareDistanceFromSpline, struct TArray<struct FVector>& OutPoints); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.ConvertSplineToPolyLine (Underlying native function: ConvertSplineToPolyLine 0x9d263d4)
	bool ConvertSplineToPolyLine(struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, float& MaxSquareDistanceFromSpline, struct TArray<struct FVector>& OutPoints); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.ConvertSplineSegmentToPolyLine (Underlying native function: ConvertSplineSegmentToPolyLine 0x9d2626c)
	bool ConvertSplineSegmentToPolyLine(int& SplinePointStartIndex, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, float& MaxSquareDistanceFromSpline, struct TArray<struct FVector>& OutPoints); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineComponent.ClearSplinePoints (Underlying native function: ClearSplinePoints 0x9d25f98)
	void ClearSplinePoints(bool& bUpdateSpline); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.AddSplineWorldPoint (Underlying native function: AddSplineWorldPoint 0x9d25f08)
	void AddSplineWorldPoint(struct FVector& Position); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.AddSplinePointAtIndex (Underlying native function: AddSplinePointAtIndex 0x9d25db0)
	void AddSplinePointAtIndex(struct FVector& Position, int& Index, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.AddSplinePoint (Underlying native function: AddSplinePoint 0x9d25ca0)
	void AddSplinePoint(struct FVector& Position, struct TEnumAsByte<ESplineCoordinateSpace>& CoordinateSpace, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.AddSplineLocalPoint (Underlying native function: AddSplineLocalPoint 0x9d25c14)
	void AddSplineLocalPoint(struct FVector& Position); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.AddPoints (Underlying native function: AddPoints 0x9d25a64)
	void AddPoints(struct TArray<struct FSplinePoint>& Points, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SplineComponent.AddPoint (Underlying native function: AddPoint 0x9d25948)
	void AddPoint(struct FSplinePoint& Point, bool& bUpdateSpline); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

