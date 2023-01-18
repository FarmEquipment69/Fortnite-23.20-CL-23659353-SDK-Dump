// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C
// Size: 0x9a0
class AGCN_Loop_Ice_Feet_Environmental_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class AActor* TargetActor; // 0x968 (0x8)
	struct TArray<class UFXSystemComponent*> SpawnedEmitters; // 0x970 (0x10)
	class UFortCollisionAudioComponent* CollisionAudioComp; // 0x980 (0x8)
	struct TArray<class UAudioComponent*> SpawnedAudioComps; // 0x988 (0x10)
	class USoundBase* MetaSoundOverride; // 0x998 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ConfigureSound (Has no native function)
	void ConfigureSound(class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, int& CallFuncArrayLastIndexReturnValue, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncClampReturnValue, class UAudioComponent*& CallFuncArrayGetItem); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.AttachFX (Has no native function)
	void AttachFX(class USceneComponent*& Mesh, int& TempintVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncGreaterIntIntReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem, int& CallFuncArrayLastIndexReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncClampReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem1, double& CallFuncGetGameTimeInSecondsReturnValue, class UNiagaraComponent*& K2NodeDynamicCastAsNiagaraParticleSystemComponent, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2AttachToComponentReturnValue, float& CallFuncSetFloatParameterParamImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnPawnMovementModeChanged (Has no native function)
	void OnPawnMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.On Footstep Event (Has no native function)
	void OnFootstepEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental (Has no native function)
	void ExecuteUbergraphGCNLoopIceFeetEnvironmental(int& EntryPoint, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& TempintArrayIndexVariable1, float& K2NodeEventDeltaSeconds, int& CallFuncArrayLastIndexReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncClampReturnValue, class UAudioComponent*& CallFuncArrayGetItem, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, bool& CallFuncIsValidReturnValue, bool& CallFuncIsMovingOnGroundReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, int& CallFuncArrayLastIndexReturnValue1, bool& CallFuncLessEqualIntIntReturnValue1, int& CallFuncArrayLastIndexReturnValue2, bool& CallFuncLessEqualIntIntReturnValue2, int& CallFuncClampReturnValue1, class UAudioComponent*& CallFuncArrayGetItem1, int& CallFuncClampReturnValue2, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput, class UAudioComponent*& CallFuncArrayGetItem2, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetTriggerParameterselfCastInput, int& CallFuncArrayLastIndexReturnValue3, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, bool& CallFuncLessEqualIntIntReturnValue3, int& CallFuncClampReturnValue3, class UAudioComponent*& CallFuncArrayGetItem3, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess1, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput1, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncVSizeReturnValue, double& CallFuncMapRangeClampedReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem4, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput2, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem5, int& CallFuncArrayLengthReturnValue1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, bool& CallFuncLessIntIntReturnValue1, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena1, bool& K2NodeDynamicCastbSuccess2, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess3, float& CallFuncSetFloatParameterInFloatImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

