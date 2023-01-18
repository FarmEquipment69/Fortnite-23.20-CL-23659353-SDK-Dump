// Class /Script/FortniteUI.FortQuantitySelector
// Size: 0x550
class UFortQuantitySelector : public UFortActivatablePanel
{
	class UCommonButtonLegacy* ButtonConfirm; // 0x518 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x520 (0x8)
	class UFortItem* Item; // 0x528 (0x8)
	int CurrentQuantity; // 0x530 (0x4)
	unsigned char padding_534[0x1c]; // 0x534 (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.FortQuantitySelector.OnQuantitySelectorInitialized (Has no native function)
	void OnQuantitySelectorInitialized(class UFortItem*& InItem, struct FText& TitleText, struct FText& ConfirmButtonText, struct FText& AdditionalInfoText, int& InitialQuantity, int& MaximumQuantity); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuantitySelector.InitializeQuantitySelector (Underlying native function: InitializeQuantitySelector 0xa73d520)
	void InitializeQuantitySelector(class UFortItem*& InItem, struct FText& TitleText, struct FText& ConfirmButtonText, struct FText& AdditionalInfoText, int& InitialQuantity, int& MaximumQuantity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuantitySelector.GetItem (Underlying native function: GetItem 0xa73c3a4)
	class UFortItem* GetItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

