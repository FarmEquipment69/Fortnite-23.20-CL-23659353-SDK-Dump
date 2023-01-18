// BlueprintGeneratedClass /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C
// Size: 0x28
class UTooltipLibrary_C : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C.CreateXPTooltip (Has no native function)
	static void CreateXPTooltip(class APlayerController*& Owner, struct FText& Header, struct FText& CommanderXP, struct FText& BoostXP, struct FText& RestXP, struct FText& Body, class UObject*& WorldContext, class UCommonUserWidget*& Out, class UXpBarToolTip_C*& CallFuncCreateReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip (Has no native function)
	static void CreateCompareItemTooltip(class APlayerController*& OwningPlayer, struct FText& HeaderText, class USlateBrushAsset*& HeaderIcon, class UFortItem*& Item, class UFortItem*& ComparedItem, class UObject*& WorldContext, class UWidget*& ReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C.Create Item Tooltip (Has no native function)
	static void CreateItemTooltip(class APlayerController*& OwningPlayer, struct FText& HeaderText, class USlateBrushAsset*& HeaderIcon, class UFortItem*& Item, int& OverrideQuantity, class UObject*& WorldContext, class UWidget*& ReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text (Has no native function)
	static void SetEnabledAndTooltipText(class UWidget*& Widget, bool& Enabled, struct FText& TooltipText, class UObject*& WorldContext, class UUserWidget*& CallFuncCreateBasicTooltipOutput, bool& CallFuncTextIsEmptyReturnValue); // (Static | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip (Has no native function)
	static void CreateCustomTooltip(class APlayerController*& OwningPlayer, struct FText& HeaderText, class USlateBrushAsset*& IconBrush, class UUserWidget*& Widget, class UObject*& WorldContext, class UUserWidget*& Output, class UTooltip-Custom-S_C*& CallFuncCreateReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip (Has no native function)
	static void CreateBasicTooltip(class APlayerController*& OwningPlayer, struct FText& BodyText, struct FText& HeaderText, class USlateBrushAsset*& IconBrush, class UClass*& HeaderStyle, class UClass*& BodyStyle, class UObject*& WorldContext, class UUserWidget*& Output, class UTooltip-Basic-S_C*& CallFuncCreateReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

