// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C
// Size: 0x32a
class UNormalBangWrapper_C : public UFortBangWrapper_NUI
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2a8 (0x8)
	class UWidgetAnimation* IntroSuperBang; // 0x2b0 (0x8)
	class UWidgetAnimation* Intro; // 0x2b8 (0x8)
	class UWidgetAnimation* TutorialGlow; // 0x2c0 (0x8)
	class USizeBox* BangBox; // 0x2c8 (0x8)
	class USizeBox* BigBang; // 0x2d0 (0x8)
	class USizeBox* BigBangCount; // 0x2d8 (0x8)
	class UCommonTextBlock* CommonTextBlock0; // 0x2e0 (0x8)
	class UNamedSlot* Content; // 0x2e8 (0x8)
	class UCommonTextBlock* CountText; // 0x2f0 (0x8)
	class UWidgetSwitcher* ModeSwitcher; // 0x2f8 (0x8)
	class USizeBox* SmallBang; // 0x300 (0x8)
	class USizeBox* SmallBangCount; // 0x308 (0x8)
	class USizeBox* SuperBang; // 0x310 (0x8)
	class UCommonBorder* TutorialBorder; // 0x318 (0x8)
	bool UseSmallVersion; // 0x320 (0x1)
	unsigned char unreflected_321[0x3]; // 0x321 (0x3) 
	int Count; // 0x324 (0x4)
	bool bUseSuperBangNoCount; // 0x328 (0x1)
	bool ShouldSuppressBang; // 0x329 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.SetShouldSuppressBang (Has no native function)
	void SetShouldSuppressBang(bool& ShouldSuppressBang, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.InitialReset (Has no native function)
	void InitialReset(float& CallFuncGetEndTimeReturnValue, float& CallFuncGetEndTimeReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.TriggerReset (Has no native function)
	void TriggerReset(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.TriggerIntro (Has no native function)
	void TriggerIntro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation (Has no native function)
	void AdjustBangImageTranslation(struct FVector2D& Translation); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version (Has no native function)
	void UpdateBangIconVersion(int& InCount, int& TempintVariable, int& TempintVariable1, bool& TempboolVariable, int& TempintVariable2, int& TempintVariable3, bool& TempboolVariable1, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, int& K2NodeSelectDefault, int& K2NodeSelectDefault1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle (Has no native function)
	void SetTutorialBorderStyle(class UClass*& BorderStyle); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.OnStopCallout (Has no native function)
	void OnStopCallout(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.OnStartCallout (Has no native function)
	void OnStartCallout(struct FName& TutorialObjectiveName, enum ETutorialType& TutorialType); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged (Has no native function)
	void OnBangStateChanged(bool& bEnabled, int& Count); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper (Has no native function)
	void ExecuteUbergraphNormalBangWrapper(int& EntryPoint, bool& K2NodeEventbEnabled, int& K2NodeEventCount, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault, struct FName& K2NodeEventTutorialObjectiveName, enum ETutorialType& K2NodeEventTutorialType, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& K2NodeEventIsDesignTime, struct FText& CallFuncConvIntToTextReturnValue); // (Final | 0x00008000 | HasDefaults)
};

