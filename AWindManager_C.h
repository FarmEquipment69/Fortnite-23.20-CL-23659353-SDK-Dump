// BlueprintGeneratedClass /Game/VisualThreatManager/WindManager.WindManager_C
// Size: 0x644
class AWindManager_C : public AFortWindManager
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x518 (0x8)
	class UStaticMeshComponent* EmptyStaticMesh; // 0x520 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x528 (0x8)
	double SmallerRenderTargetOrthoWidth; // 0x530 (0x8)
	struct TArray<class AActor*> ExternalTestActor; // 0x538 (0x10)
	struct TArray<class AFortStaticMeshActor*> WorldTerrainMeshes; // 0x548 (0x10)
	struct FVector CameraHeightOffset; // 0x558 (0x18)
	double ParticleZOffset; // 0x570 (0x8)
	bool IsWaterInteractionEnabled; // 0x578 (0x1)
	unsigned char unreflected_579[0x7]; // 0x579 (0x7) 
	struct TArray<struct FStaticMeshMaterialArrayCombo> WorldStaticMeshArray; // 0x580 (0x10)
	struct FArrayOfWaterMeshWaterBlueprintPairs ArrayOfWaterAssets; // 0x590 (0x10)
	struct TArray<class UStaticMesh*> PrototypicalStaticMeshes; // 0x5a0 (0x10)
	int CurrentWaterMeshIndex; // 0x5b0 (0x4)
	unsigned char unreflected_5b4[0x4]; // 0x5b4 (0x4) 
	struct TArray<struct FFlowMapMaterials> WaterVectorMatToDefaultMaterialPairing; // 0x5b8 (0x10)
	bool MaterialPairingFound; // 0x5c8 (0x1)
	unsigned char unreflected_5c9[0x3]; // 0x5c9 (0x3) 
	struct FLinearColor WorldBoundsMinMax; // 0x5cc (0x10)
	unsigned char unreflected_5dc[0x4]; // 0x5dc (0x4) 
	class UMaterialInterface* BlackSceneCaptureMaterial; // 0x5e0 (0x8)
	struct FBox Maxlevelboundsusedtoisolatethelevelfromthevista; // 0x5e8 (0x38)
	struct TArray<class UStaticMeshComponent*> StormCylinderMeshes; // 0x620 (0x10)
	bool StormCylMeshMatch; // 0x630 (0x1)
	unsigned char unreflected_631[0x3]; // 0x631 (0x3) 
	int WindCylMeshArrayMatchIndex; // 0x634 (0x4)
	double DeltaWindFalloffinWorldUnits; // 0x638 (0x8)
	struct FFortWindImpulseHandle NewVar1; // 0x640 (0x4)

	/* Functions */

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool (Has no native function)
	void FindMatchingWindMeshIndexAndWriteBool(struct FVector& Windlocation, bool& StormCylMeshMatch, int& WindCylMeshArrayMatchIndex, struct FVector& CallFuncMultiplyVectorVectorReturnValue, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, class UStaticMeshComponent*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, bool& CallFuncBooleanANDReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue1, bool& CallFuncEqualEqualVectorVectorReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SetWindMatVariables (Has no native function)
	void SetWindMatVariables(class UMaterialInstanceDynamic*& Mid, bool& SetAnimatedCylinderCenter, struct FVector& AnimatedCylinderCenter, bool& SetAnimatingWindMagnitude, double& AnimatingWindMagnitude, bool& SetStaticWindMagnitude, double& StaticWindMagnitude, bool& SetCylinderCenter, struct FVector& CylinderCenter, bool& SetWindVector, struct FVector& WindVector, bool& SetWindCrossVector, struct FVector& WindCrossVector, bool& SetOverallOuterRadius, double& OverallOuterRadius, bool& SetOverallInnerRadius, double& OverallInnerRadius, bool& SetWindStill0orAnimating1, double& WindStill0orAnimating1, bool& SetCircularShader, double& CircularShader, bool& NewParam, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, struct FName& CallFuncMakeLiteralNameReturnValue, struct FName& CallFuncMakeLiteralNameReturnValue1, struct FName& CallFuncMakeLiteralNameReturnValue2, struct FName& CallFuncMakeLiteralNameReturnValue3, struct FName& CallFuncMakeLiteralNameReturnValue4, struct FName& CallFuncMakeLiteralNameReturnValue5, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue1, struct FName& CallFuncMakeLiteralNameReturnValue6, struct FName& CallFuncMakeLiteralNameReturnValue7, struct FName& CallFuncMakeLiteralNameReturnValue8, struct FName& CallFuncMakeLiteralNameReturnValue9, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue2, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue3, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncSetScalarParameterValueValueImplicitCast4, float& CallFuncSetScalarParameterValueValueImplicitCast5); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateWindDeltaCyl (Has no native function)
	void UpdateWindDeltaCyl(double& StaticCylinderOuterRadius, double& Duration, class UMaterialInstanceDynamic*& Mid, bool& IsWindCircular, double& TemprealVariable, bool& TempboolVariable, double& TemprealVariable1, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue, double& K2NodeSelectDefault, double& K2NodeSelectDefault1, double& K2NodeSelectDefault2, double& K2NodeSelectDefault3, float& CallFuncAddMIDAnimationFloatDurationImplicitCast, float& CallFuncAddMIDAnimationFloatDurationImplicitCast1, float& CallFuncAddMIDAnimationFloatEndValueImplicitCast, float& CallFuncAddMIDAnimationFloatEndValueImplicitCast1, float& CallFuncAddMIDAnimationFloatStartValueImplicitCast, float& CallFuncAddMIDAnimationFloatStartValueImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.RemoveWindCylinder (Has no native function)
	void RemoveWindCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder, class UStaticMeshComponent*& CurrentStormCylinder, bool& TempboolTrueifbreakwashitVariable, struct FVector& CallFuncBreakWindImpulseCylinderAdvancedWindLocation, float& CallFuncBreakWindImpulseCylinderAdvancedWindInnerRadius, float& CallFuncBreakWindImpulseCylinderAdvancedWindOuterRadius, struct FVector& CallFuncBreakWindImpulseCylinderAdvancedWindWorldDirection, float& CallFuncBreakWindImpulseCylinderAdvancedWindMagnitude, struct FBox& CallFuncBreakWindImpulseCylinderAdvancedWindWorldBounds, bool& CallFuncBreakWindImpulseCylinderAdvancedbIsWindChanging, bool& CallFuncBreakWindImpulseCylinderAdvancedbIsWindChangePending, struct FVector& CallFuncMultiplyVectorVectorReturnValue, bool& CallFuncNotPreBoolReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UStaticMeshComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncArrayRemoveItemReturnValue, bool& CallFuncBooleanANDReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue1, bool& CallFuncEqualEqualVectorVectorReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateStormWindCylinder (Has no native function)
	void UpdateStormWindCylinder(struct FFortWindImpulseCylinder& WindImpulse, struct FFortWindImpulseCylinderDelta& WindDelta, struct FTransform& CallFuncMakeTransformReturnValue, struct FVector& CallFuncBreakWindImpulseCylinderDeltaWindDeltaCenter, bool& CallFuncBreakWindImpulseCylinderDeltabWindImpulseInitialized, bool& CallFuncBreakWindImpulseCylinderDeltabWindRipplesOutward, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaSectionWidth, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaInnerSectionRadius, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaOuterSectionRadius, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaMaximumRadius, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaDesiredOverallBlendTime, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaSectionBlendTime, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaSectionCurrentBlendTime, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaPreviousMagnitude, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaSectionCurrentMagnitude, float& CallFuncBreakWindImpulseCylinderDeltaWindDeltaDesiredMagnitude, struct FBox& CallFuncBreakWindImpulseCylinderDeltaWindDeltaOuterWorldBounds, struct FBox& CallFuncBreakWindImpulseCylinderDeltaWindDeltaInnerWorldBounds, struct FBox& CallFuncBreakWindImpulseCylinderDeltaWindImpulseBounds, struct FFortWindImpulseHandle& CallFuncBreakWindImpulseCylinderDeltaWindImpulseHandleToModify, class UStaticMeshComponent*& CallFuncAddComponentReturnValue, struct FVector& CallFuncBreakWindImpulseCylinderAdvancedWindLocation, float& CallFuncBreakWindImpulseCylinderAdvancedWindInnerRadius, float& CallFuncBreakWindImpulseCylinderAdvancedWindOuterRadius, struct FVector& CallFuncBreakWindImpulseCylinderAdvancedWindWorldDirection, float& CallFuncBreakWindImpulseCylinderAdvancedWindMagnitude, struct FBox& CallFuncBreakWindImpulseCylinderAdvancedWindWorldBounds, bool& CallFuncBreakWindImpulseCylinderAdvancedbIsWindChanging, bool& CallFuncBreakWindImpulseCylinderAdvancedbIsWindChangePending, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, struct FVector& CallFuncCrossVectorVectorReturnValue, bool& CallFuncEqualEqualVectorVectorReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue, float& CallFuncConvBoolToFloatReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FVector& CallFuncConvFloatToVectorReturnValue, struct FTransform& CallFuncMakeTransformReturnValue1, bool& CallFuncFindMatchingWindMeshIndexAndWriteBoolStormCylMeshMatch, int& CallFuncFindMatchingWindMeshIndexAndWriteBoolWindCylMeshArrayMatchIndex, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, bool& CallFuncMakeLiteralBoolReturnValue, bool& CallFuncSetWindMatVariablesNewParam, class UStaticMeshComponent*& CallFuncArrayGetItem, int& CallFuncArrayAddReturnValue, class UMaterialInterface*& CallFuncGetMaterialReturnValue, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess, bool& CallFuncSetWindMatVariablesNewParam1, double& CallFuncUpdateWindDeltaCylDurationImplicitCast, double& CallFuncUpdateWindDeltaCylDurationImplicitCast1, double& CallFuncSetWindMatVariablesAnimatingWindMagnitudeImplicitCast, double& CallFuncSetWindMatVariablesAnimatingWindMagnitudeImplicitCast1, double& CallFuncSetWindMatVariablesOverallInnerRadiusImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, double& CallFuncSetWindMatVariablesOverallOuterRadiusImplicitCast, double& CallFuncSetWindMatVariablesCircularShaderImplicitCast, float& CallFuncConvFloatToVectorInFloatImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Calculate Camera Position (Has no native function)
	struct FVector CalculateCameraPosition(double& Scale, class USceneCaptureComponent2D*& SceneCapture); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct FTransform& TempstructVariable, class UParticleSystemComponent*& CallFuncAddComponentReturnValue); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeath (Has no native function)
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete (Has no native function)
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderCreation (Has no native function)
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SpawnTestWind (Has no native function)
	void SpawnTestWind(double& Radius, double& ImpulseMagnitude); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Play Water Splash Particle System At Location (Has no native function)
	void PlayWaterSplashParticleSystemAtLocation(struct FTransform& ParticleTransform); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.AddWindParticleSystemComponent (Has no native function)
	void AddWindParticleSystemComponent(class UParticleSystemComponent*& ParticleSystemComponent); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Register player for render to texture purposes (Has no native function)
	void Registerplayerforrendertotexturepurposes(class UPrimitiveComponent*& EffectWaterInteractionFX, class UPrimitiveComponent*& GameplayWindINteractionEffects); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Wind Component (Has no native function)
	void AddWindComponent(class UPrimitiveComponent*& InComponent); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Update Test (Has no native function)
	void UpdateTest(double& NewMagnitude); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Render To Texture Particle (Has no native function)
	void AddRenderToTextureParticle(class UParticleSystem*& EmitterTemplate, struct FTransform& InTransform); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ExecuteUbergraph_WindManager (Has no native function)
	void ExecuteUbergraphWindManager(int& EntryPoint, struct FVector& CallFuncMakeVectorReturnValue, struct FTransform& K2NodeCustomEventParticleTransform, class UParticleSystemComponent*& K2NodeEventParticleSystemComponent, class UPrimitiveComponent*& K2NodeCustomEventEffectWaterInteractionFX, class UPrimitiveComponent*& K2NodeCustomEventGameplayWindINteractionEffects, double& CallFuncMakeLiteralDoubleReturnValue, class UPrimitiveComponent*& K2NodeCustomEventInComponent, struct FVector& CallFuncMakeVectorReturnValue1, double& K2NodeCustomEventNewMagnitude, class UParticleSystem*& K2NodeCustomEventEmitterTemplate, struct FTransform& K2NodeCustomEventInTransform, bool& CallFuncSetWindImpulseCylinderMagnitudeReturnValue, struct FName& CallFuncMakeLiteralNameReturnValue, struct FName& CallFuncMakeLiteralNameReturnValue1, struct FName& CallFuncMakeLiteralNameReturnValue2, double& K2NodeCustomEventRadius, double& K2NodeCustomEventImpulseMagnitude, struct FFortWindImpulseCylinder& K2NodeEventWindImpulseCylinder, struct FFortWindImpulseCylinderDelta& K2NodeEventWindImpulseCylinderDelta, double& CallFuncAddDoubleDoubleReturnValue, struct FFortWindImpulseCylinder& CallFuncMakeWindImpulseCylinderReturnValue, struct FFortWindImpulseHandle& CallFuncAddWindImpulseCylinderReturnValue, struct FFortWindImpulseCylinder& K2NodeEventWindImpulseCylinder1, struct FVector& CallFuncBreakWindImpulseCylinderAdvancedWindLocation, float& CallFuncBreakWindImpulseCylinderAdvancedWindInnerRadius, float& CallFuncBreakWindImpulseCylinderAdvancedWindOuterRadius, struct FVector& CallFuncBreakWindImpulseCylinderAdvancedWindWorldDirection, float& CallFuncBreakWindImpulseCylinderAdvancedWindMagnitude, struct FBox& CallFuncBreakWindImpulseCylinderAdvancedWindWorldBounds, bool& CallFuncBreakWindImpulseCylinderAdvancedbIsWindChanging, bool& CallFuncBreakWindImpulseCylinderAdvancedbIsWindChangePending, struct FFortWindImpulseCylinder& K2NodeEventWindImpulseCylinder2, bool& CallFuncFindMatchingWindMeshIndexAndWriteBoolStormCylMeshMatch, int& CallFuncFindMatchingWindMeshIndexAndWriteBoolWindCylMeshArrayMatchIndex, class UStaticMeshComponent*& CallFuncArrayGetItem, class UMaterialInterface*& CallFuncGetMaterialReturnValue, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess, float& CallFuncK2GetScalarParameterValueReturnValue, float& CallFuncSetScalarParameterValueParameterValueImplicitCast, float& CallFuncSetWindImpulseCylinderMagnitudeNewMagnitudeImplicitCast, float& CallFuncMakeWindImpulseCylinderImpulseInnerRadiusImplicitCast, float& CallFuncMakeWindImpulseCylinderImpulseMagnitudeImplicitCast, float& CallFuncMakeWindImpulseCylinderImpulseOuterRadiusImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

