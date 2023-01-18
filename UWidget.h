// Class /Script/UMG.Widget
// Size: 0x148
class UWidget : public UVisual
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class UPanelSlot* Slot; // 0x30 (0x8)
	struct FDelegate bIsEnabledDelegate; // 0x38 (0xc)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FText ToolTipText; // 0x48 (0x18)
	struct FDelegate ToolTipTextDelegate; // 0x60 (0xc)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	class UWidget* ToolTipWidget; // 0x70 (0x8)
	struct FDelegate ToolTipWidgetDelegate; // 0x78 (0xc)
	struct FDelegate VisibilityDelegate; // 0x84 (0xc)
	struct FWidgetTransform RenderTransform; // 0x90 (0x38)
	struct FVector2D RenderTransformPivot; // 0xc8 (0x10)
	enum EFlowDirectionPreference FlowDirectionPreference; // 0xd8 (0x1)
	unsigned char bIsVariable; // 0xd9 (0x1)
	unsigned char bCreatedByConstructionScript; // 0xd9 (0x1)
	unsigned char bIsEnabled; // 0xd9 (0x1)
	unsigned char bOverrideCursor; // 0xd9 (0x1)
	unsigned char bIsVolatile; // 0xd9 (0x1)
	struct TEnumAsByte<EMouseCursor> Cursor; // 0xda (0x1)
	enum EWidgetClipping Clipping; // 0xdb (0x1)
	enum ESlateVisibility Visibility; // 0xdc (0x1)
	unsigned char unreflected_dd[0x3]; // 0xdd (0x3) 
	float RenderOpacity; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	class USlateAccessibleWidgetData* AccessibleWidgetData; // 0xe8 (0x8)
	class UWidgetNavigation* Navigation; // 0xf0 (0x8)
	unsigned char unreflected_f8[0x20]; // 0xf8 (0x20) 
	struct TArray<class UPropertyBinding*> NativeBindings; // 0x118 (0x10)
	unsigned char padding_128[0x20]; // 0x128 (0x20)

	/* Functions */

	// Function /Script/UMG.Widget.SetVisibility (Underlying native function: SetVisibility 0xda4bd0)
	void SetVisibility(enum ESlateVisibility& InVisibility); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetUserFocus (Underlying native function: SetUserFocus 0x9b12218)
	void SetUserFocus(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetToolTipText (Underlying native function: SetToolTipText 0x9b120c4)
	void SetToolTipText(struct FText& InToolTipText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.Widget.SetToolTip (Underlying native function: SetToolTip 0x9b12044)
	void SetToolTip(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetRenderTranslation (Underlying native function: SetRenderTranslation 0x1d02bac)
	void SetRenderTranslation(struct FVector2D& Translation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Widget.SetRenderTransformPivot (Underlying native function: SetRenderTransformPivot 0x273bab4)
	void SetRenderTransformPivot(struct FVector2D& Pivot); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Widget.SetRenderTransformAngle (Underlying native function: SetRenderTransformAngle 0x276a5ec)
	void SetRenderTransformAngle(float& Angle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetRenderTransform (Underlying native function: SetRenderTransform 0x22d3554)
	void SetRenderTransform(struct FWidgetTransform& InTransform); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetRenderShear (Underlying native function: SetRenderShear 0x264ddd4)
	void SetRenderShear(struct FVector2D& Shear); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Widget.SetRenderScale (Underlying native function: SetRenderScale 0x257cc90)
	void SetRenderScale(struct FVector2D& Scale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Widget.SetRenderOpacity (Underlying native function: SetRenderOpacity 0x22e5d00)
	void SetRenderOpacity(float& InOpacity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetNavigationRuleExplicit (Underlying native function: SetNavigationRuleExplicit 0x9b10004)
	void SetNavigationRuleExplicit(enum EUINavigation& Direction, class UWidget*& InWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary (Underlying native function: SetNavigationRuleCustomBoundary 0x9b0ff28)
	void SetNavigationRuleCustomBoundary(enum EUINavigation& Direction, struct FDelegate& InCustomDelegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetNavigationRuleCustom (Underlying native function: SetNavigationRuleCustom 0x9b0fe4c)
	void SetNavigationRuleCustom(enum EUINavigation& Direction, struct FDelegate& InCustomDelegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetNavigationRuleBase (Underlying native function: SetNavigationRuleBase 0x9b0fd88)
	void SetNavigationRuleBase(enum EUINavigation& Direction, enum EUINavigationRule& Rule); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetNavigationRule (Underlying native function: SetNavigationRule 0x9b0fc64)
	void SetNavigationRule(enum EUINavigation& Direction, enum EUINavigationRule& Rule, struct FName& WidgetToFocus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetKeyboardFocus (Underlying native function: SetKeyboardFocus 0x9b0f220)
	void SetKeyboardFocus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetIsEnabled (Underlying native function: SetIsEnabled 0x15e2f3c)
	void SetIsEnabled(bool& bInIsEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetFocus (Underlying native function: SetFocus 0xeac16c)
	void SetFocus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetCursor (Underlying native function: SetCursor 0x9b0d690)
	void SetCursor(struct TEnumAsByte<EMouseCursor>& InCursor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetClipping (Underlying native function: SetClipping 0x9b0d3c4)
	void SetClipping(enum EWidgetClipping& InClipping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.SetAllNavigationRules (Underlying native function: SetAllNavigationRules 0x9b0ca28)
	void SetAllNavigationRules(enum EUINavigationRule& Rule, struct FName& WidgetToFocus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.ResetCursor (Underlying native function: ResetCursor 0x9b0c594)
	void ResetCursor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.RemoveFromParent (Underlying native function: RemoveFromParent 0x14f9024)
	void RemoveFromParent(); // (Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.Widget.OnReply__DelegateSignature (Has no native function)
	struct FEventReply OnReplyDelegateSignature(); // (Public | Delegate)

	// DelegateFunction /Script/UMG.Widget.OnPointerEvent__DelegateSignature (Has no native function)
	struct FEventReply OnPointerEventDelegateSignature(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (Public | Delegate | HasOutParms)

	// Function /Script/UMG.Widget.K2_RemoveFieldValueChangedDelegate (Underlying native function: K2_RemoveFieldValueChangedDelegate 0x9b0bad8)
	void K2RemoveFieldValueChangedDelegate(struct FFieldNotificationId& FieldId, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.K2_BroadcastFieldValueChanged (Underlying native function: K2_BroadcastFieldValueChanged 0x9b0ba38)
	void K2BroadcastFieldValueChanged(struct FFieldNotificationId& FieldId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.Widget.K2_AddFieldValueChangedDelegate (Underlying native function: K2_AddFieldValueChangedDelegate 0x9b0b95c)
	void K2AddFieldValueChangedDelegate(struct FFieldNotificationId& FieldId, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.IsVisible (Underlying native function: IsVisible 0x23553d8)
	bool IsVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.IsRendered (Underlying native function: IsRendered 0x9b0b894)
	bool IsRendered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.IsInViewport (Underlying native function: IsInViewport 0x9b0b7d4)
	bool IsInViewport(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.IsHovered (Underlying native function: IsHovered 0x18f39fc)
	bool IsHovered(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility (Underlying native function: InvalidateLayoutAndVolatility 0x295b8e8)
	void InvalidateLayoutAndVolatility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.HasUserFocusedDescendants (Underlying native function: HasUserFocusedDescendants 0x9b0b744)
	bool HasUserFocusedDescendants(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.HasUserFocus (Underlying native function: HasUserFocus 0x9b0b6b4)
	bool HasUserFocus(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.HasMouseCaptureByUser (Underlying native function: HasMouseCaptureByUser 0x9b0b5bc)
	bool HasMouseCaptureByUser(int& UserIndex, int& PointerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.HasMouseCapture (Underlying native function: HasMouseCapture 0x9b0b598)
	bool HasMouseCapture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.HasKeyboardFocus (Underlying native function: HasKeyboardFocus 0x9b0b574)
	bool HasKeyboardFocus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.HasFocusedDescendants (Underlying native function: HasFocusedDescendants 0x9b0b550)
	bool HasFocusedDescendants(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.HasAnyUserFocus (Underlying native function: HasAnyUserFocus 0x2740560)
	bool HasAnyUserFocus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GetWidget__DelegateSignature (Has no native function)
	class UWidget* GetWidgetDelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.Widget.GetVisibility (Underlying native function: GetVisibility 0x2f5ff78)
	enum ESlateVisibility GetVisibility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetTickSpaceGeometry (Underlying native function: GetTickSpaceGeometry 0x9b0a644)
	struct FGeometry GetTickSpaceGeometry(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GetText__DelegateSignature (Has no native function)
	struct FText GetTextDelegateSignature(); // (Public | Delegate)

	// DelegateFunction /Script/UMG.Widget.GetSlateVisibility__DelegateSignature (Has no native function)
	enum ESlateVisibility GetSlateVisibilityDelegateSignature(); // (Public | Delegate)

	// DelegateFunction /Script/UMG.Widget.GetSlateColor__DelegateSignature (Has no native function)
	struct FSlateColor GetSlateColorDelegateSignature(); // (Public | Delegate)

	// DelegateFunction /Script/UMG.Widget.GetSlateBrush__DelegateSignature (Has no native function)
	struct FSlateBrush GetSlateBrushDelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.Widget.GetRenderTransformAngle (Underlying native function: GetRenderTransformAngle 0x71cfd34)
	float GetRenderTransformAngle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetRenderOpacity (Underlying native function: GetRenderOpacity 0x248b65c)
	float GetRenderOpacity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetParent (Underlying native function: GetParent 0x9b0aff4)
	class UPanelWidget* GetParent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetPaintSpaceGeometry (Underlying native function: GetPaintSpaceGeometry 0x9b0afc8)
	struct FGeometry GetPaintSpaceGeometry(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetOwningPlayer (Underlying native function: GetOwningPlayer 0x24c1328)
	class APlayerController* GetOwningPlayer(); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetOwningLocalPlayer (Underlying native function: GetOwningLocalPlayer 0x2da7550)
	class ULocalPlayer* GetOwningLocalPlayer(); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GetMouseCursor__DelegateSignature (Has no native function)
	struct TEnumAsByte<EMouseCursor> GetMouseCursorDelegateSignature(); // (Public | Delegate)

	// DelegateFunction /Script/UMG.Widget.GetLinearColor__DelegateSignature (Has no native function)
	struct FLinearColor GetLinearColorDelegateSignature(); // (Public | Delegate | HasDefaults)

	// Function /Script/UMG.Widget.GetIsEnabled (Underlying native function: GetIsEnabled 0x18f5ba8)
	bool GetIsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GetInt32__DelegateSignature (Has no native function)
	int GetInt32DelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.Widget.GetGameInstance (Underlying native function: GetGameInstance 0x9b0aa20)
	class UGameInstance* GetGameInstance(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GetFloat__DelegateSignature (Has no native function)
	float GetFloatDelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.Widget.GetDesiredSize (Underlying native function: GetDesiredSize 0x2267930)
	struct FVector2D GetDesiredSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetClipping (Underlying native function: GetClipping 0x9b0a738)
	enum EWidgetClipping GetClipping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GetCheckBoxState__DelegateSignature (Has no native function)
	enum ECheckBoxState GetCheckBoxStateDelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.Widget.GetCachedGeometry (Underlying native function: GetCachedGeometry 0x9b0a644)
	struct FGeometry GetCachedGeometry(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GetBool__DelegateSignature (Has no native function)
	bool GetBoolDelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.Widget.GetAccessibleText (Underlying native function: GetAccessibleText 0x9b0a528)
	struct FText GetAccessibleText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Widget.GetAccessibleSummaryText (Underlying native function: GetAccessibleSummaryText 0x9b0a4ac)
	struct FText GetAccessibleSummaryText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature (Has no native function)
	class UWidget* GenerateWidgetForStringDelegateSignature(struct FString& Item); // (Public | Delegate)

	// DelegateFunction /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature (Has no native function)
	class UWidget* GenerateWidgetForObjectDelegateSignature(class UObject*& Item); // (Public | Delegate)

	// Function /Script/UMG.Widget.ForceVolatile (Underlying native function: ForceVolatile 0x9b0a410)
	void ForceVolatile(bool& bForce); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Widget.ForceLayoutPrepass (Underlying native function: ForceLayoutPrepass 0x228e8e0)
	void ForceLayoutPrepass(); // (Final | Native | Public | BlueprintCallable)
};

