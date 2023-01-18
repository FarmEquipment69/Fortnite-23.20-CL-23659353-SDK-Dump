// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C
// Size: 0xa10
class AGCNL_NPC_Interaction_Glitch_Heavy_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UAudioComponent* SpawnAudio; // 0x968 (0x8)
	class APlayerPawn_Athena_C* Pawn; // 0x970 (0x8)
	struct TSet<class USkeletalMeshComponent*> HeavyGlitchContainer; // 0x978 (0x50)
	struct TArray<class USkeletalMeshComponent*> HeavyGlitchSKmeshes; // 0x9c8 (0x10)
	class UMaterialInterface* GlitchMaterial; // 0x9d8 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> PlaceHolderMID; // 0x9e0 (0x10)
	struct FTimerHandle* InitializeTimer; // 0x9f0 (0x8)
	class USoundBase* SpawnSound; // 0x9f8 (0x8)
	struct FDelegateHandleController DelegateHandleController; // 0xa00 (0x10)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnLoopingStartNiagara (Has no native function)
	void OnLoopingStartNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnFinishedCustomization (Has no native function)
	void OnFinishedCustomization(class AFortPlayerPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnCosmeticPart (Has no native function)
	void OnCosmeticPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.ExecuteUbergraph_GCNL_NPC_Interaction_Glitch_Heavy (Has no native function)
	void ExecuteUbergraphGCNLNPCInteractionGlitchHeavy(int& EntryPoint, class AFortPlayerPawn*& K2NodeCustomEventPawn, class UCustomCharacterPart*& K2NodeCustomEventPart, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UNiagaraComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, struct TArray<class USkeletalMeshComponent*>& CallFuncSetToArrayResult, int& CallFuncArrayLengthReturnValue, bool& CallFuncSetupDissolveFxReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, class USkeletalMeshComponent*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, class AFortPlayerPawn*& K2NodeCustomEventPawn1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut, bool& CallFuncIsValidReturnValue, struct TArray<class USkeletalMeshComponentBudgeted*>& CallFuncGetWeaponMeshesWeaponMeshes, bool& CallFuncIsCharacterCustomizationLoadingCompletedReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct TArray<class USkeletalMeshComponent*>& TempobjectVariable); // (Final | 0x00008000 | HasDefaults)
};

