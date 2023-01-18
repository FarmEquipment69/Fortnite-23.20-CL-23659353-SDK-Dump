// Class /Script/FortniteUI.FortErrorWindow
// Size: 0x5c0
class UFortErrorWindow : public UFortActivatablePanel
{
	class UCommonTextBlock* CommonTextTitle; // 0x518 (0x8)
	class UCommonTextBlock* CommonTextMainError; // 0x520 (0x8)
	class UScrollBox* ScrollBoxMainError; // 0x528 (0x8)
	class UTextBlock* TextBlockMainErrorCode; // 0x530 (0x8)
	class UTextBlock* TextBlockOverflowErrorCodes; // 0x538 (0x8)
	class UWidgetSwitcher* WidgetSwitcherSeverityImage; // 0x540 (0x8)
	class UImage* ImageMild; // 0x548 (0x8)
	class UImage* ImageSevere; // 0x550 (0x8)
	class UCommonButtonLegacy* CommonButtonClose; // 0x558 (0x8)
	struct FDataTableRowHandle BackActionRowHandle; // 0x560 (0x10)
	struct TArray<struct FText> MildTitles; // 0x570 (0x10)
	struct TArray<struct FText> SevereTitles; // 0x580 (0x10)
	uint32_t MaxOverflowErrorCodes; // 0x590 (0x4)
	unsigned char padding_594[0x2c]; // 0x594 (0x2c)

	/* Functions */

	// Function /Script/FortniteUI.FortErrorWindow.OnOverrideCloseButtonText (Has no native function)
	void OnOverrideCloseButtonText(struct FText& OverrideText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

