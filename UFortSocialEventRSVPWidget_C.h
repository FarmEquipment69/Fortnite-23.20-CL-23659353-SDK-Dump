// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C
// Size: 0x291
class UFortSocialEventRSVPWidget_C : public UFortSocialEventRSVPWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UOverlay* OverlayAdditionalEvents; // 0x270 (0x8)
	class UCommonTextBlock* TextAdditionalEvents; // 0x278 (0x8)
	class UCommonTextBlock* TextEventName; // 0x280 (0x8)
	class UCommonTextBlock* TextMonthDay; // 0x288 (0x8)
	enum ESlateVisibility InVisibility; // 0x290 (0x1)

	/* Functions */

	// Function /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.OnRefreshDisplay (Has no native function)
	void OnRefreshDisplay(struct FText& EventName, struct FText& Date, struct FText& AdditionalEvents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.ExecuteUbergraph_FortSocialEventRSVPWidget (Has no native function)
	void ExecuteUbergraphFortSocialEventRSVPWidget(int& EntryPoint, struct FText& K2NodeEventEventName, struct FText& K2NodeEventDate, struct FText& K2NodeEventAdditionalEvents, bool& CallFuncTextIsEmptyReturnValue, bool& CallFuncTextIsEmptyReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

