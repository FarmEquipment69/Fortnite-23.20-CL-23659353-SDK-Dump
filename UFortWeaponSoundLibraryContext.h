// Class /Script/FortniteGame.FortWeaponSoundLibraryContext
// Size: 0x68
class UFortWeaponSoundLibraryContext : public USoundLibraryContext
{
	struct FFortWeaponSoundLibraryContextSettings Settings; // 0x58 (0xc)
	unsigned char padding_64[0x4]; // 0x64 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponSoundLibraryContext.PrimeForPlayback (Has no native function)
	void PrimeForPlayback(struct FGameplayTag& InEventName); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponSoundLibraryContext.PlayWeaponSound (Underlying native function: PlayWeaponSound 0x8e5fc70)
	void PlayWeaponSound(class AFortWeapon*& InWeaponActor, struct FGameplayTag& InEventName, struct FSoundLibraryPlaySoundResult& OutResults); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

