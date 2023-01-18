// BlueprintGeneratedClass /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C
// Size: 0x6f0
class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	float TFXResOutCharacterMeshLightIntensity81C5527F43A6972D94623590BA582E8C; // 0x530 (0x4)
	float TFXResOutCharacterMeshZHeightParam81C5527F43A6972D94623590BA582E8C; // 0x534 (0x4)
	float TFXResOutCharacterMeshTransitionParam81C5527F43A6972D94623590BA582E8C; // 0x538 (0x4)
	struct TEnumAsByte<ETimelineDirection> TFXResOutCharacterMeshDirection81C5527F43A6972D94623590BA582E8C; // 0x53c (0x1)
	unsigned char unreflected_53d[0x3]; // 0x53d (0x3) 
	class UTimelineComponent* TFXResOutCharacterMesh; // 0x540 (0x8)
	float TFXGlowCharacterMeshEmissiveWarp9EA15145493A8F1A5915938D5529A028; // 0x548 (0x4)
	struct TEnumAsByte<ETimelineDirection> TFXGlowCharacterMeshDirection9EA15145493A8F1A5915938D5529A028; // 0x54c (0x1)
	unsigned char unreflected_54d[0x3]; // 0x54d (0x3) 
	class UTimelineComponent* TFXGlowCharacterMesh; // 0x550 (0x8)
	bool DEBUGANIMATION; // 0x558 (0x1)
	bool SpawnDrone; // 0x559 (0x1)
	unsigned char unreflected_55a[0x6]; // 0x55a (0x6) 
	class UClass* TeleportationDrone; // 0x560 (0x8)
	double TeleportBotAnimPlayRate; // 0x568 (0x8)
	double TeleportBotLifespan; // 0x570 (0x8)
	class UPointLightComponent* TeleportationPointLight; // 0x578 (0x8)
	struct FVector TeleportationLightOffset; // 0x580 (0x18)
	struct FLinearColor TeleportationLightColor; // 0x598 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> DissolveMIDs; // 0x5a8 (0x10)
	class UMaterialInterface* MatChracterDissolve; // 0x5b8 (0x8)
	class APlayerPawn_Athena_C* Pawn; // 0x5c0 (0x8)
	struct TSet<class USkeletalMeshComponent*> Dissolve; // 0x5c8 (0x50)
	struct FName SocketMeshTop; // 0x618 (0x4)
	unsigned char unreflected_61c[0x4]; // 0x61c (0x4) 
	double MaxLightIntensity; // 0x620 (0x8)
	struct FName SocketMeshBottom; // 0x628 (0x4)
	unsigned char unreflected_62c[0x4]; // 0x62c (0x4) 
	struct TArray<class USkeletalMeshComponent*> MeshestoDissolve; // 0x630 (0x10)
	class ABP_TeleportationDrone_C* Drone; // 0x640 (0x8)
	bool DEBUGCHILDCOMPONENTS; // 0x648 (0x1)
	unsigned char unreflected_649[0x7]; // 0x649 (0x7) 
	struct TArray<class UFXSystemComponent*> ParticleComponents; // 0x650 (0x10)
	class UNiagaraComponent* SpawnedTeleportVFX; // 0x660 (0x8)
	class UNiagaraSystem* TeleportInVisualEffect; // 0x668 (0x8)
	struct FName TeleportInVFXAttachPointName; // 0x670 (0x4)
	int CurDissolveSetupAttempt; // 0x674 (0x4)
	int AmountOfTimesToAttemptRestoreMats; // 0x678 (0x4)
	bool SpawnVFXAttached; // 0x67c (0x1)
	unsigned char unreflected_67d[0x3]; // 0x67d (0x3) 
	double DissolveTimelinePlayrate; // 0x680 (0x8)
	double GlowTimelinePlayrate; // 0x688 (0x8)
	class UNiagaraSystem* DroneVisualEffect; // 0x690 (0x8)
	bool DEBUGTESTJANUSFX; // 0x698 (0x1)
	unsigned char unreflected_699[0x3]; // 0x699 (0x3) 
	struct FName DroneVFXAttachPoint; // 0x69c (0x4)
	struct FGuid MaterialOverrideID; // 0x6a0 (0x10)
	struct FFortPawnMaterialOverrideCopiedParameters CopiedParameters; // 0x6b0 (0x30)
	struct FDelegateHandleController DelegateHandleController; // 0x6e0 (0x10)

	/* Functions */

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX (Has no native function)
	void SpawnDroneVFX(class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates (Has no native function)
	void SetTimelinesPlayrates(float& CallFuncSetPlayRateNewRateImplicitCast, float& CallFuncSetPlayRateNewRateImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX (Has no native function)
	void SpawnTeleportInVFX(struct FVector& CallFuncGetSocketLocationReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Restore Character Materials (Has no native function)
	void RestoreCharacterMaterials(bool& FullyCompleted, int& CurrentReplacementIndex, int& Itr, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintArrayIndexVariable1, class UMaterialInstanceDynamic*& TempobjectVariable, bool& TempboolVariable, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncArrayIsValidIndexReturnValue, int& CallFuncAddIntIntReturnValue1, class UMaterialInstanceDynamic*& K2NodeSelectDefault, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue2, int& CallFuncArrayLengthReturnValue, class USkeletalMeshComponent*& CallFuncArrayGetItem1, bool& CallFuncLessIntIntReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, int& CallFuncArrayLengthReturnValue1, int& CallFuncArrayLengthReturnValue2, int& CallFuncAddIntIntReturnValue3, bool& CallFuncLessIntIntReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light (Has no native function)
	void CleanUpTeleportationLight(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light (Has no native function)
	void SpawnTeleportationLight(struct FVector& CallFuncGetSocketLocationReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FTransform& CallFuncConvVectorToTransformReturnValue, bool& CallFuncIsMobilePlatformReturnValue, class UPointLightComponent*& CallFuncAddComponentReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone (Has no native function)
	void SpawnTeleportationDrone(struct FTransform& CallFuncK2GetComponentToWorldReturnValue, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, bool& CallFuncIsInZoneReturnValue, bool& CallFuncNotPreBoolReturnValue, class ABP_TeleportationDrone_C*& CallFuncFinishSpawningActorReturnValue, float& CallFuncSetLifeSpanInLifespanImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Stop Looping Audio (Has no native function)
	void StopLoopingAudio(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc (Has no native function)
	void TFXGlowCharacterMeshFinishedFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc (Has no native function)
	void TFXGlowCharacterMeshUpdateFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc (Has no native function)
	void TFXResOutCharacterMeshFinishedFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc (Has no native function)
	void TFXResOutCharacterMeshUpdateFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnBurstGeneric (Has no native function)
	void OnBurstGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change (Has no native function)
	void PreSequenceChange(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX (Has no native function)
	void SetAdditionalNiagaraParametersonSpawnedFX(class UNiagaraComponent*& SpawnedTeleportInFX); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX (Has no native function)
	void SetAdditionalNiagaraParameteronDroneFX(class UNiagaraComponent*& DroneFX); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnCosmeticPart (Has no native function)
	void OnCosmeticPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn (Has no native function)
	void ExecuteUbergraphGCNRezIn(int& EntryPoint, class AFortPlayerPawn*& K2NodeCustomEventPawn, class UCustomCharacterPart*& K2NodeCustomEventPart, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut, bool& CallFuncIsValidReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class UNiagaraComponent*& K2NodeCustomEventSpawnedTeleportInFX, class UNiagaraComponent*& K2NodeCustomEventDroneFX, struct TWeakObjectPtr<class UMaterialInterface>& CallFuncConvObjectToSoftObjectReferenceReturnValue, struct FGuid& CallFuncBPApplyMaterialOverrideLocalWithFlagsReturnValue, bool& CallFuncRemoveMaterialOverrideLocalReturnValue, struct TArray<class UMaterialInstanceDynamic*>& K2NodeMakeArrayArray, float& CallFuncUpdateDissolveFxMaxLightIntensityImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

