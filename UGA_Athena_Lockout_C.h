// BlueprintGeneratedClass /Game/Athena/MappedEffects/Lockout/GA_Athena_Lockout.GA_Athena_Lockout_C
// Size: 0xb38
class UGA_Athena_Lockout_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FTimerHandle* TimerLockoutFailsafe; // 0xb28 (0x8)
	double LockoutFailsafeTime; // 0xb30 (0x8)

	/* Functions */

	// Function /Game/Athena/MappedEffects/Lockout/GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/MappedEffects/Lockout/GA_Athena_Lockout.GA_Athena_Lockout_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/MappedEffects/Lockout/GA_Athena_Lockout.GA_Athena_Lockout_C.Failsafe (Has no native function)
	void Failsafe(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/MappedEffects/Lockout/GA_Athena_Lockout.GA_Athena_Lockout_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/MappedEffects/Lockout/GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout (Has no native function)
	void ExecuteUbergraphGAAthenaLockout(int& EntryPoint, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, enum EFortGetPlayerPawnExecutions& CallFuncGetAvatarAsValidFortPlayerPawnOutExec, class AFortPlayerPawn*& CallFuncGetAvatarAsValidFortPlayerPawnOutFortPlayerPawn, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& K2NodeSwitchEnumCmpSuccess, enum EFortGetPlayerPawnExecutions& CallFuncGetAvatarAsValidFortPlayerPawnOutExec1, class AFortPlayerPawn*& CallFuncGetAvatarAsValidFortPlayerPawnOutFortPlayerPawn1, bool& K2NodeEventbWasCancelled, bool& K2NodeSwitchEnumCmpSuccess1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

