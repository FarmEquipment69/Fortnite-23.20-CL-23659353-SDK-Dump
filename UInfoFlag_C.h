// WidgetBlueprintGeneratedClass /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C
// Size: 0x2e0
class UInfoFlag_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UImage* BGGradient; // 0x270 (0x8)
	class UCommonRichTextBlock* CommonRichTextBlock114; // 0x278 (0x8)
	class USizeBox* SizeBox0; // 0x280 (0x8)
	class UImage* Trim; // 0x288 (0x8)
	struct FLinearColor TrimColor; // 0x290 (0x10)
	struct FLinearColor GradientColor; // 0x2a0 (0x10)
	double TrimWidth; // 0x2b0 (0x8)
	struct FText InfoText; // 0x2b8 (0x18)
	double GradientDistance; // 0x2d0 (0x8)
	double MaxWidth; // 0x2d8 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.UpdateText (Has no native function)
	void UpdateText(struct FText& Text); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.UpdateGradientColor (Has no native function)
	void UpdateGradientColor(struct FLinearColor& Color); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.UpdateTrimColor (Has no native function)
	void UpdateTrimColor(struct FLinearColor& Color); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.ExecuteUbergraph_InfoFlag (Has no native function)
	void ExecuteUbergraphInfoFlag(int& EntryPoint, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& K2NodeEventIsDesignTime, struct FVector2D& CallFuncMakeVector2DReturnValue, struct FSlateBrush& K2NodeMakeStructSlateBrush, class UOverlaySlot*& CallFuncSlotAsOverlaySlotReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FMargin& K2NodeMakeStructMargin, struct FVector2D& CallFuncMakeVector2DReturnValue1, bool& CallFuncNearlyEqualFloatFloatReturnValue, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, enum ESlateVisibility& K2NodeSelectDefault, float& K2NodeMakeStructLeftImplicitCast, float& K2NodeMakeStructTopImplicitCast, float& K2NodeMakeStructRightImplicitCast, float& K2NodeMakeStructBottomImplicitCast, float& CallFuncSetMaxDesiredWidthInMaxDesiredWidthImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

