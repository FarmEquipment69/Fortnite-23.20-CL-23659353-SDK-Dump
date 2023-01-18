// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C
// Size: 0x9d0
class AGCN_Loop_GhostMode_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	float FadeMaterialsTLLerpD7B0BAAD47F48403BE23B98F38D8CA3E; // 0x968 (0x4)
	struct TEnumAsByte<ETimelineDirection> FadeMaterialsTLDirectionD7B0BAAD47F48403BE23B98F38D8CA3E; // 0x96c (0x1)
	unsigned char unreflected_96d[0x3]; // 0x96d (0x3) 
	class UTimelineComponent* FadeMaterialsTL; // 0x970 (0x8)
	struct FLinearColor HitGlowColor; // 0x978 (0x10)
	struct FLinearColor HotGlowOuterColor; // 0x988 (0x10)
	double HitGlowFresnelBrightness; // 0x998 (0x8)
	double HitGlowFresnelExponent; // 0x9a0 (0x8)
	double GlowPriority; // 0x9a8 (0x8)
	class USoundBase* StopSoundCue; // 0x9b0 (0x8)
	class USoundBase* StartSoundCue; // 0x9b8 (0x8)
	struct TScriptInterface<class IPawnHighlight_Interface_C> TargetPawn; // 0x9c0 (0x10)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.Highlight Lerp (Has no native function)
	void HighlightLerp(double& Alpha, struct FPawnHighlight& Highlight, double& CallFuncLerpReturnValue, double& CallFuncLerpReturnValue1, struct FLinearColor& CallFuncLinearColorLerpReturnValue, struct FLinearColor& CallFuncLinearColorLerpReturnValue1, struct FPawnHighlight& K2NodeMakeStructPawnHighlight, float& CallFuncLinearColorLerpAlphaImplicitCast, float& CallFuncLinearColorLerpAlphaImplicitCast1, float& K2NodeMakeStructPriority28E2E1B5344846E187B9C11B863A7F0698ImplicitCast, float& K2NodeMakeStructFresnelExponent24B427CF0C441AA37ED49833BF7579DE6DImplicitCast, float& K2NodeMakeStructFresnelBrightness2352B0F96447FF640F47DF2895B0602E92ImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc (Has no native function)
	void FadeMaterialsTLFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc (Has no native function)
	void FadeMaterialsTLUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn (Has no native function)
	void FadeMaterialsIn(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut (Has no native function)
	void FadeMaterialsOut(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode (Has no native function)
	void ExecuteUbergraphGCNLoopGhostMode(int& EntryPoint, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, bool& CallFuncIsValidReturnValue, struct TScriptInterface<class IPawnHighlight_Interface_C>& K2NodeDynamicCastAsPawnHighlightInterface, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue1, struct FPawnHighlight& CallFuncHighlightLerpHighlight, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, bool& CallFuncEqualEqualByteByteReturnValue, struct FPawnHighlight& CallFuncHighlightLerpHighlight1, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsValidReturnValue4, double& CallFuncHighlightLerpAlphaImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

