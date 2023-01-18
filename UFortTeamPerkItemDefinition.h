// Class /Script/FortniteGame.FortTeamPerkItemDefinition
// Size: 0x460
class UFortTeamPerkItemDefinition : public UFortProfileItemDefinition
{
	struct TWeakObjectPtr<class UFortAbilityKit> GrantedAbilityKit; // 0x3c0 (0x28)
	bool bProgressiveBonus; // 0x3e8 (0x1)
	unsigned char unreflected_3e9[0x7]; // 0x3e9 (0x7) 
	struct FGameplayTagQuery RequiredCommanderTagQuery; // 0x3f0 (0x48)
	struct FText CommanderRequirementsText; // 0x438 (0x18)
	struct TArray<struct FFortTeamPerkLoadoutCondition> TeamPerkLoadoutConditions; // 0x450 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortTeamPerkItemDefinition.HasProgressiveBonus (Underlying native function: HasProgressiveBonus 0x8ed2044)
	bool HasProgressiveBonus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTeamPerkItemDefinition.GetAbilityKitBP (Underlying native function: GetAbilityKitBP 0x8ecea00)
	class UFortAbilityKit* GetAbilityKitBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

