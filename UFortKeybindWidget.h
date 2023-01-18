// Class /Script/FortniteUI.FortKeybindWidget
// Size: 0xb30
class UFortKeybindWidget : public UCommonUserWidget
{
	struct FName BoundAction; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	struct TArray<struct FName> BoundActionFallbacks; // 0x298 (0x10)
	float AxisScale; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	struct FKey BoundKeyFallback; // 0x2b0 (0x18)
	enum ECommonInputType InputTypeOverride; // 0x2c8 (0x1)
	enum ECommonGamepadType GamepadTypeOverride; // 0x2c9 (0x1)
	unsigned char unreflected_2ca[0x2]; // 0x2ca (0x2) 
	struct FName PresetNameOverride; // 0x2cc (0x4)
	bool bForcedHoldKeybind; // 0x2d0 (0x1)
	enum EFortKeybindForcedHoldStatus ForcedHoldKeybindStatus; // 0x2d1 (0x1)
	bool bIsHoldKeybind; // 0x2d2 (0x1)
	bool bShowKeybindBorder; // 0x2d3 (0x1)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	struct FVector2D FrameSize; // 0x2d8 (0x10)
	bool bShowTimeCountDown; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x7]; // 0x2e9 (0x7) 
	struct FKey BoundKey; // 0x2f0 (0x18)
	unsigned char unreflected_308[0x8]; // 0x308 (0x8) 
	struct FSlateBrush HoldProgressBrush; // 0x310 (0xc0)
	struct FSlateBrush KeyBindTextBorder; // 0x3d0 (0xc0)
	bool bShowUnboundStatus; // 0x490 (0x1)
	unsigned char unreflected_491[0x7]; // 0x491 (0x7) 
	struct FSlateFontInfo KeyBindTextFont; // 0x498 (0x58)
	struct FSlateFontInfo CountdownTextFont; // 0x4f0 (0x58)
	struct FMeasuredText CountdownText; // 0x548 (0x30)
	struct FMeasuredText KeybindText; // 0x578 (0x30)
	struct FMargin KeybindTextPadding; // 0x5a8 (0x10)
	struct FVector2D KeybindFrameMinimumSize; // 0x5b8 (0x10)
	struct FName PercentageMaterialParameterName; // 0x5c8 (0x4)
	unsigned char unreflected_5cc[0x4]; // 0x5cc (0x4) 
	class UMaterialInstanceDynamic* ProgressPercentageMID; // 0x5d0 (0x8)
	struct TEnumAsByte<EFortBrushSize> BrushSize; // 0x5d8 (0x1)
	unsigned char unreflected_5d9[0x7]; // 0x5d9 (0x7) 
	struct FFortMultiSizeBrush FrameMultiBrush; // 0x5e0 (0x480)
	unsigned char unreflected_a60[0x10]; // 0xa60 (0x10) 
	struct FSlateBrush CachedKeyBrush; // 0xa70 (0xc0)

	/* Functions */

	// Function /Script/FortniteUI.FortKeybindWidget.UpdateKeybindWidget (Underlying native function: UpdateKeybindWidget 0x296f234)
	void UpdateKeybindWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.StopHoldProgress (Underlying native function: StopHoldProgress 0xa702728)
	void StopHoldProgress(struct FName& HoldActionName, bool& bCompletedSuccessfully); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteUI.FortKeybindWidget.StartHoldProgress (Underlying native function: StartHoldProgress 0xa702660)
	void StartHoldProgress(struct FName& HoldActionName, float& HoldDuration); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteUI.FortKeybindWidget.SetShowProgressCountDown (Underlying native function: SetShowProgressCountDown 0xa702308)
	void SetShowProgressCountDown(bool& bShow); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.SetPresetNameOverride (Underlying native function: SetPresetNameOverride 0xa70228c)
	void SetPresetNameOverride(struct FName& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.SetForcedHoldKeybindStatus (Underlying native function: SetForcedHoldKeybindStatus 0xa701ac8)
	void SetForcedHoldKeybindStatus(enum EFortKeybindForcedHoldStatus& InForcedHoldKeybindStatus); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.SetForcedHoldKeybind (Underlying native function: SetForcedHoldKeybind 0xa701a40)
	void SetForcedHoldKeybind(bool& InForcedHoldKeybind); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.SetBrushSize (Underlying native function: SetBrushSize 0xa7017a4)
	void SetBrushSize(struct TEnumAsByte<EFortBrushSize>& InBrushSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.SetBoundKey (Underlying native function: SetBoundKey 0xa7016cc)
	void SetBoundKey(struct FKey& NewBoundAction); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.SetBoundAction (Underlying native function: SetBoundAction 0x2874d0c)
	void SetBoundAction(struct FName& NewBoundAction); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.SetAxisScale (Underlying native function: SetAxisScale 0x9c9d11c)
	void SetAxisScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortKeybindWidget.IsHoldKeybind (Underlying native function: IsHoldKeybind 0xa6ff9c0)
	bool IsHoldKeybind(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortKeybindWidget.IsBoundKeyValid (Underlying native function: IsBoundKeyValid 0xa6ff938)
	bool IsBoundKeyValid(); // (Final | Native | Public | Const)

	// Function /Script/FortniteUI.FortKeybindWidget.GetBrushSize (Underlying native function: GetBrushSize 0xa6fe0e0)
	struct TEnumAsByte<EFortBrushSize> GetBrushSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortKeybindWidget.GetBrushForKey (Underlying native function: GetBrushForKey 0xa6fdfe4)
	bool GetBrushForKey(struct TEnumAsByte<EFortBrushSize>& InBrushSize, struct FSlateBrush& Brush); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

