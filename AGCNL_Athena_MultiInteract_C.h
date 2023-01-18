// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C
// Size: 0x9e8
class AGCNL_Athena_MultiInteract_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UAudioComponent* Audio; // 0x968 (0x8)
	double CurrentPitch; // 0x970 (0x8)
	double TargetPitch; // 0x978 (0x8)
	struct TMap<int, double> PlayerPitchMap; // 0x980 (0x50)
	double PreviousPitch; // 0x9d0 (0x8)
	struct FTimerHandle* TargetProgressHandle; // 0x9d8 (0x8)
	class APlayerPawn_Athena_C* EffectCauserPawn; // 0x9e0 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.CheckTargetProgress (Has no native function)
	void CheckTargetProgress(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.OnActorCountChanged (Has no native function)
	void OnActorCountChanged(int& InteractingActorCount, float& MultiInteractMultiplier, float& InteractingDuration); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.ExecuteUbergraph_GCNL_Athena_MultiInteract (Has no native function)
	void ExecuteUbergraphGCNLAthenaMultiInteract(int& EntryPoint, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue4, double& CallFuncRandomFloatInRangeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncEqualEqualDoubleDoubleReturnValue, int& K2NodeCustomEventInteractingActorCount, float& K2NodeCustomEventMultiInteractMultiplier, float& K2NodeCustomEventInteractingDuration, float& CallFuncConvIntToFloatReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, double& CallFuncMapRangeClampedReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncIsValidReturnValue5, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncIsValidReturnValue6, double& CallFuncGetWorldDeltaSecondsReturnValue, double& CallFuncFInterpToReturnValue, float& CallFuncFadeInStartTimeImplicitCast, double& CallFuncMapRangeClampedValueImplicitCast, float& CallFuncSetPitchMultiplierNewPitchMultiplierImplicitCast, double& K2NodeVariableSetCurrentPitchImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

