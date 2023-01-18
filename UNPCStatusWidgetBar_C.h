// WidgetBlueprintGeneratedClass /Game/Athena/HUD/Actors/NPCStatusWidgetBar.NPCStatusWidgetBar_C
// Size: 0x359
class UNPCStatusWidgetBar_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class USizeBox* BarSizeBox; // 0x270 (0x8)
	class UImage* ImageBarBG; // 0x278 (0x8)
	class UImage* ImageCastShadow; // 0x280 (0x8)
	class USimpleMaterialProgressBar_C* ProgressBarDelta; // 0x288 (0x8)
	class USimpleMaterialProgressBar_C* ProgressBarFill; // 0x290 (0x8)
	struct FLinearColor FillColor1; // 0x298 (0x10)
	struct FLinearColor FillColor2; // 0x2a8 (0x10)
	struct FLinearColor Delta1; // 0x2b8 (0x10)
	struct FLinearColor Delta2; // 0x2c8 (0x10)
	struct FLinearColor FillColor175Percent; // 0x2d8 (0x10)
	struct FLinearColor FillColor275Percent; // 0x2e8 (0x10)
	struct FLinearColor FillColor150Percent; // 0x2f8 (0x10)
	struct FLinearColor FillColor250Percent; // 0x308 (0x10)
	struct FLinearColor FillColor125Percent; // 0x318 (0x10)
	struct FLinearColor FillColor225Percent; // 0x328 (0x10)
	struct FLinearColor FillColor1100Percent; // 0x338 (0x10)
	struct FLinearColor FillColor2100Percent; // 0x348 (0x10)
	bool DifferentProgressColors; // 0x358 (0x1)

	/* Functions */

	// Function /Game/Athena/HUD/Actors/NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetHealthBarColorDependingHealth (Has no native function)
	void SetHealthBarColorDependingHealth(double& CurrentPercentage, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncLessDoubleDoubleReturnValue1, bool& CallFuncLessDoubleDoubleReturnValue2, bool& TempboolVariable4, struct FLinearColor& K2NodeSelectDefault, bool& CallFuncLessDoubleDoubleReturnValue3, bool& CallFuncLessDoubleDoubleReturnValue4, struct FLinearColor& K2NodeSelectDefault1, bool& TempboolVariable5, bool& CallFuncLessDoubleDoubleReturnValue5, struct FLinearColor& K2NodeSelectDefault2, struct FLinearColor& K2NodeSelectDefault3, struct FLinearColor& K2NodeSelectDefault4, struct FLinearColor& K2NodeSelectDefault5); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidgetBar.NPCStatusWidgetBar_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetPercent (Has no native function)
	void SetPercent(double& Value); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetNumPips (Has no native function)
	void SetNumPips(int& NumPips); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidgetBar.NPCStatusWidgetBar_C.ExecuteUbergraph_NPCStatusWidgetBar (Has no native function)
	void ExecuteUbergraphNPCStatusWidgetBar(int& EntryPoint, double& K2NodeCustomEventValue, bool& K2NodeEventIsDesignTime, int& K2NodeCustomEventNumPips, float& CallFuncSetProgressProgressImplicitCast, float& CallFuncAnimateProgressFromCurrentEndImplicitCast); // (Final | 0x00008000)
};

