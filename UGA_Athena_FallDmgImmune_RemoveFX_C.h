// BlueprintGeneratedClass /Game/Athena/Environments/Blueprints/DudeBro/GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C
// Size: 0xb40
class UGA_Athena_FallDmgImmune_RemoveFX_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	struct FGameplayTag LoopingGC; // 0xb30 (0x4)
	struct FGameplayTag PlayerLandingGC; // 0xb34 (0x4)
	struct FTimerHandle* VehicleOnGroundTimer; // 0xb38 (0x8)

	/* Functions */

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.OnChange_FD84FE4040E65CB60551DE8433D51332 (Has no native function)
	void OnChangeFD84FE4040E65CB60551DE8433D51332(struct TEnumAsByte<EMovementMode>& NewMovementMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.OnChange_E07DC5494A7BED888E9B24AA514662A5 (Has no native function)
	void OnChangeE07DC5494A7BED888E9B24AA514662A5(struct TEnumAsByte<EMovementMode>& NewMovementMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.VehicleLandedCheck (Has no native function)
	void VehicleLandedCheck(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX (Has no native function)
	void ExecuteUbergraphGAAthenaFallDmgImmuneRemoveFX(int& EntryPoint, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventNewMovementMode1, struct TEnumAsByte<EMovementMode>& TempbyteVariable, class UAbilityTask_WaitMovementModeChange*& CallFuncCreateWaitMovementModeChangeReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventNewMovementMode, struct TEnumAsByte<EMovementMode>& TempbyteVariable1, class UAbilityTask_WaitMovementModeChange*& CallFuncCreateWaitMovementModeChangeReturnValue1, bool& CallFuncIsValidReturnValue1, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue, bool& CallFuncIsInVehicleReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsTouchingGroundReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, struct FDelegate& K2NodeCreateDelegateOutputDelegate2); // (Final | 0x00008000 | HasDefaults)
};

