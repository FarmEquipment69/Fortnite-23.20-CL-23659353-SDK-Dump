// Class /Script/FortniteUI.FortGadgetsWidgetBase
// Size: 0x2b0
class UFortGadgetsWidgetBase : public UCommonUserWidget
{
	class UFortLazyImage* GadgetIcon1; // 0x290 (0x8)
	class UFortLazyImage* GadgetIcon2; // 0x298 (0x8)
	struct TArray<class UFortLazyImage*> Gadgets; // 0x2a0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortGadgetsWidgetBase.OnGenerateTooltipWidget (Has no native function)
	class UWidget* OnGenerateTooltipWidget(struct FText& Header, struct FText& Description); // (Event | Public | HasOutParms | BlueprintEvent)
};

