// Class /Script/UMG.Button
// Size: 0x5a0
class UButton : public UContentWidget
{
	struct FButtonStyle WidgetStyle; // 0x160 (0x3b0)
	struct FLinearColor ColorAndOpacity; // 0x510 (0x10)
	struct FLinearColor BackgroundColor; // 0x520 (0x10)
	struct TEnumAsByte<EButtonClickMethod> ClickMethod; // 0x530 (0x1)
	struct TEnumAsByte<EButtonTouchMethod> TouchMethod; // 0x531 (0x1)
	struct TEnumAsByte<EButtonPressMethod> PressMethod; // 0x532 (0x1)
	bool IsFocusable; // 0x533 (0x1)
	unsigned char unreflected_534[0x4]; // 0x534 (0x4) 
	struct FMulticastInlineDelegate OnClicked; // 0x538 (0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x548 (0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x558 (0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x568 (0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x578 (0x10)
	unsigned char padding_588[0x18]; // 0x588 (0x18)

	/* Functions */

	// Function /Script/UMG.Button.SetTouchMethod (Underlying native function: SetTouchMethod 0x9aefa24)
	void SetTouchMethod(struct TEnumAsByte<EButtonTouchMethod>& InTouchMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Button.SetStyle (Underlying native function: SetStyle 0x9aef748)
	void SetStyle(struct FButtonStyle& InStyle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.Button.SetPressMethod (Underlying native function: SetPressMethod 0x9aef178)
	void SetPressMethod(struct TEnumAsByte<EButtonPressMethod>& InPressMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Button.SetColorAndOpacity (Underlying native function: SetColorAndOpacity 0x9aedfc8)
	void SetColorAndOpacity(struct FLinearColor& InColorAndOpacity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Button.SetClickMethod (Underlying native function: SetClickMethod 0x9aedec8)
	void SetClickMethod(struct TEnumAsByte<EButtonClickMethod>& InClickMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Button.SetBackgroundColor (Underlying native function: SetBackgroundColor 0x9aedb74)
	void SetBackgroundColor(struct FLinearColor& InBackgroundColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Button.IsPressed (Underlying native function: IsPressed 0x9aed030)
	bool IsPressed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

