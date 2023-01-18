// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0x98
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
	struct FMulticastInlineDelegate OnRelease; // 0x78 (0x10)
	unsigned char padding_88[0x10]; // 0x88 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease (Underlying native function: WaitInputRelease 0x6aee8ac)
	static class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility*& OwningAbility, bool& bTestAlreadyReleased); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback (Underlying native function: OnReleaseCallback 0x6ae7bac)
	void OnReleaseCallback(); // (Final | Native | Public)
};

