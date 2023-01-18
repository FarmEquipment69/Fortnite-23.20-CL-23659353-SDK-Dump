// Class /Script/CommonUI.CommonButtonStyle
// Size: 0x730
class UCommonButtonStyle : public UObject
{
	bool bSingleMaterial; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FSlateBrush SingleMaterialBrush; // 0x30 (0xc0)
	struct FSlateBrush NormalBase; // 0xf0 (0xc0)
	struct FSlateBrush NormalHovered; // 0x1b0 (0xc0)
	struct FSlateBrush NormalPressed; // 0x270 (0xc0)
	struct FSlateBrush SelectedBase; // 0x330 (0xc0)
	struct FSlateBrush SelectedHovered; // 0x3f0 (0xc0)
	struct FSlateBrush SelectedPressed; // 0x4b0 (0xc0)
	struct FSlateBrush Disabled; // 0x570 (0xc0)
	struct FMargin ButtonPadding; // 0x630 (0x10)
	struct FMargin CustomPadding; // 0x640 (0x10)
	int MinWidth; // 0x650 (0x4)
	int MinHeight; // 0x654 (0x4)
	class UClass* NormalTextStyle; // 0x658 (0x8)
	class UClass* NormalHoveredTextStyle; // 0x660 (0x8)
	class UClass* SelectedTextStyle; // 0x668 (0x8)
	class UClass* SelectedHoveredTextStyle; // 0x670 (0x8)
	class UClass* DisabledTextStyle; // 0x678 (0x8)
	struct FSlateSound PressedSlateSound; // 0x680 (0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x698 (0x20)
	struct FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound; // 0x6b8 (0x20)
	struct FSlateSound HoveredSlateSound; // 0x6d8 (0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x6f0 (0x20)
	struct FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound; // 0x710 (0x20)

	/* Functions */

	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle (Underlying native function: GetSelectedTextStyle 0x6a4ba8c)
	class UCommonTextStyle* GetSelectedTextStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush (Underlying native function: GetSelectedPressedBrush 0x6a4b938)
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle (Underlying native function: GetSelectedHoveredTextStyle 0x6a4b8fc)
	class UCommonTextStyle* GetSelectedHoveredTextStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush (Underlying native function: GetSelectedHoveredBrush 0x6a4b854)
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush (Underlying native function: GetSelectedBaseBrush 0x6a4b76c)
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle (Underlying native function: GetNormalTextStyle 0x6a4b71c)
	class UCommonTextStyle* GetNormalTextStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush (Underlying native function: GetNormalPressedBrush 0x6a4b674)
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle (Underlying native function: GetNormalHoveredTextStyle 0x6a4b650)
	class UCommonTextStyle* GetNormalHoveredTextStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush (Underlying native function: GetNormalHoveredBrush 0x6a4b5a8)
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush (Underlying native function: GetNormalBaseBrush 0x6a4b500)
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush (Underlying native function: GetMaterialBrush 0x6a4ac18)
	void GetMaterialBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle (Underlying native function: GetDisabledTextStyle 0x6a4b170)
	class UCommonTextStyle* GetDisabledTextStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush (Underlying native function: GetDisabledBrush 0x6a4b0c8)
	void GetDisabledBrush(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding (Underlying native function: GetCustomPadding 0x6a4aff8)
	void GetCustomPadding(struct FMargin& OutCustomPadding); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding (Underlying native function: GetButtonPadding 0x6a4ad60)
	void GetButtonPadding(struct FMargin& OutButtonPadding); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

