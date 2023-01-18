// BlueprintGeneratedClass /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C
// Size: 0x718
class AGCN_RezOut_C : public AFortGameplayCueNotify_BurstLatent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	float TFXResOutCharacterMeshLightIntensityE9C2D3554642468472CCCFA609A39FBC; // 0x530 (0x4)
	float TFXResOutCharacterMeshZHeightParamE9C2D3554642468472CCCFA609A39FBC; // 0x534 (0x4)
	float TFXResOutCharacterMeshTransitionParamE9C2D3554642468472CCCFA609A39FBC; // 0x538 (0x4)
	struct TEnumAsByte<ETimelineDirection> TFXResOutCharacterMeshDirectionE9C2D3554642468472CCCFA609A39FBC; // 0x53c (0x1)
	unsigned char unreflected_53d[0x3]; // 0x53d (0x3) 
	class UTimelineComponent* TFXResOutCharacterMesh; // 0x540 (0x8)
	float TFXGlowCharacterMeshEmissiveWarp39A37BC9407CF090A09ABDA5A488F776; // 0x548 (0x4)
	struct TEnumAsByte<ETimelineDirection> TFXGlowCharacterMeshDirection39A37BC9407CF090A09ABDA5A488F776; // 0x54c (0x1)
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
	class UNiagaraComponent* SpawnedDeathVFX; // 0x660 (0x8)
	class UNiagaraSystem* DissolveVisualEffect; // 0x668 (0x8)
	struct FName DissolveVFXSpawnPointName; // 0x670 (0x4)
	unsigned char unreflected_674[0x4]; // 0x674 (0x4) 
	class UAnimMontage* BaseEliminationMontage; // 0x678 (0x8)
	class UAnimMontage* DBNOEliminationMontage; // 0x680 (0x8)
	class UAnimMontage* SkydivingEliminationMontage; // 0x688 (0x8)
	class UAnimMontage* SwimmingEliminationMontage; // 0x690 (0x8)
	class UAnimMontage* DBNOSwimmingEliminationMontage; // 0x698 (0x8)
	bool SpawnVFXAttached; // 0x6a0 (0x1)
	unsigned char unreflected_6a1[0x7]; // 0x6a1 (0x7) 
	double DissolveTimelinePlayrate; // 0x6a8 (0x8)
	double GlowTimelinePlayrate; // 0x6b0 (0x8)
	bool DEBUGREMOVESPAWNVFX; // 0x6b8 (0x1)
	bool DEBUGREMOVESPAWNEDPOINTLIGHT; // 0x6b9 (0x1)
	unsigned char unreflected_6ba[0x6]; // 0x6ba (0x6) 
	class UNiagaraSystem* DroneVisualEffect; // 0x6c0 (0x8)
	struct FName DroneVFXAttachPoint; // 0x6c8 (0x4)
	bool DEBUGFXSYSTEMCOMPONENTS; // 0x6cc (0x1)
	bool ShouldDelayBetweenAnimAndVFX; // 0x6cd (0x1)
	unsigned char unreflected_6ce[0x2]; // 0x6ce (0x2) 
	double DelayBetweenAnimAndVFX; // 0x6d0 (0x8)
	struct FGuid MaterialOverrideID; // 0x6d8 (0x10)
	struct FFortPawnMaterialOverrideCopiedParameters CopiedParameters; // 0x6e8 (0x30)

	/* Functions */

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX (Has no native function)
	void SpawnDroneVFX(class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates (Has no native function)
	void SetTimelinePlayrates(float& CallFuncSetPlayRateNewRateImplicitCast, float& CallFuncSetPlayRateNewRateImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup (Has no native function)
	void DissolveMaterialSetup(int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintVariable, class USkeletalMeshComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncGetNumMaterialsReturnValue, int& CallFuncAddIntIntReturnValue1, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX (Has no native function)
	void SpawnDissolveVFX(struct FVector& TempstructVariable, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, bool& TempboolVariable, struct FVector& K2NodeSelectDefault, struct FVector& CallFuncGetSocketLocationReturnValue1, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light (Has no native function)
	void CleanUpTeleportationLight(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light (Has no native function)
	void SpawnTeleportationLight(struct FVector& CallFuncGetSocketLocationReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FTransform& CallFuncConvVectorToTransformReturnValue, bool& CallFuncIsMobilePlatformReturnValue, class UPointLightComponent*& CallFuncAddComponentReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone (Has no native function)
	void SpawnTeleportationDrone(struct FTransform& CallFuncK2GetComponentToWorldReturnValue, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, bool& CallFuncIsInZoneReturnValue, bool& CallFuncNotPreBoolReturnValue, class ABP_TeleportationDrone_C*& CallFuncFinishSpawningActorReturnValue, float& CallFuncSetLifeSpanInLifespanImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Stop Looping Audio (Has no native function)
	void StopLoopingAudio(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage (Has no native function)
	void PlayElminationAnimMontage(bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, bool& CallFuncIsSurfaceSwimmingReturnValue, bool& CallFuncIsSkydivingReturnValue, bool& CallFuncWasDBNOOnDeathReturnValue, bool& CallFuncBooleanANDReturnValue, class UAnimMontage*& K2NodeSelectDefault, class UAnimMontage*& K2NodeSelectDefault1, class UAnimMontage*& K2NodeSelectDefault2, class UAnimMontage*& K2NodeSelectDefault3, float& CallFuncPlayLocalAnimMontageReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc (Has no native function)
	void TFXGlowCharacterMeshFinishedFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc (Has no native function)
	void TFXGlowCharacterMeshUpdateFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc (Has no native function)
	void TFXResOutCharacterMeshFinishedFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc (Has no native function)
	void TFXResOutCharacterMeshUpdateFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.OnBurstGeneric (Has no native function)
	void OnBurstGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change (Has no native function)
	void PreSequenceChange(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX (Has no native function)
	void SetAdditionalNiagaraParametersonSpawnedFX(class UNiagaraComponent*& SpawnedDeathFX); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX (Has no native function)
	void SetAdditionalNiagaraParametersonDroneFX(class UNiagaraComponent*& DroneFX); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut (Has no native function)
	void ExecuteUbergraphGCNRezOut(int& EntryPoint, struct TArray<class UMaterialInstanceDynamic*>& K2NodeMakeArrayArray, struct TWeakObjectPtr<class UMaterialInterface>& CallFuncConvObjectToSoftObjectReferenceReturnValue, struct TArray<class USkeletalMeshComponent*>& CallFuncSetToArrayResult, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class UNiagaraComponent*& K2NodeCustomEventSpawnedDeathFX, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UNiagaraComponent*& K2NodeCustomEventDroneFX, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, int& TempintArrayIndexVariable, class USceneComponent*& CallFuncArrayGetItem, class UFXSystemComponent*& K2NodeDynamicCastAsFXSystemComponent, bool& K2NodeDynamicCastbSuccess1, struct TArray<class UMaterialInstanceDynamic*>& K2NodeMakeArrayArray1, struct FGuid& CallFuncBPApplyMaterialOverrideLocalWithFlagsReturnValue, float& CallFuncUpdateDissolveFxMaxLightIntensityImplicitCast, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

