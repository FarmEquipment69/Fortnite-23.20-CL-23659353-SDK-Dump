// WidgetBlueprintGeneratedClass /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C
// Size: 0x2d8
class UTooltip-Custom-S_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UImage* hr; // 0x270 (0x8)
	class UHorizontalBox* BodyHBox; // 0x278 (0x8)
	class UNamedSlot* ContentSlot; // 0x280 (0x8)
	class UHorizontalBox* HeaderHBox; // 0x288 (0x8)
	class UImage* IconHeader; // 0x290 (0x8)
	class USpacer* SpacerHeader; // 0x298 (0x8)
	class USpacer* SpacerIcon; // 0x2a0 (0x8)
	class UTextBlock* TextHeader; // 0x2a8 (0x8)
	struct FText HeaderText; // 0x2b0 (0x18)
	class USlateBrushAsset* IconBrush; // 0x2c8 (0x8)
	class UUserWidget* ContentWidget; // 0x2d0 (0x8)

	/* Functions */

	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush (Has no native function)
	struct FSlateBrush GetIconBrush(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text (Has no native function)
	struct FText GetHeaderText(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text (Has no native function)
	struct FText GetBodyText(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S (Has no native function)
	void ExecuteUbergraphTooltipCustomS(int& EntryPoint, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable1, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable2, enum ESlateVisibility& TempbyteVariable4, enum ESlateVisibility& TempbyteVariable5, bool& TempboolVariable3, enum ESlateVisibility& TempbyteVariable6, enum ESlateVisibility& TempbyteVariable7, bool& CallFuncTextIsEmptyReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncNotPreBoolReturnValue, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& K2NodeSelectDefault1, bool& CallFuncBooleanORReturnValue, enum ESlateVisibility& K2NodeSelectDefault2, bool& CallFuncIsValidReturnValue1, class UPanelSlot*& CallFuncAddChildReturnValue, enum ESlateVisibility& K2NodeSelectDefault3); // (Final | 0x00008000)
};

