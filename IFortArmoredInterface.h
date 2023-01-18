// Class /Script/FortniteGame.FortArmoredInterface
// Size: 0x28
class IFortArmoredInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortArmoredInterface.GetOwningAbilityComponent (Has no native function)
	class UFortAbilitySystemComponent* GetOwningAbilityComponent(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortArmoredInterface.GetArmoredArea (Has no native function)
	struct FBox GetArmoredArea(); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortArmoredInterface.GetArmoredAppliedEffects (Has no native function)
	struct TArray<class UClass*> GetArmoredAppliedEffects(); // (Event | Public | BlueprintEvent)
};

