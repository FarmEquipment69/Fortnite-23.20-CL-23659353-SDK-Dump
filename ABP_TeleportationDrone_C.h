// BlueprintGeneratedClass /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C
// Size: 0x359
class ABP_TeleportationDrone_C : public APawn
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x310 (0x8)
	class USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x318 (0x8)
	class USceneComponent* Scene; // 0x320 (0x8)
	double AnimPlayRate; // 0x328 (0x8)
	class UMaterialInstanceDynamic* StaticMeshMID; // 0x330 (0x8)
	bool TeleportIn; // 0x338 (0x1)
	unsigned char unreflected_339[0x7]; // 0x339 (0x7) 
	class UParticleSystemComponent* CharacterAttached; // 0x340 (0x8)
	bool InLobby; // 0x348 (0x1)
	unsigned char unreflected_349[0x7]; // 0x349 (0x7) 
	class USkeletalMeshComponent* MeshforAttachment; // 0x350 (0x8)
	bool NewVar0; // 0x358 (0x1)

	/* Functions */

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.PlaySpawnAnim (Has no native function)
	void PlaySpawnAnim(class UAnimationAsset*& TempobjectVariable, bool& TempboolVariable, class UAnimationAsset*& TempobjectVariable1, class UAnimationAsset*& TempobjectVariable2, bool& TempboolVariable1, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, class UAnimationAsset*& K2NodeSelectDefault, class UAnimationAsset*& K2NodeSelectDefault1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, float& CallFuncSetPlayRateRateImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.OnSpawnOutAnimEnded (Has no native function)
	void OnSpawnOutAnimEnded(class UAnimMontage*& Montage, bool& bInterrupted); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.ExecuteUbergraph_BP_TeleportationDrone (Has no native function)
	void ExecuteUbergraphBPTeleportationDrone(int& EntryPoint, class UAnimMontage*& K2NodeCustomEventMontage, bool& K2NodeCustomEventbInterrupted, float& K2NodeEventDeltaSeconds, struct FRotator& CallFuncK2GetActorRotationReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, class UMaterialInterface*& CallFuncGetMaterialReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2SetActorRotationReturnValue, float& CallFuncK2GetScalarParameterValueReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, double& CallFuncLessEqualDoubleDoubleAImplicitCast); // (Final | 0x00008000)
};

