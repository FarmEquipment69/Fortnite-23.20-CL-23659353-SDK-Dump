// Class /Script/IceRuntime.FortGameplayAbility_FormSnowball
// Size: 0xb38
class UFortGameplayAbility_FormSnowball : public UFortGameplayAbility
{
	struct FGameplayTag MeleeAbilityTag; // 0xb20 (0x4)
	unsigned char unreflected_b24[0x4]; // 0xb24 (0x4) 
	struct FMulticastInlineDelegate OnMeleeWeaponSwungDelegate; // 0xb28 (0x10)

	/* Functions */

	// Function /Script/IceRuntime.FortGameplayAbility_FormSnowball.HandleOnMeleeWeaponSwung (Underlying native function: HandleOnMeleeWeaponSwung 0x744fbec)
	void HandleOnMeleeWeaponSwung(); // (Final | Native | Public)

	// Function /Script/IceRuntime.FortGameplayAbility_FormSnowball.HandleOnActivatingPawnAbilityCommitted (Underlying native function: HandleOnActivatingPawnAbilityCommitted 0x744fb6c)
	void HandleOnActivatingPawnAbilityCommitted(class UGameplayAbility*& CommittedAbility); // (Final | Native | Public)
};

