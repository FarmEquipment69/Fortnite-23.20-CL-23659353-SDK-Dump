// BlueprintGeneratedClass /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C
// Size: 0x380
class ABP_VictoryDrone_C : public APawn
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x310 (0x8)
	class USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x318 (0x8)
	class USceneComponent* Scene; // 0x320 (0x8)
	struct FMulticastInlineDelegate SpawnOutAnimEndedDispatcher; // 0x328 (0x10)
	double AnimPlayRate; // 0x338 (0x8)
	class UMaterialInstanceDynamic* StaticMeshMID; // 0x340 (0x8)
	bool TeleportIn; // 0x348 (0x1)
	bool IsAthena; // 0x349 (0x1)
	unsigned char unreflected_34a[0x6]; // 0x34a (0x6) 
	class AFortPawn* TargetPlayer; // 0x350 (0x8)
	class UParticleSystemComponent* CharacterAttached; // 0x358 (0x8)
	bool InLobby; // 0x360 (0x1)
	bool isNPC; // 0x361 (0x1)
	unsigned char unreflected_362[0x2]; // 0x362 (0x2) 
	struct FName AttachPoint; // 0x364 (0x4)
	bool isDecoy; // 0x368 (0x1)
	unsigned char unreflected_369[0x7]; // 0x369 (0x7) 
	class USkeletalMeshComponent* MeshforAttachment; // 0x370 (0x8)
	class USoundBase* SoundOnNPCDeath; // 0x378 (0x8)

	/* Functions */

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.Added Death Audio (Has no native function)
	void AddedDeathAudio(class USoundBase*& SoundtoSpawn, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, class UAudioComponent*& CallFuncSpawnSoundAtLocationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.Decoy FX Parameters (Has no native function)
	void DecoyFXParameters(struct TArray<struct FParticleSysParam>& InstanceParameters, struct FParticleSysParam& K2NodeMakeStructParticleSysParam, struct FParticleSysParam& K2NodeMakeStructParticleSysParam1, struct FParticleSysParam& K2NodeMakeStructParticleSysParam2, struct FParticleSysParam& K2NodeMakeStructParticleSysParam3, struct FParticleSysParam& K2NodeMakeStructParticleSysParam4, struct FParticleSysParam& K2NodeMakeStructParticleSysParam5, struct FParticleSysParam& K2NodeMakeStructParticleSysParam6, struct FParticleSysParam& K2NodeMakeStructParticleSysParam7, struct FParticleSysParam& K2NodeMakeStructParticleSysParam8, struct TArray<struct FParticleSysParam>& K2NodeMakeArrayArray); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.NPC FX Parameters (Has no native function)
	void NPCFXParameters(struct TArray<struct FParticleSysParam>& InstanceParameters, struct FParticleSysParam& K2NodeMakeStructParticleSysParam, struct FParticleSysParam& K2NodeMakeStructParticleSysParam1, struct FParticleSysParam& K2NodeMakeStructParticleSysParam2, struct FParticleSysParam& K2NodeMakeStructParticleSysParam3, struct FParticleSysParam& K2NodeMakeStructParticleSysParam4, struct FParticleSysParam& K2NodeMakeStructParticleSysParam5, struct FParticleSysParam& K2NodeMakeStructParticleSysParam6, struct FParticleSysParam& K2NodeMakeStructParticleSysParam7, struct FParticleSysParam& K2NodeMakeStructParticleSysParam8, struct TArray<struct FParticleSysParam>& K2NodeMakeArrayArray); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered (Has no native function)
	void NotifyTeleportFinishedTriggered(bool& CallFuncHasAuthorityReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim (Has no native function)
	void PlaySpawnAnim(class UAnimMontage*& Montage, double& NewLocalVar0, bool& TempboolVariable, bool& CallFuncIsValidReturnValue, class UAnimationAsset*& TempobjectVariable, class UAnimationAsset*& TempobjectVariable1, bool& TempboolVariable1, class UAnimationAsset*& TempobjectVariable2, struct FVector& CallFuncGetSocketLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, bool& TempboolVariable2, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue2, class UAnimationAsset*& TempobjectVariable3, class UAnimationAsset*& TempobjectVariable4, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, class UAnimationAsset*& K2NodeSelectDefault, bool& TempboolVariable3, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UAnimationAsset*& K2NodeSelectDefault1, class UAnimationAsset*& K2NodeSelectDefault2, class UAnimationAsset*& K2NodeSelectDefault3, float& CallFuncSetPlayRateRateImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.InitDrone (Has no native function)
	void InitDrone(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded (Has no native function)
	void OnSpawnOutAnimEnded(class UAnimMontage*& Montage, bool& bInterrupted); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone (Has no native function)
	void ExecuteUbergraphBPVictoryDrone(int& EntryPoint, struct FVector& CallFuncK2GetComponentLocationReturnValue, double& TemprealVariable, bool& TempboolVariable, class USoundBase*& TempobjectVariable, class UAnimMontage*& K2NodeCustomEventMontage, bool& K2NodeCustomEventbInterrupted, float& K2NodeEventDeltaSeconds, double& TemprealVariable1, struct FRotator& CallFuncK2GetActorRotationReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncMakeRotatorReturnValue, bool& CallFuncK2SetActorRotationReturnValue, class UMaterialInterface*& CallFuncGetMaterialReturnValue, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess, float& CallFuncK2GetScalarParameterValueReturnValue, bool& CallFuncIsValidReturnValue, bool& TempboolVariable1, double& K2NodeSelectDefault, class USoundBase*& K2NodeSelectDefault1, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature (Has no native function)
	void SpawnOutAnimEndedDispatcherDelegateSignature(class ABP_VictoryDrone_C*& Drone); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

