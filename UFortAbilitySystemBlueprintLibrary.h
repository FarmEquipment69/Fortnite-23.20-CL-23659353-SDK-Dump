// Class /Script/FortniteGame.FortAbilitySystemBlueprintLibrary
// Size: 0x28
class UFortAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsGameplayEffectContextAbilityInstance (Underlying native function: IsGameplayEffectContextAbilityInstance 0x887dc8c)
	static bool IsGameplayEffectContextAbilityInstance(struct FGameplayEffectContextHandle& GameplayEffectContextHandle, class UGameplayAbility*& AbilityInstance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsGameplayEffectContextAbilityChildOf (Underlying native function: IsGameplayEffectContextAbilityChildOf 0x887db18)
	static bool IsGameplayEffectContextAbilityChildOf(struct FGameplayEffectContextHandle& GameplayEffectContextHandle, class UClass*& AbilityClass); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsGameplayCueActive (Underlying native function: IsGameplayCueActive 0x887da14)
	static bool IsGameplayCueActive(class AActor*& Actor, struct FGameplayTag& GameplayCueTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsCooldownTagsActive (Underlying native function: IsCooldownTagsActive 0x887d84c)
	static bool IsCooldownTagsActive(class AActor*& Actor, struct FGameplayTagContainer& CooldownTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GrantAndActivateAbilityOnSelfWithParams (Underlying native function: GrantAndActivateAbilityOnSelfWithParams 0x887d45c)
	static struct FGameplayAbilitySpecHandle GrantAndActivateAbilityOnSelfWithParams(class UAbilitySystemComponent*& AbilitySystem, class UClass*& AbilityToGrant, class UObject*& ContextObject, struct FGameplayEventData& GameplayEventData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GrantAndActivateAbilityOnSelf (Underlying native function: GrantAndActivateAbilityOnSelf 0x887d2c0)
	static struct FGameplayAbilitySpecHandle GrantAndActivateAbilityOnSelf(class UAbilitySystemComponent*& AbilitySystem, class UClass*& AbilityToGrant, class UObject*& ContextObject); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetFortAbilitySystemComponent (Underlying native function: GetFortAbilitySystemComponent 0x239a904)
	static class UFortAbilitySystemComponent* GetFortAbilitySystemComponent(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetCooldownTimeRemainingAndDuration (Underlying native function: GetCooldownTimeRemainingAndDuration 0x887cd50)
	static void GetCooldownTimeRemainingAndDuration(class AActor*& Actor, struct FGameplayTagContainer& CooldownTags, float& TimeRemaining, float& CooldownDuration); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetCooldownTimeRemaining (Underlying native function: GetCooldownTimeRemaining 0x887cc4c)
	static float GetCooldownTimeRemaining(class AActor*& Actor, struct FGameplayTagContainer& CooldownTags); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetAbilitySystemDebugInfo (Underlying native function: GetAbilitySystemDebugInfo 0x887cb90)
	static struct FString GetAbilitySystemDebugInfo(class AActor*& DebugActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.FilterTargetsInCone (Underlying native function: FilterTargetsInCone 0x887c8dc)
	static struct TArray<class AActor*> FilterTargetsInCone(class AActor*& SourceActor, struct TArray<class AActor*>& ActorsToCheck, struct FVector& ConeStart, struct FVector& ConeEnd, float& ConeRadius, struct FGameplayTagContainer& ExcludeFromObstructionTags, bool& bShouldCheckLos); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.EffectContextSetCritical (Underlying native function: EffectContextSetCritical 0x887c764)
	static void EffectContextSetCritical(struct FGameplayEffectContextHandle& EffectContext, bool& bInCritical); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.AssignActiveGameplayEffectTagSetByCallerMagnitude (Underlying native function: AssignActiveGameplayEffectTagSetByCallerMagnitude 0x887b5d8)
	static void AssignActiveGameplayEffectTagSetByCallerMagnitude(struct FActiveGameplayEffectHandle*& ActiveHandle, struct FGameplayTag& DataTag, float& Magnitude); // (Final | Native | Static | Public | BlueprintCallable)
};

