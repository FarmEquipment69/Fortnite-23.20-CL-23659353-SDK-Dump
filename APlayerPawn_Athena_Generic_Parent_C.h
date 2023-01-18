// BlueprintGeneratedClass /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// Size: 0x5350
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5260 (0x8)
	class UMotionWarpingComponent* MotionWarping; // 0x5268 (0x8)
	class UMultiInteractActorComponent_C* MultiInteractActorComponent; // 0x5270 (0x8)
	struct TArray<class UMaterialInterface*> DefaultWeaponMaterials; // 0x5278 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x5288 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnHatMaterials; // 0x5298 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x52a8 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x52b8 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x52c8 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x52d8 (0x10)
	class UPostProcessComponent* PlayerPostProcessFX; // 0x52e8 (0x8)
	struct TArray<class USkeletalMeshComponent*> SkeletalMeshes; // 0x52f0 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnMaterialsALL; // 0x5300 (0x10)
	struct FMulticastInlineDelegate ShootingTargetReactToJump; // 0x5310 (0x10)
	struct FMulticastInlineDelegate OnPlayHit; // 0x5320 (0x10)
	struct FMulticastInlineDelegate OnEnteredVehicleDispatcher; // 0x5330 (0x10)
	struct FMulticastInlineDelegate OnExitedVehicleDispatcher; // 0x5340 (0x10)

	/* Functions */

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle (Has no native function)
	void OnEnteredVehicle(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle (Has no native function)
	void OnExitedVehicle(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped (Has no native function)
	void OnJumped(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch (Has no native function)
	void K2OnStartCrouch(float& HalfHeightAdjust, float& ScaledHalfHeightAdjust); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch (Has no native function)
	void K2OnEndCrouch(float& HalfHeightAdjust, float& ScaledHalfHeightAdjust); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent (Has no native function)
	void ExecuteUbergraphPlayerPawnAthenaGenericParent(int& EntryPoint, struct FTransform& TempstructVariable, bool& CallFuncIsLocallyControlledReturnValue, class UPostProcessComponent*& CallFuncAddComponentReturnValue, bool& CallFuncIsDedicatedServerReturnValue, float& K2NodeEventHalfHeightAdjust1, float& K2NodeEventScaledHalfHeightAdjust1, float& K2NodeEventHalfHeightAdjust, float& K2NodeEventScaledHalfHeightAdjust); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher__DelegateSignature (Has no native function)
	void OnExitedVehicleDispatcherDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher__DelegateSignature (Has no native function)
	void OnEnteredVehicleDispatcherDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit__DelegateSignature (Has no native function)
	void OnPlayHitDelegateSignature(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Public | Delegate | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature (Has no native function)
	void ShootingTargetReactToJumpDelegateSignature(class AFortPlayerPawnAthena*& JumpingPlayer); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

