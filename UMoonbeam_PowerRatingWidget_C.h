// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C
// Size: 0x370
class UMoonbeam_PowerRatingWidget_C : public UFortPlayerPowerRating
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2b8 (0x8)
	class UCommonTextBlock* BaseRatingValue; // 0x2c0 (0x8)
	class UCommonTextBlock* BaseRatingValueLarge; // 0x2c8 (0x8)
	class UImage* BuffedRatingOuterGlow; // 0x2d0 (0x8)
	class UHomebaseRatingBar_C* HomebaseRatingBar; // 0x2d8 (0x8)
	class UImage* ImagePower; // 0x2e0 (0x8)
	class UCommonWidgetSwitcherLegacy* ModeTypeSwitcher; // 0x2e8 (0x8)
	class UImage* MoonbeamPowerBack; // 0x2f0 (0x8)
	class UVerticalBox* OversizedMode; // 0x2f8 (0x8)
	class UImage* PowerIconGlow; // 0x300 (0x8)
	class UImage* RatingGlowLarge; // 0x308 (0x8)
	class USizeBox* RatingBar; // 0x310 (0x8)
	class UHorizontalBox* RegularMode; // 0x318 (0x8)
	class UCommonNumericTextBlock* TeamRatingValue; // 0x320 (0x8)
	class UCommonNumericTextBlock* TeamRatingValueLarge; // 0x328 (0x8)
	bool ShowDualPower; // 0x330 (0x1)
	bool ShowProgress; // 0x331 (0x1)
	bool ShowGlow; // 0x332 (0x1)
	bool UseLargeStyle; // 0x333 (0x1)
	bool UseOversizedMode; // 0x334 (0x1)
	unsigned char unreflected_335[0x3]; // 0x335 (0x3) 
	double InterpDuration; // 0x338 (0x8)
	class USoundBase* PowerIncreasedSound; // 0x340 (0x8)
	int PowerRatingNum; // 0x348 (0x4)
	struct FLinearColor PowerBackingColor; // 0x34c (0x10)
	struct FSlateColor FontColor; // 0x35c (0x14)

	/* Functions */

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor (Has no native function)
	void SetBackgroundColor(struct FLinearColor& NewColor); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState (Has no native function)
	void UpdateWidgetState(bool& IsContributingToTeamPowerRating, enum ESlateVisibility& TempbyteVariable, bool& TempboolHasBeenInitdVariable, bool& TempboolIsClosedVariable, enum ESlateVisibility& TempbyteVariable1, int& CallFuncGetBasePowerRatingReturnValue, bool& CallFuncHasTeamMembersReturnValue, int& CallFuncGetBasePowerRatingReturnValue1, bool& CallFuncNotEqualIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncHasTeamMembersReturnValue1, bool& TempboolVariable, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanANDReturnValue2, enum ESlateVisibility& K2NodeSelectDefault, struct FSlateBrush& K2NodeMakeStructSlateBrush, struct FSlateBrush& K2NodeMakeStructSlateBrush1, struct FSlateBrush& K2NodeMakeStructSlateBrush2, struct FSlateBrush& K2NodeMakeStructSlateBrush3); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated (Has no native function)
	void OnBasePowerRatingUpdated(int& BasePowerRating); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated (Has no native function)
	void OnTeamPowerRatingUpdated(int& TeamPowerRating); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated (Has no native function)
	void OnPowerRatingProgressUpdated(float& BaseRatingProgress, float& TeamRatingProgress); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged (Has no native function)
	void OnTeamMembershipChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget (Has no native function)
	void ExecuteUbergraphMoonbeamPowerRatingWidget(int& EntryPoint, bool& CallFuncHasTeamMembersReturnValue, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, int& K2NodeEventBasePowerRating, int& K2NodeEventTeamPowerRating, int64_t& CallFuncConvIntToInt64ReturnValue, float& CallFuncConvIntToFloatReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, float& K2NodeEventBaseRatingProgress, float& K2NodeEventTeamRatingProgress, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, double& CallFuncSubtractDoubleDoubleReturnValue, struct FText& CallFuncFormatReturnValue, enum ESlateVisibility& K2NodeSelectDefault, bool& K2NodeEventIsDesignTime, enum ESlateVisibility& TempbyteVariable2, bool& CallFuncGreaterDoubleDoubleReturnValue, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable1, enum ESlateVisibility& K2NodeSelectDefault1, int& CallFuncGetBasePowerRatingReturnValue, int& CallFuncGetTeamPowerRatingReturnValue, bool& TempboolVariable2, bool& CallFuncEqualEqualIntIntReturnValue, class UWidget*& K2NodeSelectDefault2, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast, float& CallFuncSetProgressBarSectionPercentPercentImplicitCast, float& CallFuncInterpolateToValueMaximumInterpolationDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

