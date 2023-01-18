// Class /Script/FortniteGame.FortGameplayAbilityTooltip
// Size: 0x148
class UFortGameplayAbilityTooltip : public UFortTooltip
{
	struct FGameplayAbilitySpec CachedSpec; // 0x50 (0xe8)
	class UGameplayAbility* CachedAbilityInstance; // 0x138 (0x8)
	class UFortTooltipContext* CachedContext; // 0x140 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbilityTooltip.InitializeAbilityInstanceInternal (Underlying native function: InitializeAbilityInstanceInternal 0x8f7d168)
	void InitializeAbilityInstanceInternal(class UGameplayAbility*& AbilityInstance, class UFortTooltipContext*& Context); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayAbilityTooltip.InitializeAbilityInstance (Underlying native function: InitializeAbilityInstance 0x8f7d07c)
	void InitializeAbilityInstance(class UGameplayAbility*& AbilityInstance, class UFortTooltipContext*& Context); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameplayAbilityTooltip.GetTextForTokenFromAbilitySpecInternal (Underlying native function: GetTextForTokenFromAbilitySpecInternal 0x8f7ce28)
	bool GetTextForTokenFromAbilitySpecInternal(struct FGameplayAbilitySpec& Spec, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayAbilityTooltip.GetTextForTokenFromAbilitySpec (Underlying native function: GetTextForTokenFromAbilitySpec 0x8f7cbd8)
	bool GetTextForTokenFromAbilitySpec(struct FGameplayAbilitySpec& Spec, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbilityTooltip.GetTextForTokenFromAbilityInstanceInternal (Underlying native function: GetTextForTokenFromAbilityInstanceInternal 0x8f7c9e8)
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility*& AbilityInstance, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayAbilityTooltip.GetTextForTokenFromAbilityInstance (Underlying native function: GetTextForTokenFromAbilityInstance 0x8f7c7fc)
	bool GetTextForTokenFromAbilityInstance(class UGameplayAbility*& AbilityInstance, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbilityTooltip.GetApplicationTag (Underlying native function: GetApplicationTag 0x8f7bd5c)
	bool GetApplicationTag(class UGameplayAbility*& AbilityInstance, struct FGameplayTag& OutTag); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)
};

