// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C
// Size: 0x9b2
class AGCNL_VisualState_ElementAttached_Fire_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UAudioComponent* OnFireAudioComponent; // 0x968 (0x8)
	class USoundBase* SoundOnPlayerLoop; // 0x970 (0x8)
	class USkeletalMeshComponent* PawnSkeletalMesh; // 0x978 (0x8)
	class AFortPawn* Pawn; // 0x980 (0x8)
	struct FTimerHandle* FadeBodyFXTimerHandle; // 0x988 (0x8)
	double FadeInDuration; // 0x990 (0x8)
	struct TEnumAsByte<B_Enum_PlayerFireStates> PlayerFireState; // 0x998 (0x1)
	unsigned char unreflected_999[0x7]; // 0x999 (0x7) 
	class UNiagaraComponent* BodyFXParticleSystem; // 0x9a0 (0x8)
	double FadeOutDuration; // 0x9a8 (0x8)
	struct TEnumAsByte<B_Enum_PlayerFireStates> PreviousPlayerFireState; // 0x9b0 (0x1)
	bool bOnFire; // 0x9b1 (0x1)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.SetTargetPawn (Has no native function)
	void SetTargetPawn(class AFortPawn*& TargetPawn, bool& CallFuncNotEqualObjectObjectReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.GetNiagaraSystemTemplate (Has no native function)
	void GetNiagaraSystemTemplate(class UNiagaraSystem*& NiagaraSystem, bool& TempboolVariable, class UNiagaraSystem*& TempobjectVariable, class UNiagaraSystem*& TempobjectVariable1, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, class UNiagaraSystem*& K2NodeSelectDefault); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.FadeOnFireAudioComponent (Has no native function)
	void FadeOnFireAudioComponent(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.ClearAllHandles (Has no native function)
	void ClearAllHandles(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.UpdatePlayerVisualsByState (Has no native function)
	void UpdatePlayerVisualsByState(struct TEnumAsByte<B_Enum_PlayerFireStates>& PlayerState, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncIsValidReturnValue, bool& CallFuncIsLocallyViewedReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput, bool& CallFuncNotEqualByteByteReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.DeactivateBodyFX (Has no native function)
	void DeactivateBodyFX(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.ActivateBodyFX (Has no native function)
	void ActivateBodyFX(class UNiagaraSystem*& CallFuncGetNiagaraSystemTemplateNiagaraSystem, bool& CallFuncIsValidReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, bool& CallFuncIsActiveReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.GetPlayerFireStateInternal (Has no native function)
	void GetPlayerFireStateInternal(struct TEnumAsByte<B_Enum_PlayerFireStates>& PlayerState, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.GetPlayerFireState (Has no native function)
	void GetPlayerFireState(struct TEnumAsByte<B_Enum_PlayerFireStates>& PlayerState, struct TEnumAsByte<B_Enum_PlayerFireStates>& CallFuncGetPlayerFireStateInternalPlayerState); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.SetBodyFXParameters (Has no native function)
	void SetBodyFXParameters(struct TEnumAsByte<B_Enum_PlayerFireStates>& PreviousPlayerFireState, struct TEnumAsByte<B_Enum_PlayerFireStates>& TempbyteVariable, double& TemprealVariable, double& TemprealVariable1, struct TEnumAsByte<B_Enum_PlayerFireStates>& TempbyteVariable1, double& TemprealVariable2, double& TemprealVariable3, double& TemprealVariable4, bool& CallFuncIsValidReturnValue, bool& CallFuncIsLocallyControlledReturnValue, double& K2NodeSelectDefault, float& CallFuncConvBoolToFloatReturnValue, double& K2NodeSelectDefault1, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncAddDoubleDoubleReturnValue, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncSetFloatParameterParamImplicitCast2, float& CallFuncSetFloatParameterParamImplicitCast3, float& CallFuncSetFloatParameterParamImplicitCast4); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.OnApplication (Has no native function)
	void OnApplication(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.FadeBodyFXOut (Has no native function)
	void FadeBodyFXOut(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_VisualState_ElementAttached_Fire (Has no native function)
	void ExecuteUbergraphGCNLVisualStateElementAttachedFire(int& EntryPoint, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<B_Enum_PlayerFireStates>& CallFuncGetPlayerFireStatePlayerState); // (Final | 0x00008000 | HasDefaults)
};

