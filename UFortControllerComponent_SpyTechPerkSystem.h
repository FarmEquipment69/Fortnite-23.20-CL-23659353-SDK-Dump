// Class /Script/FortniteGame.FortControllerComponent_SpyTechPerkSystem
// Size: 0x2e8
class UFortControllerComponent_SpyTechPerkSystem : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x90]; // 0xa0 (0x90) 
	float ServerTimeToRelease; // 0x130 (0x4)
	int RerollCount; // 0x134 (0x4)
	unsigned char unreflected_138[0x8]; // 0x138 (0x8) 
	struct TArray<class UFortSpyTechItemDefinition*> AllSelectedPerks; // 0x140 (0x10)
	struct TArray<class UFortSpyTechItemDefinition*> DefaultPerks; // 0x150 (0x10)
	struct TArray<struct FPerkItemSet> PerkSelection; // 0x160 (0x10)
	struct TArray<class UFortSpyTechItemDefinition*> SpyTechArray; // 0x170 (0x10)
	struct TArray<struct FPerkAccoladeInfo> AllPerkAccolades; // 0x180 (0x10)
	struct FPerkMutatorData MutatorData; // 0x190 (0x108)
	struct FGameplayTag CachedFactionTag; // 0x298 (0x4)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	struct FRoundTechDataCache RoundStartCache; // 0x2a0 (0x28)
	struct TArray<struct FFortAbilitySetHandle> AbilitySetHandles; // 0x2c8 (0x10)
	struct TArray<struct FActiveGameplayEffectHandle*> GEHandles; // 0x2d8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_SpyTechPerkSystem.OnRep_SpyTechArray (Underlying native function: OnRep_SpyTechArray 0x8546b18)
	void OnRepSpyTechArray(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_SpyTechPerkSystem.OnRep_ServerTimeToRelease (Underlying native function: OnRep_ServerTimeToRelease 0x8546af0)
	void OnRepServerTimeToRelease(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_SpyTechPerkSystem.OnRep_RerollCount (Underlying native function: OnRep_RerollCount 0x8546acc)
	void OnRepRerollCount(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_SpyTechPerkSystem.OnRep_PerkSelection (Underlying native function: OnRep_PerkSelection 0x8546a98)
	void OnRepPerkSelection(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_SpyTechPerkSystem.OnRep_MutatorData (Underlying native function: OnRep_MutatorData 0x8546a70)
	void OnRepMutatorData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_SpyTechPerkSystem.OnRep_AllSelectedPerks (Underlying native function: OnRep_AllSelectedPerks 0x8546984)
	void OnRepAllSelectedPerks(); // (Final | Native | Protected)
};

