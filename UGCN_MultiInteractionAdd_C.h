// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_MultiInteractionAdd.GCN_MultiInteractionAdd_C
// Size: 0x220
class UGCN_MultiInteractionAdd_C : public UFortGameplayCueNotify_Burst
{
	class USoundBase* DBNOPlayerJoinedSound; // 0x210 (0x8)
	class USoundBase* DefaultPlayerJoinedSound; // 0x218 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_MultiInteractionAdd.GCN_MultiInteractionAdd_C.OnBurstGeneric (Has no native function)
	void OnBurstGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class UAudioComponent*& CallFuncSpawnSoundAtLocationReturnValue, class UAudioComponent*& CallFuncSpawnSoundAtLocationReturnValue1); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/GameplayCueNotifies/GCN_MultiInteractionAdd.GCN_MultiInteractionAdd_C.OnBurst (Has no native function)
	void OnBurst(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance, struct FLinearColor& TempstructVariable, class UParticleSystemComponent*& CallFuncArrayGetItem, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, struct FLinearColor& TempstructVariable1, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& TempboolVariable, struct FLinearColor& K2NodeSelectDefault, struct FVector& CallFuncConvLinearColorToVectorReturnValue, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)
};
