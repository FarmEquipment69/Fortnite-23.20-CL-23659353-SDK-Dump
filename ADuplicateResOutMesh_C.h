// BlueprintGeneratedClass /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C
// Size: 0x414
class ADuplicateResOutMesh_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x290 (0x8)
	float CharacterSpawnInTimelineFirstPassComplete2AB89084476E64255664E9B2D45E14C1; // 0x298 (0x4)
	float CharacterSpawnInTimelineLightIntensity2AB89084476E64255664E9B2D45E14C1; // 0x29c (0x4)
	float CharacterSpawnInTimelinezHieght2AB89084476E64255664E9B2D45E14C1; // 0x2a0 (0x4)
	struct TEnumAsByte<ETimelineDirection> CharacterSpawnInTimelineDirection2AB89084476E64255664E9B2D45E14C1; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	class UTimelineComponent* CharacterSpawnInTimeline; // 0x2a8 (0x8)
	class USkeletalMeshComponent* SkeletalMeshDuplicate; // 0x2b0 (0x8)
	bool GunTrue; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	double BoundsRadius; // 0x2c0 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> MIDArray; // 0x2c8 (0x10)
	struct FVector Worldlocationforthedissolvelocation; // 0x2d8 (0x18)
	class UMaterialInstanceDynamic* CurrentMID; // 0x2f0 (0x8)
	double HeadSpace; // 0x2f8 (0x8)
	double LegSpace; // 0x300 (0x8)
	class UPointLightComponent* SpawnLight; // 0x308 (0x8)
	double lightintensity; // 0x310 (0x8)
	int NumberofBaseskeletalmeshmaterials; // 0x318 (0x4)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	double FirstPassComplete; // 0x320 (0x8)
	struct TArray<class USkeletalMeshComponent*> ExternalSkeletalMeshComponent; // 0x328 (0x10)
	unsigned char unreflected_338[0x8]; // 0x338 (0x8) 
	struct FTransform BoxLocalTransform; // 0x340 (0x60)
	double TimelinePlayLength; // 0x3a0 (0x8)
	bool TeleportOut; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x7]; // 0x3a9 (0x7) 
	class AActor* ExternalActor; // 0x3b0 (0x8)
	struct TArray<class USkeletalMeshComponent*> InternalSkeletalMeshComponents; // 0x3b8 (0x10)
	int CurrentMeshMidIndex; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	class USkeletalMeshComponent* ExternalBaseMeshComponent; // 0x3d0 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> ExternalMidArray; // 0x3d8 (0x10)
	class USkeletalMeshComponent* ExternalRootMeshComponent; // 0x3e8 (0x8)
	struct TArray<class UMaterialInterface*> ListOfMaterialsExemptFromReparenting; // 0x3f0 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> OriginalMIDs; // 0x400 (0x10)
	int IncrementEnd; // 0x410 (0x4)

	/* Functions */

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.RestoreInProgressRes (Has no native function)
	void RestoreInProgressRes(struct TArray<class UMaterialInstanceDynamic*>& CallFuncExternalMeshMaskedSetupCorrectedMidArray); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Store Original Material for Teleport In (Has no native function)
	void StoreOriginalMaterialforTeleportIn(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.External Mesh Masked Setup (Has no native function)
	void ExternalMeshMaskedSetup(struct TArray<class USkeletalMeshComponent*>& ExternalMEshComponentArray, struct TArray<class UMaterialInstanceDynamic*>& CorrectedMidArray, int& IncrementMaskedSetup, struct TArray<class UMaterialInstanceDynamic*>& MIDArrayMaskedSetup, int& CallFuncArrayLengthReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, class USkeletalMeshComponent*& CallFuncArrayGetItem, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, int& CallFuncArrayLengthReturnValue2, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, class UMaterialInterface*& CallFuncArrayGetItem1, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UMaterialInstance*& K2NodeDynamicCastAsMaterialInstance, bool& K2NodeDynamicCastbSuccess, bool& CallFuncArrayContainsReturnValue, bool& CallFuncArrayContainsReturnValue1, bool& CallFuncBooleanORReturnValue, int& CallFuncArrayAddReturnValue, class UMaterialInstance*& TempobjectVariable, class UMaterialInstance*& TempobjectVariable1, bool& TempboolVariable, int& CallFuncAddIntIntReturnValue1, class UMaterialInstance*& K2NodeSelectDefault, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, int& CallFuncAddIntIntReturnValue2, int& CallFuncArrayAddReturnValue1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem2, class UMaterialInstanceDynamic*& CallFuncArrayGetItem3, int& TempintLoopCounterVariable1, bool& CallFuncLessIntIntReturnValue1, int& CallFuncAddIntIntReturnValue3); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ProcessSpawnInTimeline (Has no native function)
	void ProcessSpawnInTimeline(double& ZHeight, double& LightIntensity, double& DissolveGradientPercentage, double& DissolveGradientDistance, struct FLinearColor& DissolveGradientBaseLocation, struct FLinearColor& DissolveGradientDirectionalColor, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncLerpReturnValue, int& TempintArrayIndexVariable, double& CallFuncMakeLiteralDoubleReturnValue, double& CallFuncLerpReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct FName& CallFuncMakeLiteralNameReturnValue, struct FName& CallFuncMakeLiteralNameReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, int& TempintLoopCounterVariable, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncNormalReturnValue, int& CallFuncAddIntIntReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncVLerpReturnValue, struct FVector& CallFuncVLerpReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue1, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue1, double& CallFuncVSizeReturnValue, int& CallFuncArrayLengthReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, float& CallFuncVLerpAlphaImplicitCast, float& CallFuncVLerpAlphaImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetIntensityNewIntensityImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array (Has no native function)
	void Makeinternalmidsandappendexternalandintermalmidstomidarray(class USkeletalMeshComponent*& CurrentExternalSkeletalMeshComponent, class UMaterialInstance*& GunOrCharacterMaterialInstance, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintVariable, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, class USkeletalMeshComponent*& CallFuncArrayGetItem, class USkeletalMeshComponent*& CallFuncArrayGetItem1, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UMaterialInstance*& TempobjectVariable, int& CallFuncArrayAddReturnValue, class UMaterialInstance*& TempobjectVariable1, class UMaterialInterface*& CallFuncGetMaterialReturnValue, class USkeletalMeshComponent*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue, int& CallFuncGetNumMaterialsReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncSubtractIntIntReturnValue, bool& TempboolVariable, class UMaterialInstance*& K2NodeSelectDefault, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes (Has no native function)
	void Makeandslaveinternalmeshes(struct FTransform& Transform, int& TempintArrayIndexVariable, int& TempintVariable, bool& CallFuncEqualEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, class USkeletalMeshComponent*& CallFuncAddComponentReturnValue, class USkeletalMeshComponent*& CallFuncArrayGetItem, class USkeletalMeshComponent*& CallFuncArrayGetItem1, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, int& CallFuncArrayLengthReturnValue, bool& TempboolVariable, int& CallFuncArrayAddReturnValue, class USkeletalMeshComponent*& CallFuncArrayGetItem2, class USkeletalMeshComponent*& K2NodeSelectDefault, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, class USkeletalMeshComponent*& CallFuncArrayGetItem3, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light (Has no native function)
	void SpawnLight(bool& CallFuncIsMobilePlatformReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, class UPointLightComponent*& CallFuncAddComponentReturnValue, float& CallFuncSetIntensityNewIntensityImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds (Has no native function)
	void FindBounds(bool& TempboolVariable, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FVector& CallFuncBreakTransformLocation1, struct FRotator& CallFuncBreakTransformRotation1, struct FVector& CallFuncBreakTransformScale1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncBreakRotIntoAxesX, struct FVector& CallFuncBreakRotIntoAxesY, struct FVector& CallFuncBreakRotIntoAxesZ, struct FTransform& CallFuncMakeTransformReturnValue, struct FRotator& CallFuncMakeRotationFromAxesReturnValue, struct FTransform& CallFuncMakeTransformReturnValue1, struct FTransform& K2NodeSelectDefault, struct FVector& CallFuncBreakTransformLocation2, struct FRotator& CallFuncBreakTransformRotation2, struct FVector& CallFuncBreakTransformScale2, struct FVector& CallFuncGetActorBoundsOrigin, struct FVector& CallFuncGetActorBoundsBoxExtent, double& CallFuncVSizeReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct FTransform& CallFuncMakeTransformReturnValue2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray (Has no native function)
	void initializeExternalSkeletalMeshArray(class APlayerPawn_Athena_Generic_Parent_C*& K2NodeDynamicCastAsPlayerPawnAthenaGenericParent, bool& K2NodeDynamicCastbSuccess, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess1, struct TArray<class USkeletalMeshComponent*>& K2NodeMakeArrayArray, class APlayerPawn_Generic_Parent_C*& K2NodeDynamicCastAsPlayerPawnGenericParent, bool& K2NodeDynamicCastbSuccess2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc (Has no native function)
	void CharacterSpawnInTimelineFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc (Has no native function)
	void CharacterSpawnInTimelineUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters (Has no native function)
	void UpdateExternalParameters(struct TArray<class UMaterialInstanceDynamic*>& MIDArray, struct TArray<class USkeletalMeshComponent*>& ExternalMEshComponentArray); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh (Has no native function)
	void ExecuteUbergraphDuplicateResOutMesh(int& EntryPoint, int& TempintArrayIndexVariable, bool& CallFuncIsValidReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, float& K2NodeEventDeltaSeconds, int& CallFuncArrayLengthReturnValue, struct TArray<class UMaterialInstanceDynamic*>& K2NodeCustomEventMIDArray, struct TArray<class USkeletalMeshComponent*>& K2NodeCustomEventExternalMEshComponentArray, int& TempintLoopCounterVariable2, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue2, int& TempintArrayIndexVariable2, class USkeletalMeshComponent*& CallFuncArrayGetItem, bool& K2NodeSwitchEnumCmpSuccess, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, class USkeletalMeshComponent*& CallFuncArrayGetItem1, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, struct TArray<class UMaterialInstanceDynamic*>& CallFuncExternalMeshMaskedSetupCorrectedMidArray, class USkeletalMeshComponent*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue1, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, bool& CallFuncLessIntIntReturnValue1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue2, int& CallFuncArrayLengthReturnValue3, int& CallFuncAddIntIntReturnValue3, int& CallFuncAddIntIntReturnValue4, class UMaterialInstanceDynamic*& CallFuncArrayGetItem3, bool& CallFuncIsValidReturnValue1, float& CallFuncSetLifeSpanInLifespanImplicitCast, float& CallFuncSetPlayRateNewRateImplicitCast, double& CallFuncProcessSpawnInTimelineZHeightImplicitCast, double& CallFuncProcessSpawnInTimelineLightIntensityImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

