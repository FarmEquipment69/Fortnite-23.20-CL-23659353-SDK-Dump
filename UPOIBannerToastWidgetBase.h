// Class /Script/POIBannerUI.POIBannerToastWidgetBase
// Size: 0x318
class UPOIBannerToastWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x310 (0x2)
	unsigned char padding_312[0x6]; // 0x312 (0x6)

	/* Functions */

	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompFailed (Has no native function)
	void OnStompFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget (Has no native function)
	void OnStompedByOtherWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive (Has no native function)
	void K2OnBecomeInactive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive (Has no native function)
	void K2OnBecomeActive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag (Underlying native function: GetLocationTextFromTag 0x7529314)
	struct FText GetLocationTextFromTag(struct FGameplayTag& LocationTag); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

