// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C
// Size: 0x218
class UGCN_Athena_OutsideSafeZoneDamage_C : public UFortGameplayCueNotify_Burst
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x210 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ZapFX (Has no native function)
	void ZapFX(int& ZapCount, class APlayerPawn_Athena_C*& PlayerPawnAthena, float& CallFuncConvIntToFloatReturnValue, bool& CallFuncIsActiveReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.OnBurst (Has no native function)
	void OnBurst(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance, bool& CallFuncIsDedicatedServerReturnValue, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncInWarmupbInWarmup, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, float& CallFuncPlaySound2DVolumeMultiplierImplicitCast); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage (Has no native function)
	void ExecuteUbergraphGCNAthenaOutsideSafeZoneDamage(int& EntryPoint); // (Final | 0x00008000)
};

