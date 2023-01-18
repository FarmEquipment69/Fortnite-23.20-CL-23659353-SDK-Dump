// BlueprintGeneratedClass /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
// Size: 0xbe4
class AB_Prj_Athena_FragGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xbb8 (0x8)
	class UNiagaraComponent* NSObjectFloatingInWater; // 0xbc0 (0x8)
	class UBP_SurfaceTypeSoundComponent_C* BPSurfaceTypeSoundComponent; // 0xbc8 (0x8)
	float PreExploWarningPreExploE5859FFE443F57359EC2C0AB73DFA4CD; // 0xbd0 (0x4)
	struct TEnumAsByte<ETimelineDirection> PreExploWarningDirectionE5859FFE443F57359EC2C0AB73DFA4CD; // 0xbd4 (0x1)
	unsigned char unreflected_bd5[0x3]; // 0xbd5 (0x3) 
	class UTimelineComponent* PreExploWarning; // 0xbd8 (0x8)
	struct FGameplayTag FeedbackCue; // 0xbe0 (0x4)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__FinishedFunc (Has no native function)
	void PreExploWarningFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__UpdateFunc (Has no native function)
	void PreExploWarningUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded (Has no native function)
	void FuseEnded(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnExploded (Has no native function)
	void OnExploded(struct TArray<class AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnBounce (Has no native function)
	void OnBounce(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.Pre Explo Audio Tell (Has no native function)
	void PreExploAudioTell(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature (Has no native function)
	void BndEvtWaterInteractionComponentK2NodeComponentBoundEvent1WaterInteractionOnEnterWaterDelegateSignature(class AFortWaterBodyActor*& WaterBody, class UFortWaterInteractionComponent*& WaterInteractionComponent, bool& bIsFirstBody); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature (Has no native function)
	void BndEvtWaterInteractionComponentK2NodeComponentBoundEvent3WaterInteractionOnExitWaterDelegateSignature(class AFortWaterBodyActor*& WaterBody, class UFortWaterInteractionComponent*& WaterInteractionComponent, bool& bIsLastBody); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade (Has no native function)
	void ExecuteUbergraphBPrjAthenaFragGrenade(int& EntryPoint, class APlayerController*& CallFuncGetPlayerControllerReturnValue, struct FVector& CallFuncConvFloatToVectorReturnValue, class AController*& CallFuncGetInstigatorControllerReturnValue, bool& CallFuncOnSameTeamReturnValue, struct TArray<class AActor*>& K2NodeEventHitActors, struct TArray<struct FHitResult>& K2NodeEventHitResults, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FHitResult& K2NodeEventHit, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncDivideDoubleDoubleReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue2, int& CallFuncGetConsoleVariableIntValueReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, bool& CallFuncGetConsoleVariableBoolValueReturnValue, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, class AFortWaterBodyActor*& K2NodeComponentBoundEventWaterBody1, class UFortWaterInteractionComponent*& K2NodeComponentBoundEventWaterInteractionComponent1, bool& K2NodeComponentBoundEventbIsFirstBody, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class AFN_RadialForce_C*& CallFuncFinishSpawningActorReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FWaterSurfaceInfo& CallFuncGetWaterSurfaceInfoStructOutWaterSurfaceInfo, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput, class AFortWaterBodyActor*& K2NodeComponentBoundEventWaterBody, class UFortWaterInteractionComponent*& K2NodeComponentBoundEventWaterInteractionComponent, bool& K2NodeComponentBoundEventbIsLastBody, float& CallFuncConvFloatToVectorInFloatImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& CallFuncSetPlayRateNewRateImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

