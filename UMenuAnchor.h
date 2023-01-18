// Class /Script/UMG.MenuAnchor
// Size: 0x1a8
class UMenuAnchor : public UContentWidget
{
	class UClass* MenuClass; // 0x160 (0x8)
	struct FDelegate OnGetMenuContentEvent; // 0x168 (0xc)
	struct FDelegate OnGetUserMenuContentEvent; // 0x174 (0xc)
	struct TEnumAsByte<EMenuPlacement> Placement; // 0x180 (0x1)
	bool bFitInWindow; // 0x181 (0x1)
	bool ShouldDeferPaintingAfterWindowContent; // 0x182 (0x1)
	bool UseApplicationMenuStack; // 0x183 (0x1)
	unsigned char unreflected_184[0x4]; // 0x184 (0x4) 
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x188 (0x10)
	unsigned char padding_198[0x10]; // 0x198 (0x10)

	/* Functions */

	// Function /Script/UMG.MenuAnchor.ToggleOpen (Underlying native function: ToggleOpen 0x9b12e54)
	void ToggleOpen(bool& bFocusOnOpen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick (Underlying native function: ShouldOpenDueToClick 0x9b12da4)
	bool ShouldOpenDueToClick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.MenuAnchor.SetPlacement (Underlying native function: SetPlacement 0x9b107e4)
	void SetPlacement(struct TEnumAsByte<EMenuPlacement>& InPlacement); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MenuAnchor.Open (Underlying native function: Open 0x9b0bdcc)
	void Open(bool& bFocusMenu); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MenuAnchor.IsOpen (Underlying native function: IsOpen 0x9b0b7f8)
	bool IsOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus (Underlying native function: HasOpenSubMenus 0x9b0b67c)
	bool HasOpenSubMenus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature (Has no native function)
	class UUserWidget* GetUserWidgetDelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.MenuAnchor.GetMenuPosition (Underlying native function: GetMenuPosition 0x9b0ae90)
	struct FVector2D GetMenuPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.MenuAnchor.FitInWindow (Underlying native function: FitInWindow 0x9b0a378)
	void FitInWindow(bool& bFit); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MenuAnchor.Close (Underlying native function: Close 0x28449e8)
	void Close(); // (Final | Native | Public | BlueprintCallable)
};

