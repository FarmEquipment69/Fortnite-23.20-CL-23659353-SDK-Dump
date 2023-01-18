// BlueprintGeneratedClass /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C
// Size: 0x6c0
class AGCN_Irwin_RezOut_Simple_C : public AFortGameplayCueNotify_BurstLatent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	float TFXResOutChracterMeshLightIntensity650F8F4E4C8105BE33D199A04F1958AE; // 0x530 (0x4)
	float TFXResOutChracterMeshZHeightParam650F8F4E4C8105BE33D199A04F1958AE; // 0x534 (0x4)
	float TFXResOutChracterMeshTransitionParam650F8F4E4C8105BE33D199A04F1958AE; // 0x538 (0x4)
	struct TEnumAsByte<ETimelineDirection> TFXResOutChracterMeshDirection650F8F4E4C8105BE33D199A04F1958AE; // 0x53c (0x1)
	unsigned char unreflected_53d[0x3]; // 0x53d (0x3) 
	class UTimelineComponent* TFXResOutChracterMesh; // 0x540 (0x8)
	struct TArray<class UFXSystemComponent*> ParticleComponents; // 0x548 (0x10)
	bool DEBUGREMOVESPAWNEDPOINTLIGHT; // 0x558 (0x1)
	unsigned char unreflected_559[0x7]; // 0x559 (0x7) 
	double DissolveTimelinePlayrate; // 0x560 (0x8)
	class UMaterialInterface* MatChracterDissolve; // 0x568 (0x8)
	bool DEBUGFXSYSTEMCOMPONENTS; // 0x570 (0x1)
	unsigned char unreflected_571[0x3]; // 0x571 (0x3) 
	struct FName SocketMeshTop; // 0x574 (0x4)
	struct FName SocketMeshBottom; // 0x578 (0x4)
	bool DEBUGCHILDCOMPONENTS; // 0x57c (0x1)
	bool DEBUGREMOVESPAWNVFX; // 0x57d (0x1)
	unsigned char unreflected_57e[0x2]; // 0x57e (0x2) 
	struct FName DissolveVFXSpawnPointName; // 0x580 (0x4)
	unsigned char unreflected_584[0x4]; // 0x584 (0x4) 
	class UNiagaraSystem* DissolveVisualEffect; // 0x588 (0x8)
	class UNiagaraComponent* SpawnedDeathVFX; // 0x590 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> IrwinMaterials; // 0x598 (0x10)
	struct TArray<class UMaterialInterface*> Original; // 0x5a8 (0x10)
	class ANPC_Pawn_Parent_C* Irwin; // 0x5b8 (0x8)
	struct FHitResult WaterHitInformation; // 0x5c0 (0xe0)
	class UNiagaraSystem* WaterEliminationSplash; // 0x6a0 (0x8)
	bool WaterHit; // 0x6a8 (0x1)
	unsigned char unreflected_6a9[0x7]; // 0x6a9 (0x7) 
	double BoundsScalar; // 0x6b0 (0x8)
	bool WasChromed; // 0x6b8 (0x1)
	unsigned char unreflected_6b9[0x3]; // 0x6b9 (0x3) 
	int ClassTest; // 0x6bc (0x4)

	/* Functions */

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Spawn Water Elimination FX (Has no native function)
	void SpawnWaterEliminationFX(bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, class AFortWaterBodyActor*& K2NodeDynamicCastAsFortWaterBodyActor, bool& K2NodeDynamicCastbSuccess, struct FWaterSurfaceInfo& CallFuncGetWaterSurfaceInfoStructOutWaterSurfaceInfo, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue, float& CallFuncConvIntToFloatReturnValue, float& CallFuncSetFloatParameterParamImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Water Trace (Has no native function)
	void WaterTrace(struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetComponentBoundsOrigin, struct FVector& CallFuncGetComponentBoundsBoxExtent, float& CallFuncGetComponentBoundsSphereRadius, double& CallFuncDivideDoubleDoubleReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct TArray<class AActor*>& TempobjectVariable, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray, struct FHitResult& CallFuncLineTraceSingleForObjectsOutHit, bool& CallFuncLineTraceSingleForObjectsReturnValue, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Socket Math (Has no native function)
	void SocketMath(double& GradientDistance, struct FVector& BaseLocation, struct FVector& DirectionalVector, bool& CallFuncIsValidReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncNormalReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue1, double& CallFuncVSizeReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Set Irwin Materials (Has no native function)
	void SetIrwinMaterials(int& TempintVariable, bool& CallFuncIsValidReturnValue, int& CallFuncAddIntIntReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessEqualIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Spawn Dissolve VFX (Has no native function)
	void SpawnDissolveVFX(bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Clean-Up Teleportation Light (Has no native function)
	void CleanUpTeleportationLight(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Set Timeline Playrates (Has no native function)
	void SetTimelinePlayrates(float& CallFuncSetPlayRateNewRateImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Spawn Teleportation Light (Has no native function)
	void SpawnTeleportationLight(bool& CallFuncIsValidReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, bool& CallFuncIsMobilePlatformReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FTransform& CallFuncConvVectorToTransformReturnValue, class UPointLightComponent*& CallFuncAddComponentReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.TFX_ResOutChracterMesh__FinishedFunc (Has no native function)
	void TFXResOutChracterMeshFinishedFunc(); // (BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.TFX_ResOutChracterMesh__UpdateFunc (Has no native function)
	void TFXResOutChracterMeshUpdateFunc(); // (BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.OnBurstGeneric (Has no native function)
	void OnBurstGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Pre-Sequence Change (Has no native function)
	void PreSequenceChange(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Set Additional Niagara Parameters on Spawned FX (Has no native function)
	void SetAdditionalNiagaraParametersonSpawnedFX(class UNiagaraComponent*& SpawnedDeathFX); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.ExecuteUbergraph_GCN_Irwin_RezOut_Simple (Has no native function)
	void ExecuteUbergraphGCNIrwinRezOutSimple(int& EntryPoint, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class ANPC_Pawn_Parent_C*& K2NodeDynamicCastAsNPCPawnParent, bool& K2NodeDynamicCastbSuccess, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& TempintArrayIndexVariable, class UNiagaraComponent*& K2NodeCustomEventSpawnedDeathFX, double& CallFuncSocketMathGradientDistance, struct FVector& CallFuncSocketMathBaseLocation, struct FVector& CallFuncSocketMathDirectionalVector, bool& CallFuncIsValidReturnValue, int& TempintArrayIndexVariable1, bool& CallFuncIsValidReturnValue1, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, class USceneComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class UFXSystemComponent*& K2NodeDynamicCastAsFXSystemComponent, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren1, class USceneComponent*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1, class UMaterialInterface*& CallFuncGetMaterialReturnValue, class UMaterial*& CallFuncGetBaseMaterialReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, class ANPC_Pawn_Irwin_Simple_Smackie_C*& K2NodeDynamicCastAsNPCPawnIrwinSimpleSmackie, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue4, class ANPC_Pawn_Irwin_Prey_Nug_C*& K2NodeDynamicCastAsNPCPawnIrwinPreyNug, bool& K2NodeDynamicCastbSuccess3, class ANPC_Pawn_Irwin_Prey_Burt_C*& K2NodeDynamicCastAsNPCPawnIrwinPreyBurt, bool& K2NodeDynamicCastbSuccess4, class ANPC_Pawn_Irwin_Predator_Grandma_C*& K2NodeDynamicCastAsNPCPawnIrwinPredatorGrandma, bool& K2NodeDynamicCastbSuccess5, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

