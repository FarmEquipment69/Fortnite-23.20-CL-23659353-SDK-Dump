// WidgetBlueprintGeneratedClass /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C
// Size: 0x318
class UTooltip-Basic-S_C : public UCommonUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UImage* hr; // 0x298 (0x8)
	class UHorizontalBox* BodyHBox; // 0x2a0 (0x8)
	class UHorizontalBox* HeaderHBox; // 0x2a8 (0x8)
	class UImage* IconHeader; // 0x2b0 (0x8)
	class USpacer* SpacerIcon; // 0x2b8 (0x8)
	class UCommonTextBlock* TextBody; // 0x2c0 (0x8)
	class UCommonTextBlock* TextHeader; // 0x2c8 (0x8)
	struct FText BodyText; // 0x2d0 (0x18)
	struct FText HeaderText; // 0x2e8 (0x18)
	class USlateBrushAsset* IconBrush; // 0x300 (0x8)
	class UClass* BodyStyle; // 0x308 (0x8)
	class UClass* HeaderStyle; // 0x310 (0x8)

	/* Functions */

	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Get Icon Brush (Has no native function)
	struct FSlateBrush GetIconBrush(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Get Header Text (Has no native function)
	struct FText GetHeaderText(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Get Body Text (Has no native function)
	struct FText GetBodyText(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.ExecuteUbergraph_Tooltip-Basic-S (Has no native function)
	void ExecuteUbergraphTooltipBasicS(int& EntryPoint, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable1, enum ESlateVisibility& TempbyteVariable4, enum ESlateVisibility& TempbyteVariable5, bool& TempboolVariable2, enum ESlateVisibility& TempbyteVariable6, enum ESlateVisibility& TempbyteVariable7, bool& TempboolVariable3, enum ESlateVisibility& TempbyteVariable8, enum ESlateVisibility& TempbyteVariable9, bool& CallFuncTextIsEmptyReturnValue, bool& CallFuncTextIsEmptyReturnValue1, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& K2NodeSelectDefault1, bool& CallFuncIsValidReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, enum ESlateVisibility& K2NodeSelectDefault2, enum ESlateVisibility& K2NodeSelectDefault3, bool& CallFuncIsValidClassReturnValue, bool& CallFuncIsValidClassReturnValue1, bool& TempboolVariable4, enum ESlateVisibility& K2NodeSelectDefault4); // (Final | 0x00008000)
};

