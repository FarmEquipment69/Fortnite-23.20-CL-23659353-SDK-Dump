// BlueprintGeneratedClass /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C
// Size: 0xbb8
class AB_Prj_Athena_Grenade_Base_C : public AFortProjectileBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa20 (0x8)
	class UFortCollisionAudioComponent* FortCollisionAudio; // 0xa28 (0x8)
	class URotatingMovementComponent* RotatingMovement; // 0xa30 (0x8)
	class UParticleSystemComponent* FuseParticle; // 0xa38 (0x8)
	class UStaticMeshComponent* Mesh; // 0xa40 (0x8)
	class UAudioComponent* GrenadeFuseAudioComponent; // 0xa48 (0x8)
	class UParticleSystemComponent* EffectDistance; // 0xa50 (0x8)
	struct TWeakObjectPtr<class UParticleSystem> PExplosion; // 0xa58 (0x28)
	class USoundBase* CueExplosionSound; // 0xa80 (0x8)
	struct TWeakObjectPtr<class UParticleSystem> PExplosionWater; // 0xa88 (0x28)
	int NumberOfBouncesTillExplode; // 0xab0 (0x4)
	int CurrentNumberOfBounces; // 0xab4 (0x4)
	class USoundBase* CueGrenadeFuseSound; // 0xab8 (0x8)
	double BouncePawnAgainstPawnGravityScale; // 0xac0 (0x8)
	class UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0xac8 (0x8)
	class UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0xad0 (0x8)
	class USoundBase* CueBounce; // 0xad8 (0x8)
	class UClass* ExplosionCameraShake; // 0xae0 (0x8)
	double FuseTime; // 0xae8 (0x8)
	double ExplosionRadius; // 0xaf0 (0x8)
	struct FRotator ExplosionRotation; // 0xaf8 (0x18)
	class UAudioComponent* WaterFuseAudioComponent; // 0xb10 (0x8)
	class USoundBase* WaterDebrisExplosion; // 0xb18 (0x8)
	class USoundBase* SplashSound; // 0xb20 (0x8)
	class UTexture* SoundIndicatorIcon; // 0xb28 (0x8)
	struct FTimerHandle* FuseIndicatorTimer; // 0xb30 (0x8)
	struct TWeakObjectPtr<class UNiagaraSystem> NSExplosion; // 0xb38 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> NSExplosionWater; // 0xb60 (0x28)
	enum EFXType FXType; // 0xb88 (0x1)
	unsigned char unreflected_b89[0x7]; // 0xb89 (0x7) 
	class UFXSystemAsset* VFXExplosion; // 0xb90 (0x8)
	class UFXSystemAsset* VFXExplosionWater; // 0xb98 (0x8)
	struct FTimerHandle* FuseTimer; // 0xba0 (0x8)
	class UNiagaraSystem* NSHitWater; // 0xba8 (0x8)
	class USoundBase* WaterFuseSound; // 0xbb0 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.GetExplosion (Has no native function)
	void GetExplosion(bool& InWater, class UFXSystemAsset*& FXSystem, bool& TempboolVariable, class UFXSystemAsset*& K2NodeSelectDefault); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.FuseEnded (Has no native function)
	void FuseEnded(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& CallFuncIsDedicatedServerReturnValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnLoaded_6A6D02914DCE95902837C994D84D08EA (Has no native function)
	void OnLoaded6A6D02914DCE95902837C994D84D08EA(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnLoaded_6A6D02914DCE95902837C994C3BE7DC5 (Has no native function)
	void OnLoaded6A6D02914DCE95902837C994C3BE7DC5(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnStop (Has no native function)
	void OnStop(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Stop_Rotation (Has no native function)
	void StopRotation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnExploded (Has no native function)
	void OnExploded(struct TArray<class AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnBounce (Has no native function)
	void OnBounce(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ReceiveAnyDamage (Has no native function)
	void ReceiveAnyDamage(float& Damage, class UDamageType*& DamageType, class AController*& InstigatedBy, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnResumeSimulation (Has no native function)
	void OnResumeSimulation(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCapsuleComponentK2NodeComponentBoundEvent0ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Splash (Has no native function)
	void Splash(class AFortWaterBodyActor*& WaterBody, class UFortWaterInteractionComponent*& WaterInteractionComponent, bool& bIsFirstBody); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature (Has no native function)
	void BndEvtWaterInteractionComponentK2NodeComponentBoundEvent2WaterInteractionOnEnterWaterDelegateSignature(class AFortWaterBodyActor*& WaterBody, class UFortWaterInteractionComponent*& WaterInteractionComponent, bool& bIsFirstBody); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Held Water Impact (Has no native function)
	void HeldWaterImpact(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ShowFuseIndicator (Has no native function)
	void ShowFuseIndicator(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.AysncLoad (Has no native function)
	void AysncLoad(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ExecuteUbergraph_B_Prj_Athena_Grenade_Base (Has no native function)
	void ExecuteUbergraphBPrjAthenaGrenadeBase(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue, bool& TempboolHasBeenInitdVariable, bool& CallFuncIsNullItemIsNullItem, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsNullItemIsNullItem1, bool& CallFuncIsDedicatedServerReturnValue, struct FHitResult& K2NodeEventHit1, bool& CallFuncIsDedicatedServerReturnValue1, struct TArray<class AActor*>& K2NodeEventHitActors, struct TArray<struct FHitResult>& K2NodeEventHitResults, bool& CallFuncIsValidReturnValue2, struct FHitResult& K2NodeEventHit, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, int& CallFuncAddIntIntReturnValue, bool& CallFuncComponentHasTagReturnValue, class APawn*& K2NodeDynamicCastAsPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsNiagaraEffectEnabledSoftPtrReturnValue, bool& TempboolIsClosedVariable, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncAbsReturnValue, int& CallFuncAddIntIntReturnValue1, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, class APawn*& CallFuncGetInstigatorReturnValue, class APawn*& CallFuncGetInstigatorReturnValue1, bool& CallFuncNotEqualObjectObjectReturnValue, bool& CallFuncIsValidReturnValue3, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FVector& CallFuncK2GetActorLocationReturnValue3, struct FVector& CallFuncK2GetActorLocationReturnValue4, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, float& K2NodeEventDamage, class UDamageType*& K2NodeEventDamageType, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UObject*& TempobjectVariable, class UFXSystemAsset*& K2NodeDynamicCastAsFXSystemAsset, bool& K2NodeDynamicCastbSuccess1, class UObject*& TempobjectVariable1, class UFXSystemAsset*& K2NodeDynamicCastAsFXSystemAsset1, bool& K2NodeDynamicCastbSuccess2, struct FVector& CallFuncMultiplyVectorVectorReturnValue, bool& CallFuncOnCollisionOutResult, float& CallFuncOnCollisionOutMagnitude, double& CallFuncVSizeReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent, class AActor*& K2NodeComponentBoundEventOtherActor, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp, int& K2NodeComponentBoundEventOtherBodyIndex, bool& K2NodeComponentBoundEventbFromSweep, struct FHitResult& K2NodeComponentBoundEventSweepResult, class APawn*& CallFuncGetInstigatorReturnValue2, bool& CallFuncBreakHitResultbBlockingHit1, bool& CallFuncBreakHitResultbInitialOverlap1, float& CallFuncBreakHitResultTime1, float& CallFuncBreakHitResultDistance1, struct FVector& CallFuncBreakHitResultLocation1, struct FVector& CallFuncBreakHitResultImpactPoint1, struct FVector& CallFuncBreakHitResultNormal1, struct FVector& CallFuncBreakHitResultImpactNormal1, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat1, class AActor*& CallFuncBreakHitResultHitActor1, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent1, struct FName& CallFuncBreakHitResultHitBoneName1, struct FName& CallFuncBreakHitResultBoneName1, int& CallFuncBreakHitResultHitItem1, int& CallFuncBreakHitResultElementIndex1, int& CallFuncBreakHitResultFaceIndex1, struct FVector& CallFuncBreakHitResultTraceStart1, struct FVector& CallFuncBreakHitResultTraceEnd1, class APawn*& K2NodeDynamicCastAsPawn1, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncNotEqualObjectObjectReturnValue1, bool& CallFuncIsInWaterReturnValue, class UFXSystemAsset*& CallFuncGetExplosionFXSystem, class UFXSystemComponent*& CallFuncSpawnFXAtLocationReturnValue, class AFortWaterBodyActor*& K2NodeCustomEventWaterBody, class UFortWaterInteractionComponent*& K2NodeCustomEventWaterInteractionComponent, bool& K2NodeCustomEventbIsFirstBody, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class UObject*& K2NodeCustomEventLoaded1, bool& TempboolVariable, bool& CallFuncIsInWaterReturnValue1, struct TWeakObjectPtr<class UObject>& K2NodeSelectDefault, bool& CallFuncIsAssetNullReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue5, class AFortWaterBodyActor*& K2NodeComponentBoundEventWaterBody, class UFortWaterInteractionComponent*& K2NodeComponentBoundEventWaterInteractionComponent, bool& K2NodeComponentBoundEventbIsFirstBody, struct FVector& CallFuncK2GetActorLocationReturnValue6, class UObject*& K2NodeCustomEventLoaded, struct TArray<class AFortPlayerController*>& TempobjectVariable2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue7, bool& CallFuncIsDedicatedServerReturnValue2, struct FVector& CallFuncK2GetActorLocationReturnValue8, struct FWaterSurfaceInfo& CallFuncGetWaterSurfaceInfoStructOutWaterSurfaceInfo, bool& CallFuncIsNiagaraEffectEnabledSoftPtrReturnValue1, float& CallFuncConvIntToFloatReturnValue, struct FRotator& CallFuncMakeRotFromXReturnValue, struct TArray<class AFortPlayerController*>& TempobjectVariable3, class UFXSystemComponent*& CallFuncSpawnFXAtLocationReturnValue1, bool& TempboolVariable1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, struct TWeakObjectPtr<class UObject>& K2NodeSelectDefault1, bool& CallFuncIsAssetNullReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncIsValidReturnValue4, float& K2NodeVariableSetProjectileGravityScaleImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, float& K2NodeVariableSetProjectileGravityScaleImplicitCast1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

