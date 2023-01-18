// Class /Script/CRDBossRuntime.FortBossInstanceVariantComponent
// Size: 0x148
class UFortBossInstanceVariantComponent : public UFortCreativeItemVariantNotifierComponent
{
	unsigned char unreflected_148[0x148]; 

	/* Functions */

	// Function /Script/CRDBossRuntime.FortBossInstanceVariantComponent.UpdateNavAgent (Underlying native function: UpdateNavAgent 0x5599b00)
	void UpdateNavAgent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortBossInstanceVariantComponent.RemoveAbilityByVariantHandle (Underlying native function: RemoveAbilityByVariantHandle 0x5599910)
	bool RemoveAbilityByVariantHandle(struct FItemVariantHandle& VariantHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortBossInstanceVariantComponent.GetDefaultItemTemplateClassForVariant (Underlying native function: GetDefaultItemTemplateClassForVariant 0x5599310)
	class UClass* GetDefaultItemTemplateClassForVariant(struct FItemVariantHandle& VariantHandle, class UClass*& TemplateClass); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDBossRuntime.FortBossInstanceVariantComponent.GetAbilityTagsForVariantHandle (Underlying native function: GetAbilityTagsForVariantHandle 0x5598c40)
	bool GetAbilityTagsForVariantHandle(struct FGameplayTagContainer& OutAbilityTags, struct FItemVariantHandle& VariantHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDBossRuntime.FortBossInstanceVariantComponent.GetAbilitySpecHandleForVariantHandle (Underlying native function: GetAbilitySpecHandleForVariantHandle 0x5598b30)
	bool GetAbilitySpecHandleForVariantHandle(struct FGameplayAbilitySpecHandle& OutAbilitySpecHandle, struct FItemVariantHandle& VariantHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRDBossRuntime.FortBossInstanceVariantComponent.AddAbilityAsync (Underlying native function: AddAbilityAsync 0x5597c80)
	bool AddAbilityAsync(struct FItemVariantHandle& VariantHandle, struct TWeakObjectPtr<class UClass>& SoftAbilityClassReference, struct FDelegate& OnAbilityAdded); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.FortBossInstanceVariantComponent.AddAbility (Underlying native function: AddAbility 0x5597b90)
	bool AddAbility(struct FItemVariantHandle& VariantHandle, class UClass*& AbilityClass); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

