// Class /Script/FortniteUI.FortInputOptions
// Size: 0x410
class UFortInputOptions : public UFortOptionsTab
{
	struct TArray<class UFortOptionsMenuInputData*> InputData; // 0x3e0 (0x10)
	class UCommonListView* InputCommonListView; // 0x3f0 (0x8)
	class UCommonTextBlock* TooltipDisplay; // 0x3f8 (0x8)
	class UClass* InputCategoryWidgetClass; // 0x400 (0x8)
	unsigned char padding_408[0x8]; // 0x408 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortInputOptions.HandleUsingGamepadChanged (Has no native function)
	void HandleUsingGamepadChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortInputOptions.GetListWidget (Underlying native function: GetListWidget 0xa798c94)
	class UWidget* GetListWidget(class UObject*& Item); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortInputOptions.GetInputDisplayTextBP (Underlying native function: GetInputDisplayTextBP 0xa798b8c)
	struct FText GetInputDisplayTextBP(int& RowIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInputOptions.GetInputDataIndexForActionName (Underlying native function: GetInputDataIndexForActionName 0xa798acc)
	int GetInputDataIndexForActionName(struct FName& ActionName); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInputOptions.GetBoundKeyNameBP (Underlying native function: GetBoundKeyNameBP 0xa7988f8)
	struct FText GetBoundKeyNameBP(int& RowIndex, bool& IsPrimary); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInputOptions.GetActionItemsInGroup (Underlying native function: GetActionItemsInGroup 0xa798834)
	struct TArray<class UFortOptionsMenuInputData*> GetActionItemsInGroup(enum EFortInputActionGroup& InputActionGroup); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInputOptions.GetActionBeingUnbound (Underlying native function: GetActionBeingUnbound 0xa7986c4)
	struct FFortActionBeingUnbound* GetActionBeingUnbound(bool& bIsPrimarySlot, int& Input, struct FKey& NewKey); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInputOptions.ConstructKeyBindList (Underlying native function: ConstructKeyBindList 0x8d3da58)
	void ConstructKeyBindList(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortInputOptions.ChangeBinding (Underlying native function: ChangeBinding 0xa798524)
	void ChangeBinding(bool& bIsPrimarySlot, int& Input, struct FKey& NewKey); // (Native | Protected | BlueprintCallable)
};

