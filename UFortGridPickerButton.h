// Class /Script/FortniteUI.FortGridPickerButton
// Size: 0x320
class UFortGridPickerButton : public UFortGridWidgetBase
{
	struct TEnumAsByte<EMenuPlacement> GridPlacement; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x7]; // 0x2d9 (0x7) 
	class UFortGridPickerGrid* GridWidget; // 0x2e0 (0x8)
	bool bCloseOnTileClicked; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x3]; // 0x2e9 (0x3) 
	struct FDelegate GridWidgetDelegate; // 0x2ec (0xc)
	struct FMulticastInlineDelegate OnGridPickerOpenChanged; // 0x2f8 (0x10)
	unsigned char padding_308[0x18]; // 0x308 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortGridPickerButton.SetIsOpen (Underlying native function: SetIsOpen 0xa7c3b44)
	void SetIsOpen(bool& ShouldBeOpen); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortGridPickerButton.OnIsGridPickerOpenChanged__DelegateSignature (Has no native function)
	void OnIsGridPickerOpenChangedDelegateSignature(bool& IsOpen); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortGridPickerButton.OnButtonClicked (Underlying native function: OnButtonClicked 0xa7c395c)
	void OnButtonClicked(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortGridPickerButton.CreateGridWidget__DelegateSignature (Has no native function)
	class UFortGridPickerGrid* CreateGridWidgetDelegateSignature(); // (Public | Delegate)
};

