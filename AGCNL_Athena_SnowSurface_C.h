// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C
// Size: 0xa68
class AGCNL_Athena_SnowSurface_C : public AGCNL_Athena_Surface_Parent_C
{
	unsigned char unreflected_972[0x6]; // 0x972 (0x6) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x978 (0x8)
	class UNiagaraComponent* FootStepFX; // 0x980 (0x8)
	bool bNotValid; // 0x988 (0x1)
	bool bReplayMode; // 0x989 (0x1)
	unsigned char unreflected_98a[0x6]; // 0x98a (0x6) 
	class AFortReplaySpectatorAthena* ReplayController; // 0x990 (0x8)
	struct FGameplayCueParameters GCParameters; // 0x998 (0xd0)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnPlayerFootstep (Has no native function)
	void OnPlayerFootstep(struct FVector& CallFuncGetVelocityReturnValue, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, struct FVector& CallFuncGetCachedStepSurfaceNormalReturnValue, struct FName& CallFuncGetTagNameReturnValue, struct FString& CallFuncConvNameToStringReturnValue, bool& CallFuncContainsReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetViewTargetReturnValue, bool& CallFuncOnSameTeamReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncGetCachedFootstepIndexReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue1, struct FTransform& CallFuncSelectTransformReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncGetForwardVectorReturnValue, struct FVector4& CallFuncMakeVector4ReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct TArray<struct FVector4>& K2NodeMakeArrayArray, struct FVector& CallFuncSelectVectorReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnLoopingStartNiagara (Has no native function)
	void OnLoopingStartNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.ExecuteUbergraph_GCNL_Athena_SnowSurface (Has no native function)
	void ExecuteUbergraphGCNLAthenaSnowSurface(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct TEnumAsByte<EGameplayCueEvent>& K2NodeEventEventType, struct FGameplayCueParameters& K2NodeEventParameters, class AActor*& K2NodeEventMyTarget3, struct FGameplayCueParameters& K2NodeEventParameters3, struct TArray<class UNiagaraComponent*>& K2NodeEventParticleComponents2, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents2, class UNiagaraComponent*& CallFuncArrayGetItem, bool& CallFuncOnLocalPlayersTeamReturnValue, bool& CallFuncGetIsPlayingReplayReturnValue, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, class AActor*& K2NodeEventMyTarget2, struct FGameplayCueParameters& K2NodeEventParameters2, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AFortReplaySpectatorAthena*& K2NodeDynamicCastAsFortReplaySpectatorAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, bool& CallFuncIsMobilePlatformReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Final | 0x00008000 | HasDefaults)
};

