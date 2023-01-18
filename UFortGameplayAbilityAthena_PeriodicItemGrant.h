// Class /Script/FortniteGame.FortGameplayAbilityAthena_PeriodicItemGrant
// Size: 0xb88
class UFortGameplayAbilityAthena_PeriodicItemGrant : public UFortGameplayAbility
{
	struct TMap<struct FActiveItemGrantInfo, struct FScalableFloat> ItemsToGrant; // 0xb20 (0x50)
	struct TArray<struct FTimerHandle*> ActiveTimers; // 0xb70 (0x10)
	class AFortPlayerController* OwnerControllerCachedValue; // 0xb80 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbilityAthena_PeriodicItemGrant.StopItemAwardTimers (Underlying native function: StopItemAwardTimers 0x26daa0c)
	void StopItemAwardTimers(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbilityAthena_PeriodicItemGrant.StartItemAwardTimers (Underlying native function: StartItemAwardTimers 0x26daa0c)
	void StartItemAwardTimers(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

