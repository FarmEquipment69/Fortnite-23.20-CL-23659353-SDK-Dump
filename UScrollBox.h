// Class /Script/UMG.ScrollBox
// Size: 0xbc0
class UScrollBox : public UPanelWidget
{
	struct FScrollBoxStyle WidgetStyle; // 0x160 (0x310)
	struct FScrollBarStyle WidgetBarStyle; // 0x470 (0x6e0)
	struct TEnumAsByte<EOrientation> Orientation; // 0xb50 (0x1)
	enum ESlateVisibility ScrollBarVisibility; // 0xb51 (0x1)
	enum EConsumeMouseWheel ConsumeMouseWheel; // 0xb52 (0x1)
	unsigned char unreflected_b53[0x5]; // 0xb53 (0x5) 
	struct FVector2D ScrollbarThickness; // 0xb58 (0x10)
	struct FMargin ScrollbarPadding; // 0xb68 (0x10)
	bool AlwaysShowScrollbar; // 0xb78 (0x1)
	bool AlwaysShowScrollbarTrack; // 0xb79 (0x1)
	bool AllowOverscroll; // 0xb7a (0x1)
	bool BackPadScrolling; // 0xb7b (0x1)
	bool FrontPadScrolling; // 0xb7c (0x1)
	bool bAnimateWheelScrolling; // 0xb7d (0x1)
	enum EDescendantScrollDestination NavigationDestination; // 0xb7e (0x1)
	unsigned char unreflected_b7f[0x1]; // 0xb7f (0x1) 
	float NavigationScrollPadding; // 0xb80 (0x4)
	enum EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0xb84 (0x1)
	bool bAllowRightClickDragScrolling; // 0xb85 (0x1)
	unsigned char unreflected_b86[0x2]; // 0xb86 (0x2) 
	float WheelScrollMultiplier; // 0xb88 (0x4)
	unsigned char unreflected_b8c[0x4]; // 0xb8c (0x4) 
	struct FMulticastInlineDelegate OnUserScrolled; // 0xb90 (0x10)
	unsigned char padding_ba0[0x20]; // 0xba0 (0x20)

	/* Functions */

	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier (Underlying native function: SetWheelScrollMultiplier 0x9b12a54)
	void SetWheelScrollMultiplier(float& NewWheelScrollMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetScrollWhenFocusChanges (Underlying native function: SetScrollWhenFocusChanges 0x9b10d98)
	void SetScrollWhenFocusChanges(enum EScrollWhenFocusChanges& NewScrollWhenFocusChanges); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetScrollOffset (Underlying native function: SetScrollOffset 0x9b10d14)
	void SetScrollOffset(float& NewScrollOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetScrollBarVisibility (Underlying native function: SetScrollBarVisibility 0x9b10c50)
	void SetScrollBarVisibility(enum ESlateVisibility& NewScrollBarVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetScrollbarThickness (Underlying native function: SetScrollbarThickness 0x9b10eb8)
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetScrollbarPadding (Underlying native function: SetScrollbarPadding 0x9b10e18)
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetOrientation (Underlying native function: SetOrientation 0x9b10324)
	void SetOrientation(struct TEnumAsByte<EOrientation>& NewOrientation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetNavigationDestination (Underlying native function: SetNavigationDestination 0x9b0fbe4)
	void SetNavigationDestination(enum EDescendantScrollDestination& NewNavigationDestination); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel (Underlying native function: SetConsumeMouseWheel 0x9b0d60c)
	void SetConsumeMouseWheel(enum EConsumeMouseWheel& NewConsumeMouseWheel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling (Underlying native function: SetAnimateWheelScrolling 0x9b0cf80)
	void SetAnimateWheelScrolling(bool& bShouldAnimateWheelScrolling); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar (Underlying native function: SetAlwaysShowScrollbar 0x9b0cc94)
	void SetAlwaysShowScrollbar(bool& NewAlwaysShowScrollbar); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.SetAllowOverscroll (Underlying native function: SetAllowOverscroll 0x9b0cbfc)
	void SetAllowOverscroll(bool& NewAllowOverscroll); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView (Underlying native function: ScrollWidgetIntoView 0x9b0c710)
	void ScrollWidgetIntoView(class UWidget*& WidgetToFind, bool& AnimateScroll, enum EDescendantScrollDestination& ScrollDestination, float& Padding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.ScrollToStart (Underlying native function: ScrollToStart 0x9b0c660)
	void ScrollToStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.ScrollToEnd (Underlying native function: ScrollToEnd 0x9b0c64c)
	void ScrollToEnd(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction (Underlying native function: GetViewOffsetFraction 0x9b0b314)
	float GetViewOffsetFraction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ScrollBox.GetViewFraction (Underlying native function: GetViewFraction 0x9b0b29c)
	float GetViewFraction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd (Underlying native function: GetScrollOffsetOfEnd 0x9b0b0a0)
	float GetScrollOffsetOfEnd(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ScrollBox.GetScrollOffset (Underlying native function: GetScrollOffset 0x9b0b080)
	float GetScrollOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ScrollBox.EndInertialScrolling (Underlying native function: EndInertialScrolling 0x9b0a2f4)
	void EndInertialScrolling(); // (Final | Native | Public | BlueprintCallable)
};

