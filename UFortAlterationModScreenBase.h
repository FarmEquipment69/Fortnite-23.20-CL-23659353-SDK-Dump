// Class /Script/SaveTheWorldUI.FortAlterationModScreenBase
// Size: 0x578
class UFortAlterationModScreenBase : public UFortActivatablePanel
{
	class UFortAlterationsWidget* AlterationsToEdit; // 0x518 (0x8)
	class UFortAlterationOptionsBase* AlterationSlotOptions; // 0x520 (0x8)
	class UFortItemDetailsHostPanel* ItemInspectionMainItemDetailsHostPanel; // 0x528 (0x8)
	class UFortItemDetailsHostPanel* AlterationsExtraDetailsPanel; // 0x530 (0x8)
	class UClass* AlterationModOptinScreenClass; // 0x538 (0x8)
	struct FDataTableRowHandle BackInputAction; // 0x540 (0x10)
	struct TWeakObjectPtr<class UFortAlterableItem> AlterableItem; // 0x550 (0x8)
	class UFortAlterationOption* CurrentAlterationOptionInternal; // 0x558 (0x8)
	unsigned char padding_560[0x18]; // 0x560 (0x18)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.SetItemForAlterationsModding (Underlying native function: SetItemForAlterationsModding 0x759a978)
	void SetItemForAlterationsModding(class UFortAlterableItem*& InAlterableItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.RefreshItemAndAlterationsBP (Has no native function)
	void RefreshItemAndAlterationsBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnItemSlotChanged (Has no native function)
	void OnItemSlotChanged(bool& SelectedSlot); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationOptionChanged (Has no native function)
	void OnAlterationOptionChanged(class UFortAlterationOption*& CurrentAlterationOption); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationSucess (Has no native function)
	void OnAlterationModificationSucess(int& ModifiedSlotIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationStarted (Has no native function)
	void OnAlterationModificationStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationCompleted (Has no native function)
	void OnAlterationModificationCompleted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.HandleBackAction (Underlying native function: HandleBackAction 0x7597d94)
	void HandleBackAction(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.ConfirmSelection (Underlying native function: ConfirmSelection 0x759579c)
	void ConfirmSelection(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.CancelSelection (Underlying native function: CancelSelection 0x75956b8)
	void CancelSelection(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.AreIngredientRequirementsMent (Underlying native function: AreIngredientRequirementsMent 0x7594f08)
	bool AreIngredientRequirementsMent(struct TArray<struct FFortItemQuantityPair>& RequiredIngredients); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

