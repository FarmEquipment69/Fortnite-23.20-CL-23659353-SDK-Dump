// Class /Script/FortniteGame.FortDefenderItemDefinition
// Size: 0x468
class UFortDefenderItemDefinition : public UFortCharacterType
{
	struct TArray<struct FGameplayEffectApplicationInfo> CombinedStatGEs; // 0x420 (0x10)
	struct FName AppearanceOverrideName; // 0x430 (0x4)
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x434 (0x8)
	unsigned char unreflected_43c[0x4]; // 0x43c (0x4) 
	struct TWeakObjectPtr<class UClass> PawnClass; // 0x440 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortDefenderItemDefinition.GetDefenderSubtypeTag (Underlying native function: GetDefenderSubtypeTag 0x8efbbbc)
	struct FGameplayTag GetDefenderSubtypeTag(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDefenderItemDefinition.GetDefenderSubtype (Underlying native function: GetDefenderSubtype 0x8efbb98)
	enum EFortDefenderSubtype GetDefenderSubtype(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

