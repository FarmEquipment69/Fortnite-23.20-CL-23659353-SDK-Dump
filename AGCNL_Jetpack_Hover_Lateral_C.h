// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C
// Size: 0xb88
class AGCNL_Jetpack_Hover_Lateral_C : public AGameplayCueNotify_Jetpack_Hovering
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xaa0 (0x8)
	bool bJetpackAudioEnabled; // 0xaa8 (0x1)
	unsigned char unreflected_aa9[0x7]; // 0xaa9 (0x7) 
	class USoundBase* SoundOnStart; // 0xab0 (0x8)
	class USoundBase* SoundOnStop; // 0xab8 (0x8)
	class USoundBase* SoundLoopOnIdle; // 0xac0 (0x8)
	class USoundBase* SoundLoopOnAccel; // 0xac8 (0x8)
	class USoundBase* SoundLoopOnOutOfFuel; // 0xad0 (0x8)
	class USoundBase* SoundOnFuelWarning; // 0xad8 (0x8)
	class USoundBase* SoundOnOutOfFuel; // 0xae0 (0x8)
	bool bIsFirstJump; // 0xae8 (0x1)
	unsigned char unreflected_ae9[0x7]; // 0xae9 (0x7) 
	class UParticleSystemComponent* GroundInteract; // 0xaf0 (0x8)
	struct TWeakObjectPtr<class USkeletalMeshComponent> MiloCheck; // 0xaf8 (0x28)
	struct TWeakObjectPtr<class UObject> MiloBackpack; // 0xb20 (0x28)
	struct FVector MiloLightScale; // 0xb48 (0x18)
	class UParticleSystem* HoverEffect; // 0xb60 (0x8)
	struct FName AttachSocketName; // 0xb68 (0x4)
	unsigned char unreflected_b6c[0x4]; // 0xb6c (0x4) 
	class UParticleSystem* PGroundInteract; // 0xb70 (0x8)
	class UFXSystemComponent* HoverFXSystem; // 0xb78 (0x8)
	class UFXSystemAsset* NSHover; // 0xb80 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.SetJetpackAudioEnabled (Has no native function)
	void SetJetpackAudioEnabled(bool& Enabled, bool& CallFuncIsValidReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue2, bool& CallFuncIsLocallyControlledReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue3, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, double& CallFuncRandomFloatInRangeReturnValue, bool& CallFuncIsValidReturnValue1, double& CallFuncRandomFloatInRangeReturnValue1, double& CallFuncRandomFloatInRangeReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue3, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast1, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.OnActive (Has no native function)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ResetFX (Has no native function)
	void ResetFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.TryToPlayGroundEffects (Has no native function)
	void TryToPlayGroundEffects(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral (Has no native function)
	void ExecuteUbergraphGCNLJetpackHoverLateral(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, bool& TempboolHasBeenInitdVariable, class AActor*& K2NodeEventMyTarget, struct TEnumAsByte<EGameplayCueEvent>& K2NodeEventEventType, struct FGameplayCueParameters& K2NodeEventParameters, bool& CallFuncIsValidReturnValue4, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncIsValidReturnValue5, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsPlayingReturnValue, bool& CallFuncIsValidReturnValue7, bool& TempboolIsClosedVariable, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, struct TArray<class AActor*>& TempobjectVariable, struct FHitResult& CallFuncLineTraceSingleForObjectsOutHit, bool& CallFuncLineTraceSingleForObjectsReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FRotator& CallFuncConvVectorToRotatorReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FHitResult& CallFuncK2SetWorldLocationAndRotationSweepHitResult, double& CallFuncVSizeReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, float& CallFuncSetFloatParameterParamImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

