// Class /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
// Size: 0x5b8
class UFortItemCraftingOptionsActivatablePanel_STW : public UFortActivatablePanel
{
	class UFortSchematicItem* BaseItem; // 0x518 (0x8)
	class UFortSchematicItem* TargetItem; // 0x520 (0x8)
	int MaxCraftingTierIndex; // 0x528 (0x4)
	int TargetCraftingTierIndex; // 0x52c (0x4)
	int TargetPromotionTierIndex; // 0x530 (0x4)
	int MaxQuantity; // 0x534 (0x4)
	int SelectedQuantity; // 0x538 (0x4)
	bool CanCraftTargetItem; // 0x53c (0x1)
	unsigned char unreflected_53d[0x3]; // 0x53d (0x3) 
	class UWidget* TierImageParent1; // 0x540 (0x8)
	class UWidget* TierImageParent2; // 0x548 (0x8)
	class UWidget* TierImageParent3; // 0x550 (0x8)
	class UWidget* TierImageParent4; // 0x558 (0x8)
	class UWidget* TierImageParent5; // 0x560 (0x8)
	class UImage* TierImage1; // 0x568 (0x8)
	class UImage* TierImage2; // 0x570 (0x8)
	class UImage* TierImage3; // 0x578 (0x8)
	class UImage* TierImage4; // 0x580 (0x8)
	class UImage* TierImage5; // 0x588 (0x8)
	unsigned char padding_590[0x28]; // 0x590 (0x28)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.UpdateTierImages (Underlying native function: UpdateTierImages 0x75743f8)
	void UpdateTierImages(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetTargetCraftingTierIndex (Underlying native function: SetTargetCraftingTierIndex 0x7573ebc)
	void SetTargetCraftingTierIndex(int& NewTierIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetSelectedQuantity_BP (Underlying native function: SetSelectedQuantity_BP 0x7573d94)
	void SetSelectedQuantityBP(int& NewQuantity); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetItemManagementScreen (Underlying native function: SetItemManagementScreen 0x7573a60)
	void SetItemManagementScreen(class UFortItemManagementScreen_STW*& InItemManagementScreen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetBaseSchematicItem (Underlying native function: SetBaseSchematicItem 0x7573390)
	void SetBaseSchematicItem(class UFortSchematicItem*& InBaseItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectPreviousTier (Underlying native function: SelectPreviousTier 0x7572c84)
	void SelectPreviousTier(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectNextTier (Underlying native function: SelectNextTier 0x7572c44)
	void SelectNextTier(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnTargetItemChanged (Has no native function)
	void OnTargetItemChanged(class UFortSchematicItem*& NewTargetItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnSelectedQuantityChanged (Has no native function)
	void OnSelectedQuantityChanged(int& NewSelectedQuantity); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnMaxQuantityChanged (Has no native function)
	void OnMaxQuantityChanged(int& NewMaxQuantity); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnBaseItemChanged (Has no native function)
	void OnBaseItemChanged(class UFortSchematicItem*& NewBaseItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.IncreaseSelectedQuantity (Underlying native function: IncreaseSelectedQuantity 0x756ff3c)
	void IncreaseSelectedQuantity(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.DecreaseSelectedQuantity (Underlying native function: DecreaseSelectedQuantity 0x756d728)
	void DecreaseSelectedQuantity(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftTargetItem (Underlying native function: CraftTargetItem 0x756d700)
	void CraftTargetItem(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftAndSlotTargetItem (Underlying native function: CraftAndSlotTargetItem 0x756d6ec)
	void CraftAndSlotTargetItem(); // (Final | Native | Protected | BlueprintCallable)
};

