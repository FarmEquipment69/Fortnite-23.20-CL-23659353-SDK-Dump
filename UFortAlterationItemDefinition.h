// Class /Script/FortniteGame.FortAlterationItemDefinition
// Size: 0xad8
class UFortAlterationItemDefinition : public UFortAccountItemDefinition
{
	unsigned char unreflected_420[0x8]; // 0x420 (0x8) 
	struct TEnumAsByte<EFortAlteration> AlterationType; // 0x428 (0x1)
	unsigned char unreflected_429[0x7]; // 0x429 (0x7) 
	struct FFortCosmeticModification DefaultCosmetic; // 0x430 (0x650)
	struct TArray<struct FFortConditionalCosmeticModification> ConditionalCosmetics; // 0xa80 (0x10)
	struct TArray<struct FFortConditionalIncludeTags> AdditionalGameplayTags; // 0xa90 (0x10)
	struct TWeakObjectPtr<class UFortAbilitySet> AlterationAbilitySet; // 0xaa0 (0x28)
	struct TArray<struct FFortItemQuantityPair> AdditionalRespecCosts; // 0xac8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAlterationItemDefinition.GetAlterationType (Underlying native function: GetAlterationType 0x8e1b768)
	struct TEnumAsByte<EFortAlteration> GetAlterationType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

