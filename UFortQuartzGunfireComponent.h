// Class /Script/FortniteGame.FortQuartzGunfireComponent
// Size: 0x2f8
class UFortQuartzGunfireComponent : public UFortWeaponComponent
{
	unsigned char unreflected_a0[0x190]; // 0xa0 (0x190) 
	class USoundBase* FireSound1P; // 0x230 (0x8)
	class USoundBase* FireSound3P; // 0x238 (0x8)
	struct TWeakObjectPtr<class UNiagaraSystem> MuzzleNiagaraSystemLooping; // 0x240 (0x28)
	float PitchOffsetMax; // 0x268 (0x4)
	int VariationCount; // 0x26c (0x4)
	struct FMulticastInlineDelegate OnGunfireStateChanged; // 0x270 (0x10)
	class UAudioComponent* AudioComponent; // 0x280 (0x8)
	class UQuartzClockHandle* ClockHandle; // 0x288 (0x8)
	class AFortWeapon* WeaponActor; // 0x290 (0x8)
	unsigned char padding_298[0x60]; // 0x298 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.FortQuartzGunfireComponent.SetGunfireState (Underlying native function: SetGunfireState 0x8e609cc)
	void SetGunfireState(enum EQuartzGunfireState& NewGunfireState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuartzGunfireComponent.SetGunfireSounds (Underlying native function: SetGunfireSounds 0x8e608e8)
	void SetGunfireSounds(class USoundBase*& NewFireSound1P, class USoundBase*& NewFireSound3P); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuartzGunfireComponent.GetGunfireState (Underlying native function: GetGunfireState 0x8e5e854)
	enum EQuartzGunfireState GetGunfireState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

