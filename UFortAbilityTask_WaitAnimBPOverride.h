// Class /Script/FortniteGame.FortAbilityTask_WaitAnimBPOverride
// Size: 0xe0
class UFortAbilityTask_WaitAnimBPOverride : public UAbilityTask
{
	struct FMulticastInlineDelegate OnReady; // 0x78 (0x10)
	struct TWeakObjectPtr<class UClass> AnimInstanceWaitingFor; // 0x88 (0x28)
	struct TWeakObjectPtr<class UFortGadgetItemDefinition> GadgetItemDefWaitingFor; // 0xb0 (0x28)
	class AFortPlayerPawn* FortPlayerPawn; // 0xd8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_WaitAnimBPOverride.WaitAnimBPOverrideReady (Underlying native function: WaitAnimBPOverrideReady 0x81e9574)
	static class UFortAbilityTask_WaitAnimBPOverride* WaitAnimBPOverrideReady(class UGameplayAbility*& OwningAbility, struct TWeakObjectPtr<class UClass>& AnimInstance, struct TWeakObjectPtr<class UFortGadgetItemDefinition>& GadgetItemDef); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_WaitAnimBPOverride.OnPawnAnimBPCallback (Underlying native function: OnPawnAnimBPCallback 0x81e8d04)
	void OnPawnAnimBPCallback(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAbilityTask_WaitAnimBPOverride.OnFinishedCharacterCustomizationCallback (Underlying native function: OnFinishedCharacterCustomizationCallback 0x81e8b44)
	void OnFinishedCharacterCustomizationCallback(class AFortPlayerPawn*& InPawn); // (Final | Native | Public)
};

