// Class /Script/FortniteGame.FortCreativeCostComponent
// Size: 0xb8
class UFortCreativeCostComponent : public UActorComponent
{
	bool bShowCostInInteractionIndicator; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TArray<int> ItemCosts; // 0xa8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeCostComponent.TakeWorldResourcesFromPlayer (Underlying native function: TakeWorldResourcesFromPlayer 0x87b70a0)
	bool TakeWorldResourcesFromPlayer(class AFortPawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeCostComponent.SetItemResourceCost (Underlying native function: SetItemResourceCost 0x87b6ac0)
	void SetItemResourceCost(struct TEnumAsByte<EFortResourceType>& ResourceType, int& Cost); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeCostComponent.PassesCostCheck (Underlying native function: PassesCostCheck 0x87b5cf8)
	bool PassesCostCheck(class AFortPawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeCostComponent.GetItemCosts (Underlying native function: GetItemCosts 0x87b28a4)
	struct TArray<int> GetItemCosts(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeCostComponent.ClearCosts (Underlying native function: ClearCosts 0x87b0b14)
	void ClearCosts(); // (Final | Native | Public | BlueprintCallable)
};

