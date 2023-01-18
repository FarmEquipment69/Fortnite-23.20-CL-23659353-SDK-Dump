// BlueprintGeneratedClass /Irwin/GameplayCues/GCN_Irwin_EnterWater.GCN_Irwin_EnterWater_C
// Size: 0x220
class UGCN_Irwin_EnterWater_C : public UFortGameplayCueNotify_Burst
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x210 (0x8)
	double BoundsNormalized; // 0x218 (0x8)

	/* Functions */

	// Function /Irwin/GameplayCues/GCN_Irwin_EnterWater.GCN_Irwin_EnterWater_C.OnBurstGeneric (Has no native function)
	void OnBurstGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Irwin/GameplayCues/GCN_Irwin_EnterWater.GCN_Irwin_EnterWater_C.ExecuteUbergraph_GCN_Irwin_EnterWater (Has no native function)
	void ExecuteUbergraphGCNIrwinEnterWater(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess, class UFXSystemComponent*& CallFuncArrayGetItem, struct FVector& CallFuncGetComponentBoundsOrigin, struct FVector& CallFuncGetComponentBoundsBoxExtent, float& CallFuncGetComponentBoundsSphereRadius, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, double& CallFuncDivideDoubleDoubleReturnValue, float& CallFuncSetFloatParameterParamImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

