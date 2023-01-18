// WidgetBlueprintGeneratedClass /Game/UI/Login/QualitySelection/QualityLevelSelectScreen.QualityLevelSelectScreen_C
// Size: 0x580
class UQualityLevelSelectScreen_C : public UFortQualityLevelSelectScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x538 (0x8)
	class UWidgetAnimation* Intro; // 0x540 (0x8)
	class UQualityModeSelectTile_C* ButtonSelectHighQuality1; // 0x548 (0x8)
	class USafeZone* Footersafezone; // 0x550 (0x8)
	class UImage* Image93; // 0x558 (0x8)
	class UCommonAnimatedSwitcher* OptionMessage; // 0x560 (0x8)
	class UCommonTextBlock* TextQualityLevelCalculated; // 0x568 (0x8)
	class UCommonTextBlock* TextQualityTitle; // 0x570 (0x8)
	class UHorizontalBox* TilesRow; // 0x578 (0x8)

	/* Functions */

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectScreen.QualityLevelSelectScreen_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectScreen.QualityLevelSelectScreen_C.ExecuteUbergraph_QualityLevelSelectScreen (Has no native function)
	void ExecuteUbergraphQualityLevelSelectScreen(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Final | 0x00008000)
};

