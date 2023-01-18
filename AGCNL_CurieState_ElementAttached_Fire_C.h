// BlueprintGeneratedClass /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C
// Size: 0x9d8
class AGCNL_CurieState_ElementAttached_Fire_C : public AGCNL_VisualState_ElementAttached_Fire_C
{
	unsigned char unreflected_9b2[0x6]; // 0x9b2 (0x6) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9b8 (0x8)
	class UAudioComponent* OnFireAudioComponent0; // 0x9c0 (0x8)
	class USkeletalMeshComponent* PawnSkeletalMesh0; // 0x9c8 (0x8)
	class UNiagaraComponent* BodyFXParticleSystem0; // 0x9d0 (0x8)

	/* Functions */

	// Function /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetNiagaraSystemTemplate (Has no native function)
	void GetNiagaraSystemTemplate(class UNiagaraSystem*& NiagaraSystem); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetPlayerFireStateInternal (Has no native function)
	void GetPlayerFireStateInternal(struct TEnumAsByte<B_Enum_PlayerFireStates>& PlayerState, bool& CallFuncHasCurieStateAttachedReturnValue, bool& CallFuncHasCurieStateAttachedReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnCurieStateChanged (Has no native function)
	void OnCurieStateChanged(class UObject*& Owner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier, bool& CallFuncEqualEqualGameplayTagReturnValue, bool& CallFuncEqualEqualGameplayTagReturnValue1, struct TEnumAsByte<B_Enum_PlayerFireStates>& CallFuncGetPlayerFireStatePlayerState, bool& CallFuncBooleanORReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnApplication (Has no native function)
	void OnApplication(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeBodyFXOut (Has no native function)
	void FadeBodyFXOut(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Curie/GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire (Has no native function)
	void ExecuteUbergraphGCNLCurieStateElementAttachedFire(int& EntryPoint, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, bool& CallFuncIsValidReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UFortCurieManager*& CallFuncGetCurieManagerReturnValue, class UFortCurieManager*& CallFuncGetCurieManagerReturnValue1, double& CallFuncGetGameTimeInSecondsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

