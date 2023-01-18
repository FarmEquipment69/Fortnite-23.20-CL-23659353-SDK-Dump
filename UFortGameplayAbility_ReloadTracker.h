// Class /Script/FortniteGame.FortGameplayAbility_ReloadTracker
// Size: 0xb30
class UFortGameplayAbility_ReloadTracker : public UFortGameplayAbility
{
	float TimesReloaded; // 0xb20 (0x4)
	unsigned char padding_b24[0xc]; // 0xb24 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_ReloadTracker.OnSourceWeaponTimesReloadedUpdated (Has no native function)
	void OnSourceWeaponTimesReloadedUpdated(class AFortWeapon*& SourceWeapon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_ReloadTracker.OnRep_TimesReloaded (Underlying native function: OnRep_TimesReloaded 0x9040b50)
	void OnRepTimesReloaded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayAbility_ReloadTracker.GetScourceWeaponTimesReloaded (Underlying native function: GetScourceWeaponTimesReloaded 0x903fd08)
	int GetScourceWeaponTimesReloaded(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

