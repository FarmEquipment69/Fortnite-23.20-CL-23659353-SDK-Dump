// WidgetBlueprintGeneratedClass /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C
// Size: 0x2e8
class UWBP_ContentGate_Rating_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UCommonBorder* BorderBacking; // 0x270 (0x8)
	class UImage* EndSkew; // 0x278 (0x8)
	class UCommonTextBlock* RatingNumber; // 0x280 (0x8)
	class UCommonTextBlock* RatingText; // 0x288 (0x8)
	class UWBP_ContentGate_LockIcon_C* WBPContentGateLockIcon; // 0x290 (0x8)
	struct FLinearColor TextColor; // 0x298 (0x10)
	bool EnableBacking; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	struct FVector2D LockIconSize; // 0x2b0 (0x10)
	struct FVector2D LockSkewSize; // 0x2c0 (0x10)
	bool IsLockSkewVisible; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	int FontSize; // 0x2d4 (0x4)
	bool IsBGSkewed; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x7]; // 0x2d9 (0x7) 
	double PaddingScale; // 0x2e0 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetParentVisuals (Has no native function)
	void SetParentVisuals(struct FLinearColor& TextColor, int& TextSize, struct FVector2D& LockIconSize, struct FVector2D& LockSkewSize, bool& isLockSkewVisible, bool& HasBacking, bool& IsSkewed, double& PaddingScale, class UHorizontalBoxSlot*& CallFuncSlotAsHorizontalBoxSlotReturnValue, struct FSlateColor& K2NodeMakeStructSlateColor, struct FSlateColor& K2NodeMakeStructSlateColor1, double& CallFuncMultiplyDoubleDoubleReturnValue, class UHorizontalBoxSlot*& CallFuncSlotAsHorizontalBoxSlotReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue4, struct FMargin& K2NodeMakeStructMargin, double& CallFuncMultiplyDoubleDoubleReturnValue5, double& CallFuncMultiplyDoubleDoubleReturnValue6, double& CallFuncMultiplyDoubleDoubleReturnValue7, struct FMargin& K2NodeMakeStructMargin1, double& CallFuncMultiplyDoubleDoubleReturnValue8, double& CallFuncMultiplyDoubleDoubleReturnValue9, double& CallFuncMultiplyDoubleDoubleReturnValue10, double& CallFuncMultiplyDoubleDoubleReturnValue11, struct FMargin& K2NodeMakeStructMargin2, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, double& CallFuncMultiplyDoubleDoubleAImplicitCast2, double& CallFuncMultiplyDoubleDoubleAImplicitCast3, float& K2NodeMakeStructBottomImplicitCast, float& K2NodeMakeStructRightImplicitCast, float& K2NodeMakeStructTopImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast4, double& CallFuncMultiplyDoubleDoubleAImplicitCast5, double& CallFuncMultiplyDoubleDoubleAImplicitCast6, double& CallFuncMultiplyDoubleDoubleAImplicitCast7, float& K2NodeMakeStructLeftImplicitCast, float& K2NodeMakeStructBottomImplicitCast1, float& K2NodeMakeStructRightImplicitCast1, float& K2NodeMakeStructTopImplicitCast1, float& K2NodeMakeStructLeftImplicitCast1, double& CallFuncMultiplyDoubleDoubleAImplicitCast8, double& CallFuncMultiplyDoubleDoubleAImplicitCast9, double& CallFuncMultiplyDoubleDoubleAImplicitCast10, double& CallFuncMultiplyDoubleDoubleAImplicitCast11, float& K2NodeMakeStructBottomImplicitCast2, float& K2NodeMakeStructRightImplicitCast2, float& K2NodeMakeStructTopImplicitCast2, float& K2NodeMakeStructLeftImplicitCast2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetDetails (Has no native function)
	void SetDetails(bool& isDetailsVisible, struct FText& RatingText, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetRatingNumber (Has no native function)
	void SetRatingNumber(struct FText& RatingNumber); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetLockStatus (Has no native function)
	void SetLockStatus(bool& IsLocked); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetIconVisibility (Has no native function)
	void SetIconVisibility(bool& isIconVisible, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetBacking (Has no native function)
	void SetBacking(bool& HasBacking, bool& IsSkewed, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable1, enum ESlateVisibility& K2NodeSelectDefault, struct TEnumAsByte<ESlateBrushDrawType>& TempbyteVariable2, struct TEnumAsByte<ESlateBrushDrawType>& TempbyteVariable3, struct FSlateColor& K2NodeMakeStructSlateColor, struct TEnumAsByte<ESlateBrushDrawType>& K2NodeSelectDefault1, struct FSlateBrush& K2NodeMakeStructSlateBrush); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetVisuals (Has no native function)
	void SetVisuals(bool& IsVisible, bool& IsLocked, bool& isDetailsVisible, struct FText& RatingNumber, struct FText& RatingText, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.ExecuteUbergraph_WBP_ContentGate_Rating (Has no native function)
	void ExecuteUbergraphWBPContentGateRating(int& EntryPoint, bool& K2NodeEventIsDesignTime); // (Final | 0x00008000)
};

