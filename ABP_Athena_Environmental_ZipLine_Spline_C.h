// BlueprintGeneratedClass /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C
// Size: 0xdc0
class ABP_Athena_Environmental_ZipLine_Spline_C : public AFortAthenaSplineZipline
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xc98 (0x8)
	class USphereComponent* EndPointInteractSphere; // 0xca0 (0x8)
	class USphereComponent* StartPointInteractSphere; // 0xca8 (0x8)
	class UStaticMesh* SplineStaticMesh; // 0xcb0 (0x8)
	double TangentSmoothStrength; // 0xcb8 (0x8)
	bool AutoSmoothTangents; // 0xcc0 (0x1)
	struct TEnumAsByte<ESplineMeshAxis> ForwardMeshAxis; // 0xcc1 (0x1)
	unsigned char unreflected_cc2[0x6]; // 0xcc2 (0x6) 
	struct FVector MotorOffset; // 0xcc8 (0x18)
	class ABuildingActor* PoleA; // 0xce0 (0x8)
	class ABuildingActor* PoleB; // 0xce8 (0x8)
	struct FVector PoleASocketLocation; // 0xcf0 (0x18)
	struct FVector PoleBSocketLocation; // 0xd08 (0x18)
	int LowerPointID; // 0xd20 (0x4)
	int HigherPointID; // 0xd24 (0x4)
	struct FVector HigherEndLocation; // 0xd28 (0x18)
	struct FVector LowerEndLocation; // 0xd40 (0x18)
	double AutoLinearFactorLow; // 0xd58 (0x8)
	double AutoLinearFactorHigh; // 0xd60 (0x8)
	double AutoSplineTangentLengthCoef; // 0xd68 (0x8)
	double AutoSplineTangentHorizCoef; // 0xd70 (0x8)
	double AutoSplineTangentVertCoef; // 0xd78 (0x8)
	bool AutoSetSplineEnds; // 0xd80 (0x1)
	bool AutoSetSplineMids; // 0xd81 (0x1)
	unsigned char unreflected_d82[0x6]; // 0xd82 (0x6) 
	struct TArray<class UMaterialInstanceDynamic*> SplineMaterials; // 0xd88 (0x10)
	struct FGameplayTagContainer BlockInteractTags; // 0xd98 (0x20)
	double TilingDivisor; // 0xdb8 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetInteractionCollision (Has no native function)
	void SetInteractionCollision(struct FVector& CallFuncGetLocationAtSplinePointReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, int& CallFuncSubtractIntIntReturnValue, struct FVector& CallFuncGetLocationAtSplinePointReturnValue1, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetCableTilingBySplineLength (Has no native function)
	void SetCableTilingBySplineLength(class UMeshComponent*& Target, float& CallFuncGetSplineLengthReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int& CallFuncFTruncReturnValue, float& CallFuncConvIntToFloatReturnValue, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.GetAutoHorizAndVertVectors (Has no native function)
	void GetAutoHorizAndVertVectors(struct FVector& highVector, struct FVector& LowVector, struct FVector& VertVec, struct FVector& HorizVec, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMakeVectorReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.Calc Auto Location At Alpha (Has no native function)
	void CalcAutoLocationAtAlpha(double& InAlpha, bool& DrawDebug, struct FVector& PointLocation, double& SplinePointID, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FVector& CallFuncGetAutoHorizAndVertVectorsVertVec, struct FVector& CallFuncGetAutoHorizAndVertVectorsHorizVec, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncVLerpReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncBooleanORReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue1, struct FVector& CallFuncVLerpReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue2, struct FVector& CallFuncVLerpReturnValue2, struct FVector& CallFuncVLerpReturnValue3, double& CallFuncLerpReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, double& CallFuncFClampReturnValue, struct FVector& CallFuncVLerpReturnValue4, float& CallFuncVLerpAlphaImplicitCast, float& CallFuncVLerpAlphaImplicitCast1, float& CallFuncVLerpAlphaImplicitCast2, float& CallFuncVLerpAlphaImplicitCast3, float& CallFuncVLerpAlphaImplicitCast4); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetSplinePositionAndTangent (Has no native function)
	void SetSplinePositionAndTangent(bool& SetPosition, bool& SetTangent, int& ID, double& OneDivNumPoints, int& SplinePointIDToSet, double& AlphaForLocation, bool& IsFirstPoint, int& SplinePointID, double& PrevAlpha, double& Alpha, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FVector& CallFuncCalcAutoLocationAtAlphaPointLocation, double& CallFuncLerpReturnValue, double& CallFuncFClampReturnValue, struct FVector& CallFuncGetAutoHorizAndVertVectorsVertVec, struct FVector& CallFuncGetAutoHorizAndVertVectorsHorizVec, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncVLerpReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue3, struct FVector& CallFuncVLerpReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncBooleanORReturnValue, int& CallFuncSubtractIntIntReturnValue, float& CallFuncConvIntToFloatReturnValue, float& CallFuncConvIntToFloatReturnValue1, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue, bool& CallFuncGreaterIntIntReturnValue1, int& CallFuncSubtractIntIntReturnValue1, bool& CallFuncBooleanANDReturnValue, float& CallFuncConvIntToFloatReturnValue2, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue2, float& CallFuncVLerpAlphaImplicitCast, float& CallFuncVLerpAlphaImplicitCast1, double& CallFuncDivideDoubleDoubleAImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast1, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast1, double& CallFuncDivideDoubleDoubleBImplicitCast2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.CalculatePositionOfPoles (Has no native function)
	void CalculatePositionOfPoles(int& CallFuncGetNumberOfSplinePointsReturnValue, int& CallFuncSubtractIntIntReturnValue, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation1, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AutoSmoothTanget (Has no native function)
	void AutoSmoothTanget(struct FVector& Tangent, struct FVector& PointA, struct FVector& PointB, struct FVector& SmoothedTangent, bool& TempboolVariable, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncNormalReturnValue, double& CallFuncVSizeReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& K2NodeSelectDefault); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AddSplineMeshSegment (Has no native function)
	void AddSplineMeshSegment(class USplineMeshComponent*& SplineMeshSegment, struct FTransform& TempstructVariable, class USplineMeshComponent*& CallFuncAddComponentReturnValue, bool& CallFuncSetStaticMeshReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& NewLocalVar0, int& TempintVariable, bool& CallFuncEqualEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue, double& CallFuncSelectFloatReturnValue, int& CallFuncAddIntIntReturnValue1, int& CallFuncGetNumberOfSplinePointsReturnValue, int& CallFuncSubtractIntIntReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue1, int& CallFuncSubtractIntIntReturnValue1, int& CallFuncGetNumberOfSplinePointsReturnValue2, int& CallFuncSubtractIntIntReturnValue2, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, int& TempintVariable1, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncEqualEqualIntIntReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue2, bool& CallFuncBooleanORReturnValue, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue2, int& TempintVariable2, int& CallFuncAddIntIntReturnValue3, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent, struct FVector& CallFuncGetSocketLocationReturnValue1, bool& CallFuncIsValidReturnValue1, class USplineMeshComponent*& CallFuncAddSplineMeshSegmentSplineMeshSegment, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation1, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent1, struct FVector& CallFuncAutoSmoothTangetSmoothedTangent, struct FVector& CallFuncAutoSmoothTangetSmoothedTangent1, int& CallFuncGetNumMaterialsReturnValue, int& CallFuncSubtractIntIntReturnValue3, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncLessEqualIntIntReturnValue1, int& CallFuncArrayAddReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue3, int& CallFuncSubtractIntIntReturnValue4, bool& CallFuncLessEqualIntIntReturnValue2, bool& CallFuncEqualEqualIntIntReturnValue3, double& CallFuncSelectFloatReturnValue1, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerAttachedToZipline (Has no native function)
	void PlayerAttachedToZipline(class AFortPlayerPawn*& PlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerDetachedFromZipline (Has no native function)
	void PlayerDetachedFromZipline(class AFortPlayerPawn*& PlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.HandlePoleDied (Has no native function)
	void HandlePoleDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline (Has no native function)
	void ExecuteUbergraphBPAthenaEnvironmentalZipLineSpline(int& EntryPoint, int& TempintLoopCounterVariable, int& TempintArrayIndexVariable, int& CallFuncAddIntIntReturnValue, class AFortPlayerPawn*& K2NodeCustomEventPlayerPawn1, struct FVector& CallFuncGetLocationAtSplinePointReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncGreaterIntIntReturnValue, struct FVector& CallFuncGetLocationAtSplinePointReturnValue1, class AFortPlayerPawn*& K2NodeCustomEventPlayerPawn, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncGetValueAsBoolReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Final | 0x00008000)
};

