// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
// Size: 0xb78
class AGCL_BoostJumpPack_Hovering_C : public AGameplayCueNotify_Jetpack_Hovering
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
	class UParticleSystemComponent* GroundInteract; // 0xae8 (0x8)
	struct TWeakObjectPtr<class USkeletalMeshComponent> MiloCheck; // 0xaf0 (0x28)
	struct TWeakObjectPtr<class UObject> MiloBackpack; // 0xb18 (0x28)
	struct FVector MiloLightScale; // 0xb40 (0x18)
	struct FName AttachSocketName; // 0xb58 (0x4)
	unsigned char unreflected_b5c[0x4]; // 0xb5c (0x4) 
	class UFXSystemComponent* VFX; // 0xb60 (0x8)
	class UParticleSystem* PGroundInteraction; // 0xb68 (0x8)
	class UFXSystemAsset* NSHover; // 0xb70 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.SetJetpackAudioEnabled (Has no native function)
	void SetJetpackAudioEnabled(bool& Enabled, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue2, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsLocallyControlledReturnValue, double& CallFuncRandomFloatInRangeReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue3, double& CallFuncRandomFloatInRangeReturnValue1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, double& CallFuncRandomFloatInRangeReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue3, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast1, float& CallFuncSpawnSoundAttachedStartTimeImplicitCast2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnActive (Has no native function)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ResetFX (Has no native function)
	void ResetFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.PlayLowFuelWarning (Has no native function)
	void PlayLowFuelWarning(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.TryToPlayGroundEffects (Has no native function)
	void TryToPlayGroundEffects(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering (Has no native function)
	void ExecuteUbergraphGCLBoostJumpPackHovering(int& EntryPoint, struct TArray<class AActor*>& TempobjectVariable, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& TempboolHasBeenInitdVariable, bool& CallFuncIsValidReturnValue3, class AActor*& K2NodeEventMyTarget, struct TEnumAsByte<EGameplayCueEvent>& K2NodeEventEventType, struct FGameplayCueParameters& K2NodeEventParameters, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncIsValidReturnValue4, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FHitResult& CallFuncLineTraceSingleForObjectsOutHit, bool& CallFuncLineTraceSingleForObjectsReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncVSizeReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, struct FHitResult& CallFuncK2SetWorldLocationAndRotationSweepHitResult, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsPlayingReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, bool& TempboolIsClosedVariable, bool& CallFuncIsValidReturnValue7, bool& CallFuncIsValidReturnValue8, float& CallFuncSetFloatParameterParamImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

