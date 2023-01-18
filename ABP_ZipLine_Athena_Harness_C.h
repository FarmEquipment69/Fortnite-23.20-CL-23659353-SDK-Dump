// BlueprintGeneratedClass /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
// Size: 0x390
class ABP_ZipLine_Athena_Harness_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UParticleSystemComponent* PZiplineAttachedToPlayer; // 0x290 (0x8)
	class UStaticMeshComponent* SMZiplineMagnet; // 0x298 (0x8)
	class UArrowComponent* Arrow; // 0x2a0 (0x8)
	class UParticleSystemComponent* PZiplinePulleySpeedLines; // 0x2a8 (0x8)
	class UStaticMeshComponent* SMZiplineMotor; // 0x2b0 (0x8)
	class USceneComponent* Scene; // 0x2b8 (0x8)
	class UParticleSystem* SpawnFX; // 0x2c0 (0x8)
	class UParticleSystem* DestroyFX; // 0x2c8 (0x8)
	class UParticleSystem* CollideDestroyVFX; // 0x2d0 (0x8)
	class USoundBase* SpawnSound; // 0x2d8 (0x8)
	class USoundBase* UnSpawnSound; // 0x2e0 (0x8)
	class AFortPlayerPawn* AttachedPlayer; // 0x2e8 (0x8)
	bool HasHitAnotherPlayer; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x7]; // 0x2f1 (0x7) 
	double ZiplineChimeVisualUpdate; // 0x2f8 (0x8)
	struct FTimerHandle* ChimeTimer; // 0x300 (0x8)
	struct FVector ZiplineDirection; // 0x308 (0x18)
	class ABP_Athena_Environmental_ZipLine_Spline_C* EnvZiplineSpline; // 0x320 (0x8)
	double SplineRotationUpdateSeconds; // 0x328 (0x8)
	struct FTimerHandle* MotorUpdateTimer; // 0x330 (0x8)
	class AFortAthenaZipline* AttachedZipline; // 0x338 (0x8)
	bool debugOutput; // 0x340 (0x1)
	bool IsReversingMomentum; // 0x341 (0x1)
	bool bIsTravelingUphill; // 0x342 (0x1)
	bool bIsTravelingDownhill; // 0x343 (0x1)
	struct FGameplayTag GCNTagTravel; // 0x344 (0x4)
	class USoundBase* TravelSound; // 0x348 (0x8)
	struct FGameplayTag GCNTagHighSpeed; // 0x350 (0x4)
	struct FGameplayTag GCNTagZiplineBraking; // 0x354 (0x4)
	bool bLoopingDownhillGCN; // 0x358 (0x1)
	unsigned char unreflected_359[0x3]; // 0x359 (0x3) 
	struct FActiveGameplayEffectHandle* DownhillTravelGE; // 0x35c (0x8)
	bool UseMeshAttachment; // 0x364 (0x1)
	unsigned char unreflected_365[0x3]; // 0x365 (0x3) 
	struct FVector CurrentDesiredZiplineOffset; // 0x368 (0x18)
	class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* DynamicZiplineSpline; // 0x380 (0x8)
	class USplineComponent* NewVar0; // 0x388 (0x8)

	/* Functions */

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OnRep_AttachedPlayer (Has no native function)
	void OnRepAttachedPlayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Update Audio and VFXParams (Has no native function)
	void UpdateAudioandVFXParams(double& Alpha, double& SpeedFactor, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncAbsReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, double& CallFuncAbsReturnValue1, bool& CallFuncLessDoubleDoubleReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, float& CallFuncGetZiplineSpeedFactorReturnValue, float& CallFuncGetZiplineSpeedFactorTargetReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue2, bool& CallFuncLessDoubleDoubleReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue, float& CallFuncMakeGameplayCueParametersNormalizedMagnitudeImplicitCast, float& CallFuncMakeGameplayCueParametersNormalizedMagnitudeImplicitCast1, double& K2NodeVariableSetSpeedFactorImplicitCast, double& CallFuncGreaterDoubleDoubleAImplicitCast, double& CallFuncLessDoubleDoubleAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio (Has no native function)
	void StartTravelAudio(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio (Has no native function)
	void StopTravelAudio(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied (Has no native function)
	void HandleOnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual (Has no native function)
	void ChimeVisual(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OrientMotorForZipline (Has no native function)
	void OrientMotorForZipline(class AFortAthenaZiplineBase*& Zipline, struct FVector& DesiredZiplineOffset); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.RotateToZiplineDirection (Has no native function)
	void RotateToZiplineDirection(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToSpline (Has no native function)
	void UpdateMotorToSpline(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateParamsForAudioAndVFX (Has no native function)
	void UpdateParamsForAudioAndVFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Cleanup On DownhillGCN (Has no native function)
	void CleanupOnDownhillGCN(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateZiplineOffsetLocation (Has no native function)
	void UpdateZiplineOffsetLocation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToDynSpline (Has no native function)
	void UpdateMotorToDynSpline(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness (Has no native function)
	void ExecuteUbergraphBPZipLineAthenaHarness(int& EntryPoint, bool& TempboolVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncHasAuthorityReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FRotator& CallFuncK2GetComponentRotationReturnValue, bool& CallFuncIsDedicatedServerReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncMakeRotatorReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, bool& TempboolVariable1, class UParticleSystem*& K2NodeSelectDefault, struct FVector& CallFuncK2GetActorLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& K2NodeMakeArrayArray, class AFortAthenaZiplineBase*& K2NodeCustomEventZipline, struct FVector& K2NodeCustomEventDesiredZiplineOffset, unsigned char& CallFuncGetActorTeamReturnValue, class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C*& K2NodeDynamicCastAsPROTOTYPEBPAthenaDynamicZipLineSpline, bool& K2NodeDynamicCastbSuccess, class ABP_Athena_Environmental_ZipLine_Spline_C*& K2NodeDynamicCastAsBPAthenaEnvironmentalZipLineSpline, bool& K2NodeDynamicCastbSuccess1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FRotator& CallFuncMakeRotFromZReturnValue, float& CallFuncBreakRotatorRoll1, float& CallFuncBreakRotatorPitch1, float& CallFuncBreakRotatorYaw1, double& CallFuncSubtractDoubleDoubleReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue1, struct FVector& CallFuncFindDirectionClosestToWorldLocationReturnValue, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncIsDedicatedServerReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& K2NodeSelectDefault1, struct FVector& CallFuncSelectVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue1, struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult, struct TArray<class AFortPlayerController*>& TempobjectVariable, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue3, struct FVector& CallFuncFindDirectionClosestToWorldLocationReturnValue1, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast1, double& CallFuncSubtractDoubleDoubleAImplicitCast, float& CallFuncMakeRotatorRollImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast2); // (Final | 0x00008000 | HasDefaults)
};

