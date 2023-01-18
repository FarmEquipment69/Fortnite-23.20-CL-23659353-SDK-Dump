// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C
// Size: 0x1480
class UPanelButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UNamedSlot* ContentSlot; // 0x1438 (0x8)
	class UClass* ControllerInputStyle; // 0x1440 (0x8)
	class UClass* MouseKeyboardStyle; // 0x1448 (0x8)
	struct TEnumAsByte<EHorizontalAlignment> InputActionHorizontalAlignment; // 0x1450 (0x1)
	struct TEnumAsByte<EVerticalAlignment> InputActionVerticalAlignment; // 0x1451 (0x1)
	unsigned char unreflected_1452[0x6]; // 0x1452 (0x6) 
	struct FVector2D InputActionRenderTranslation; // 0x1458 (0x10)
	bool InputActionUseRimBrush; // 0x1468 (0x1)
	unsigned char unreflected_1469[0x7]; // 0x1469 (0x7) 
	struct FVector2D InputActionRimBrushSize; // 0x1470 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.UpdateInputActionLayout (Has no native function)
	void UpdateInputActionLayout(struct FSlateBrush& RimBrush, struct FSlateBrush& K2NodeMakeStructSlateBrush, class UOverlaySlot*& K2NodeDynamicCastAsOverlaySlot, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.UpdateStyle (Has no native function)
	void UpdateStyle(bool& bUsingGamepad, struct FText& ActionText); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.InitializeButton (Has no native function)
	void InitializeButton(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.UpdateTextAndStyle (Has no native function)
	void UpdateTextAndStyle(class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature (Has no native function)
	void BndEvtCommonActionWidgetActionK2NodeComponentBoundEvent0OnInputMethodChangedDelegateSignature(bool& bUsingGamepad); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.OnTriggeredInputActionChanged (Has no native function)
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.OnActionProgress (Has no native function)
	void OnActionProgress(float& HeldPercent); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.OnActionComplete (Has no native function)
	void OnActionComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton (Has no native function)
	void ExecuteUbergraphPanelButton(int& EntryPoint, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& K2NodeEventIsDesignTime, bool& CallFuncHasAnyChildrenReturnValue, bool& TempboolVariable, bool& K2NodeComponentBoundEventbUsingGamepad, enum ESlateVisibility& K2NodeSelectDefault, struct FDataTableRowHandle& K2NodeEventNewTriggeredAction, float& K2NodeEventHeldPercent); // (Final | 0x00008000 | HasDefaults)
};

