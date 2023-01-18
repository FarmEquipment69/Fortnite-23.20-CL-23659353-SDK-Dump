// Class /Script/FortniteGame.FortGameplayAbility_Stasis
// Size: 0xb48
class UFortGameplayAbility_Stasis : public UFortGameplayAbility
{
	unsigned char unreflected_b20[0x8]; // 0xb20 (0x8) 
	struct FGameplayTagContainer AllowedActionTags; // 0xb28 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_Stasis.RemoveAllowedActionTags (Underlying native function: RemoveAllowedActionTags 0x76c607c)
	void RemoveAllowedActionTags(struct FGameplayTagContainer& ActionTagsToRemove); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility_Stasis.IsActionAllowed (Underlying native function: IsActionAllowed 0x814128c)
	bool IsActionAllowed(struct FGameplayTag& InActionTag); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility_Stasis.AppendAllowedActionTags (Underlying native function: AppendAllowedActionTags 0x76c607c)
	void AppendAllowedActionTags(struct FGameplayTagContainer& NewAllowedActionTags); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

