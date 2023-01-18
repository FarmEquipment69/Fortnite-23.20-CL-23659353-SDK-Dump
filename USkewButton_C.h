// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C
// Size: 0x1493
class USkewButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UWidgetAnimation* Released; // 0x1438 (0x8)
	class UWidgetAnimation* Pressed; // 0x1440 (0x8)
	class UWidgetAnimation* Hover; // 0x1448 (0x8)
	class UImage* ImageButtonFill; // 0x1450 (0x8)
	class UImage* ImageShadow; // 0x1458 (0x8)
	class UNamedSlot* NamedSlotButtonContent; // 0x1460 (0x8)
	class UOverlay* OverlaySkewBrushes; // 0x1468 (0x8)
	struct FLinearColor ButtonColor; // 0x1470 (0x10)
	struct FLinearColor HoverColor; // 0x1480 (0x10)
	bool Chip; // 0x1490 (0x1)
	bool Skew; // 0x1491 (0x1)
	bool NoHoverColor; // 0x1492 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseButtonUp (Has no native function)
	struct FEventReply OnMouseButtonUp(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseButtonDown (Has no native function)
	struct FEventReply OnMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnTouchEnded (Has no native function)
	struct FEventReply OnTouchEnded(struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnTouchStarted (Has no native function)
	struct FEventReply OnTouchStarted(struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.BP_OnClicked (Has no native function)
	void BPOnClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.ExecuteUbergraph_SkewButton (Has no native function)
	void ExecuteUbergraphSkewButton(int& EntryPoint, bool& TempboolVariable, double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncRandomFloatInRangeReturnValue1, struct FVector2D& CallFuncMakeVector2DReturnValue, float& CallFuncRGBToHSVH, float& CallFuncRGBToHSVS, float& CallFuncRGBToHSVV, float& CallFuncRGBToHSVA, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FLinearColor& CallFuncHSVToRGBReturnValue, bool& TempboolVariable1, class UMaterialInterface*& TempobjectVariable, class UMaterialInterface*& TempobjectVariable1, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, class UMaterialInterface*& K2NodeSelectDefault, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, struct FPointerEvent& K2NodeEventMouseEvent, bool& K2NodeEventIsDesignTime, float& CallFuncBreakColorR, float& CallFuncBreakColorG, float& CallFuncBreakColorB, float& CallFuncBreakColorA, bool& CallFuncEqualEqualDoubleDoubleReturnValue, struct FLinearColor& K2NodeSelectDefault1, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, float& CallFuncHSVToRGBVImplicitCast, float& CallFuncHSVToRGBSImplicitCast, double& CallFuncEqualEqualDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

