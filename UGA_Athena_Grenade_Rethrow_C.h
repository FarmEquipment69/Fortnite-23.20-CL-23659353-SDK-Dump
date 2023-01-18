// BlueprintGeneratedClass /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
// Size: 0xfbc
class UGA_Athena_Grenade_Rethrow_C : public UGA_Athena_Grenade_WithTrajectory_Deprecated_C
{
	unsigned char unreflected_f99[0x7]; // 0xf99 (0x7) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xfa0 (0x8)
	class AFortProjectileBase* Projectile; // 0xfa8 (0x8)
	double TossDelay; // 0xfb0 (0x8)
	struct FName HolsterId; // 0xfb8 (0x4)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.DetachProjectile (Has no native function)
	void DetachProjectile(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.AttachProjectile (Has no native function)
	void AttachProjectile(struct FHitResult& CallFuncK2AddActorLocalOffsetSweepHitResult, struct FHitResult& CallFuncK2AddActorLocalRotationSweepHitResult); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Completed_3B7299CC49B6C5C075996A9C8DDF315F (Has no native function)
	void Completed3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Cancelled_3B7299CC49B6C5C075996A9C8DDF315F (Has no native function)
	void Cancelled3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Triggered_3B7299CC49B6C5C075996A9C8DDF315F (Has no native function)
	void Triggered3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.OnFinish_B295E6694DBD8B2B2478A38EA60F5624 (Has no native function)
	void OnFinishB295E6694DBD8B2B2478A38EA60F5624(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.TossGrenade (Has no native function)
	void TossGrenade(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Server_SpawnProjectile (Has no native function)
	void ServerSpawnProjectile(struct FVector& Location, struct FRotator& Direction); // (Net | NetReliable | NetServer | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.ExecuteUbergraph_GA_Athena_Grenade_Rethrow (Has no native function)
	void ExecuteUbergraphGAAthenaGrenadeRethrow(int& EntryPoint, struct FString& CallFuncGetObjectNameReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncContainsReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& TempboolVariable, class UAnimMontage*& TempobjectVariable, class UAnimMontage*& TempobjectVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UAnimMontage*& K2NodeSelectDefault, struct FVector& CallFuncSpawnLocationAndRotationOutLoc, struct FRotator& CallFuncSpawnLocationAndRotationOutRot, class AFortProjectileBase*& K2NodeDynamicCastAsFortProjectileBase, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FVector& CallFuncSpawnLocationAndRotationOutLoc1, struct FRotator& CallFuncSpawnLocationAndRotationOutRot1, struct FVector& K2NodeEventLocation, struct FRotator& K2NodeEventDirection, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, bool& CallFuncIsValidReturnValue1, double& CallFuncCalcGrenadeSpeedFromPitchGrenadeSpeed, struct FVector& CallFuncConvRotatorToVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FHitResult& CallFuncK2SetActorLocationSweepHitResult, bool& CallFuncK2SetActorLocationReturnValue, class UAbilityTask_WaitDelay*& CallFuncWaitDelayReturnValue, bool& CallFuncIsValidReturnValue2, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& K2NodeEventbWasCancelled, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct TArray<struct FFortCharacterPartMontageInfo>& K2NodeMakeArrayArray, struct FFortGameplayAbilityMontageInfo& K2NodeMakeStructFortGameplayAbilityMontageInfo, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue, bool& CallFuncIsValidReturnValue3, double& CallFuncCalcGrenadeSpeedFromPitchAimPitchImplicitCast, float& CallFuncWaitDelayTimeImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

