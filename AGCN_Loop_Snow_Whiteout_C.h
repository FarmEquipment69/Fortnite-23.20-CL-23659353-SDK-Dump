// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C
// Size: 0x998
class AGCN_Loop_Snow_Whiteout_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UPostProcessComponent* PostProcess; // 0x968 (0x8)
	float FadeinOutPostBDCA5FC943E3CD00D42B59A9A0D1C530; // 0x970 (0x4)
	float FadeinOutFadeBDCA5FC943E3CD00D42B59A9A0D1C530; // 0x974 (0x4)
	struct TEnumAsByte<ETimelineDirection> FadeinOutDirectionBDCA5FC943E3CD00D42B59A9A0D1C530; // 0x978 (0x1)
	unsigned char unreflected_979[0x7]; // 0x979 (0x7) 
	class UTimelineComponent* FadeInOut; // 0x980 (0x8)
	class USoundBase* SoundOnFadeIn; // 0x988 (0x8)
	class USoundBase* SoundOnFadeOut; // 0x990 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.FadeinOut__FinishedFunc (Has no native function)
	void FadeinOutFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.FadeinOut__UpdateFunc (Has no native function)
	void FadeinOutUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.ExecuteUbergraph_GCN_Loop_Snow_Whiteout (Has no native function)
	void ExecuteUbergraphGCNLoopSnowWhiteout(int& EntryPoint, bool& TempboolVariable, double& TemprealVariable, double& TemprealVariable1, bool& K2NodeSwitchEnumCmpSuccess, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, class AFortPlayerController*& CallFuncArrayGetItem, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, bool& CallFuncEqualEqualDoubleDoubleReturnValue, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue1, class AFortPlayerController*& CallFuncArrayGetItem1, double& K2NodeSelectDefault, int& CallFuncConvBoolToIntReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetIntParameterselfCastInput, double& CallFuncEqualEqualDoubleDoubleAImplicitCast, float& CallFuncSetPlayRateNewRateImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

