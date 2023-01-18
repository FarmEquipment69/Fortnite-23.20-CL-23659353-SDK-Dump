// Class /Script/FortniteUI.FortBaseButton
// Size: 0xac0
class UFortBaseButton : public UFortUserWidget
{
	unsigned char unreflected_278[0x8]; // 0x278 (0x8) 
	struct FMulticastInlineDelegate EnabledChanged; // 0x280 (0x10)
	struct FMulticastInlineDelegate SelectedChanged; // 0x290 (0x10)
	struct FMulticastInlineDelegate ButtonClicked; // 0x2a0 (0x10)
	enum EFortBangSize BangSize; // 0x2b0 (0x1)
	unsigned char unreflected_2b1[0x7]; // 0x2b1 (0x7) 
	struct FVector2D BangOffset; // 0x2b8 (0x10)
	enum EFortBangType BangType; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	struct FName TutorialNameID; // 0x2cc (0x4)
	enum EFortTutorialGlowType TutorialGlowType; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x7]; // 0x2d1 (0x7) 
	class UClass* style; // 0x2d8 (0x8)
	struct TEnumAsByte<EFortBrushSize> BrushSize; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	struct FSlateSound PressedSlateSoundOverride; // 0x2e8 (0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x300 (0x18)
	bool bSelectable; // 0x318 (0x1)
	unsigned char unreflected_319[0x3]; // 0x319 (0x3) 
	struct FName SelectionGroup; // 0x31c (0x4)
	bool bToggleable; // 0x320 (0x1)
	bool bClickable; // 0x321 (0x1)
	struct TEnumAsByte<EButtonClickMethod> ClickMethod; // 0x322 (0x1)
	unsigned char padding_323[0x79d]; // 0x323 (0x79d)

	/* Functions */

	// Function /Script/FortniteUI.FortBaseButton.SetStyle (Underlying native function: SetStyle 0xa6b5d94)
	void SetStyle(class UClass*& InStyle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.SetSelectionGroup (Underlying native function: SetSelectionGroup 0xa6b5d08)
	void SetSelectionGroup(struct FName& InSelectionGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.SetSelected (Underlying native function: SetSelected 0xa6b5b24)
	void SetSelected(bool& InSelected); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.SetHovered (Underlying native function: SetHovered 0xa6b512c)
	void SetHovered(bool& InHovered); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.SetClickMethod (Underlying native function: SetClickMethod 0xa6b4c58)
	void SetClickMethod(struct TEnumAsByte<EButtonClickMethod>& InClickMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.SetClickable (Underlying native function: SetClickable 0xa6b4d30)
	void SetClickable(bool& InClickable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.SetBrushSize (Underlying native function: SetBrushSize 0xa6b4bc8)
	void SetBrushSize(struct TEnumAsByte<EFortBrushSize>& InSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.SetBangVisibility (Underlying native function: SetBangVisibility 0xa6b4b48)
	void SetBangVisibility(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.OnButtonClicked (Underlying native function: OnButtonClicked 0xa6b1eec)
	void OnButtonClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortBaseButton.GetStyle (Underlying native function: GetStyle 0xa6b3044)
	class UFortButtonStyle* GetStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortBaseButton.GetSelectionGroupIndex (Underlying native function: GetSelectionGroupIndex 0xa6b3020)
	int GetSelectionGroupIndex(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortBaseButton.GetSelected (Underlying native function: GetSelected 0xa6b2f14)
	bool GetSelected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortBaseButton.GetCurrentStateStyle (Underlying native function: GetCurrentStateStyle 0xa6b2630)
	struct FFortStateStyle GetCurrentStateStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortBaseButton.GetCurrentFont (Underlying native function: GetCurrentFont 0xa6b2550)
	struct FSlateFontInfo GetCurrentFont(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortBaseButton.GetCurrentCustomPadding (Underlying native function: GetCurrentCustomPadding 0xa6b24fc)
	struct FMargin GetCurrentCustomPadding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortBaseButton.GetCurrentButtonPadding (Underlying native function: GetCurrentButtonPadding 0xa6b24a8)
	struct FMargin GetCurrentButtonPadding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortBaseButton.ForceClick (Underlying native function: ForceClick 0xa6b1eec)
	void ForceClick(); // (Final | Native | Public | BlueprintCallable)
};

