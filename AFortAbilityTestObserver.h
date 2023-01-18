// Class /Script/FortniteGame.FortAbilityTestObserver
// Size: 0x2b8
class AFortAbilityTestObserver : public AActor
{
	unsigned char unreflected_2b8[0x2b8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTestObserver.WasAbilityTagActivated (Underlying native function: WasAbilityTagActivated 0x80ffd4c)
	bool WasAbilityTagActivated(struct FGameplayTag& AbilityTag); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilityTestObserver.WasAbilityActivated (Underlying native function: WasAbilityActivated 0x80ffc94)
	bool WasAbilityActivated(class UGameplayAbility*& Ability); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilityTestObserver.StopObserving (Underlying native function: StopObserving 0x80ffc54)
	void StopObserving(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTestObserver.StartObserving (Underlying native function: StartObserving 0x80ffb84)
	void StartObserving(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable)
};

