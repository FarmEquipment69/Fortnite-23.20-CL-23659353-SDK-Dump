// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Vent_Enter.GCNL_Vent_Enter_C
// Size: 0x991
class AGCNL_Vent_Enter_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UPostProcessComponent* PostProcess; // 0x968 (0x8)
	float FadePPVolLERP6D28D8B64202D10F474B48B80194DA6D; // 0x970 (0x4)
	struct TEnumAsByte<ETimelineDirection> FadePPVolDirection6D28D8B64202D10F474B48B80194DA6D; // 0x974 (0x1)
	unsigned char unreflected_975[0x3]; // 0x975 (0x3) 
	class UTimelineComponent* FadePPVol; // 0x978 (0x8)
	class UClass* CameraShakeClass; // 0x980 (0x8)
	class ULegacyCameraShake* CameraShake; // 0x988 (0x8)
	bool UsePP; // 0x990 (0x1)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__FinishedFunc (Has no native function)
	void FadePPVolFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__UpdateFunc (Has no native function)
	void FadePPVolUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Vent_Enter.GCNL_Vent_Enter_C.ExecuteUbergraph_GCNL_Vent_Enter (Has no native function)
	void ExecuteUbergraphGCNLVentEnter(int& EntryPoint, bool& CallFuncIsValidReturnValue, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncEqualEqualDoubleDoubleReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, bool& CallFuncIsLocallyControlledReturnValue, class AController*& CallFuncGetControllerReturnValue, class APlayerController*& K2NodeDynamicCastAsPlayerController, bool& K2NodeDynamicCastbSuccess1, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue1, class ULegacyCameraShake*& CallFuncConvLegacyCameraShakeReturnValue, double& CallFuncEqualEqualDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

