// BlueprintGeneratedClass /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C
// Size: 0xdd1
class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C : public AFortAthenaSplineZipline
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xc98 (0x8)
	class UStaticMesh* SplineStaticMesh; // 0xca0 (0x8)
	double TangentSmoothStrength; // 0xca8 (0x8)
	bool AutoSmoothTangents; // 0xcb0 (0x1)
	struct TEnumAsByte<ESplineMeshAxis> ForwardMeshAxis; // 0xcb1 (0x1)
	unsigned char unreflected_cb2[0x6]; // 0xcb2 (0x6) 
	struct FVector MotorOffset; // 0xcb8 (0x18)
	class AActor* PoleA; // 0xcd0 (0x8)
	class AActor* PoleB; // 0xcd8 (0x8)
	struct FVector PoleASocketLocation; // 0xce0 (0x18)
	struct FVector PoleBSocketLocation; // 0xcf8 (0x18)
	int LowerPointID; // 0xd10 (0x4)
	int HigherPointID; // 0xd14 (0x4)
	struct FVector HigherEndLocation; // 0xd18 (0x18)
	struct FVector LowerEndLocation; // 0xd30 (0x18)
	double AutoLinearFactorLow; // 0xd48 (0x8)
	double AutoLinearFactorHigh; // 0xd50 (0x8)
	double AutoSplineTangentLengthCoef; // 0xd58 (0x8)
	double AutoSplineTangentHorizCoef; // 0xd60 (0x8)
	double AutoSplineTangentVertCoef; // 0xd68 (0x8)
	bool AutoSetSplineEnds; // 0xd70 (0x1)
	bool AutoSetSplineMids; // 0xd71 (0x1)
	unsigned char unreflected_d72[0x6]; // 0xd72 (0x6) 
	struct TArray<class UMaterialInstanceDynamic*> SplineMaterials; // 0xd78 (0x10)
	struct FGameplayTagContainer BlockInteractTags; // 0xd88 (0x20)
	double TilingDivisor; // 0xda8 (0x8)
	struct TArray<class USplineMeshComponent*> SplineMeshComponents; // 0xdb0 (0x10)
	struct TArray<class AFortPlayerPawn*> PlayerPawnArray; // 0xdc0 (0x10)
	bool Debug; // 0xdd0 (0x1)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.RemovePlayerFromZipliningArray (Has no native function)
	void RemovePlayerFromZipliningArray(class AFortPlayerPawn*& Item, bool& CallFuncArrayRemoveItemReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.AddPlayerToZipliningArray (Has no native function)
	void AddPlayerToZipliningArray(class AFortPlayerPawn*& NewItem, int& CallFuncArrayAddUniqueReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.SetCableTilingBySplineLength (Has no native function)
	void SetCableTilingBySplineLength(class UMeshComponent*& Target, float& CallFuncGetSplineLengthReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int& CallFuncFTruncReturnValue, float& CallFuncConvIntToFloatReturnValue, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.GetAutoHorizAndVertVectors (Has no native function)
	void GetAutoHorizAndVertVectors(struct FVector& highVector, struct FVector& LowVector, struct FVector& VertVec, struct FVector& HorizVec, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMakeVectorReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.Calc Auto Location At Alpha (Has no native function)
	void CalcAutoLocationAtAlpha(double& InAlpha, bool& DrawDebug, struct FVector& PointLocation, double& SplinePointID, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FVector& CallFuncGetAutoHorizAndVertVectorsVertVec, struct FVector& CallFuncGetAutoHorizAndVertVectorsHorizVec, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncVLerpReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncBooleanORReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue1, struct FVector& CallFuncVLerpReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue2, struct FVector& CallFuncVLerpReturnValue2, struct FVector& CallFuncVLerpReturnValue3, double& CallFuncLerpReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, double& CallFuncFClampReturnValue, struct FVector& CallFuncVLerpReturnValue4, float& CallFuncVLerpAlphaImplicitCast, float& CallFuncVLerpAlphaImplicitCast1, float& CallFuncVLerpAlphaImplicitCast2, float& CallFuncVLerpAlphaImplicitCast3, float& CallFuncVLerpAlphaImplicitCast4); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.SetSplinePositionAndTangent (Has no native function)
	void SetSplinePositionAndTangent(bool& SetPosition, bool& SetTangent, int& ID, double& OneDivNumPoints, int& SplinePointIDToSet, double& AlphaForLocation, bool& IsFirstPoint, int& SplinePointID, double& PrevAlpha, double& Alpha, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncBooleanORReturnValue, double& CallFuncLerpReturnValue, int& CallFuncArrayLastIndexReturnValue, double& CallFuncFClampReturnValue, class USplineMeshComponent*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncCalcAutoLocationAtAlphaPointLocation, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncGetAutoHorizAndVertVectorsVertVec, struct FVector& CallFuncGetAutoHorizAndVertVectorsHorizVec, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncVLerpReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue3, struct FVector& CallFuncVLerpReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue, int& CallFuncSubtractIntIntReturnValue, float& CallFuncConvIntToFloatReturnValue, float& CallFuncConvIntToFloatReturnValue1, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue, bool& CallFuncGreaterIntIntReturnValue1, int& CallFuncSubtractIntIntReturnValue1, bool& CallFuncBooleanANDReturnValue, float& CallFuncConvIntToFloatReturnValue2, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue2, float& CallFuncVLerpAlphaImplicitCast, float& CallFuncVLerpAlphaImplicitCast1, double& CallFuncDivideDoubleDoubleAImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast1, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast1, double& CallFuncDivideDoubleDoubleBImplicitCast2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.CalculatePositionOfPoles (Has no native function)
	void CalculatePositionOfPoles(int& CallFuncGetNumberOfSplinePointsReturnValue, int& CallFuncSubtractIntIntReturnValue, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation1, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.AutoSmoothTanget (Has no native function)
	void AutoSmoothTanget(struct FVector& Tangent, struct FVector& PointA, struct FVector& PointB, struct FVector& SmoothedTangent, bool& TempboolVariable, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncNormalReturnValue, double& CallFuncVSizeReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& K2NodeSelectDefault); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.AddSplineMeshSegment (Has no native function)
	void AddSplineMeshSegment(class USplineMeshComponent*& SplineMeshSegment, struct FTransform& TempstructVariable, class USplineMeshComponent*& CallFuncAddComponentReturnValue, bool& CallFuncSetStaticMeshReturnValue, int& CallFuncArrayAddReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& NewLocalVar0, int& TempintVariable, int& TempintVariable1, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue1, int& CallFuncAddIntIntReturnValue, double& CallFuncSelectFloatReturnValue, int& CallFuncAddIntIntReturnValue1, int& CallFuncAddIntIntReturnValue2, int& CallFuncGetNumberOfSplinePointsReturnValue, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue1, int& CallFuncSubtractIntIntReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue2, bool& CallFuncBooleanORReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue2, int& CallFuncSubtractIntIntReturnValue2, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, bool& CallFuncLessDoubleDoubleReturnValue, int& TempintVariable2, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, int& CallFuncAddIntIntReturnValue3, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue1, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent, struct FVector& CallFuncGetLocationAndTangentAtSplinePointLocation1, struct FVector& CallFuncGetLocationAndTangentAtSplinePointTangent1, class USplineMeshComponent*& CallFuncAddSplineMeshSegmentSplineMeshSegment, struct FVector& CallFuncAutoSmoothTangetSmoothedTangent, int& CallFuncGetNumMaterialsReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, int& CallFuncSubtractIntIntReturnValue3, bool& CallFuncLessEqualIntIntReturnValue1, int& CallFuncArrayAddReturnValue, struct FVector& CallFuncAutoSmoothTangetSmoothedTangent1, int& CallFuncGetNumberOfSplinePointsReturnValue3, int& CallFuncSubtractIntIntReturnValue4, bool& CallFuncLessEqualIntIntReturnValue2, bool& CallFuncEqualEqualIntIntReturnValue3, double& CallFuncSelectFloatReturnValue1, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.WaitThenSetDynamicSpline (Has no native function)
	void WaitThenSetDynamicSpline(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.OnZipliningStarted (Has no native function)
	void OnZipliningStarted(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.OnZipliningStopped (Has no native function)
	void OnZipliningStopped(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent, float& ZiplineUsageDuration); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline (Has no native function)
	void ExecuteUbergraphPROTOTYPEBPAthenaDynamicZipLineSpline(int& EntryPoint, class AFortPlayerPawn*& K2NodeEventInteractingPawn, class UPrimitiveComponent*& K2NodeEventInteractComponent, float& K2NodeEventZiplineUsageDuration, double& CallFuncGetGameTimeInSecondsReturnValue, struct FVector& CallFuncGetLocationAtSplinePointReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue, int& CallFuncSubtractIntIntReturnValue, int& CallFuncArrayLengthReturnValue, struct FVector& CallFuncGetLocationAtSplinePointReturnValue1, bool& CallFuncGreaterIntIntReturnValue, struct FTransform& CallFuncGetTransformReturnValue, struct FTransform& CallFuncInvertTransformReturnValue, int& CallFuncGetNumberOfSplinePointsReturnValue1, int& CallFuncSubtractIntIntReturnValue1, int& CallFuncArrayLastIndexReturnValue, class USplineMeshComponent*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncTransformLocationReturnValue, int& TempintArrayIndexVariable, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, class UMaterialInstanceDynamic*& CallFuncArrayGetItem1, int& TempintLoopCounterVariable, class AFortPlayerPawn*& K2NodeEventInteractingPawn1, class UPrimitiveComponent*& K2NodeEventInteractComponent1, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

