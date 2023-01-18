// Class /Script/FortniteUI.FortDataDownloadBar
// Size: 0x350
class UFortDataDownloadBar : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x10]; // 0x2d0 (0x10) 
	bool bWidthCustomScaling; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	class UWidget* Container; // 0x2e8 (0x8)
	float BarWidthPercentage; // 0x2f0 (0x4)
	float UpdateScalingRateInSeconds; // 0x2f4 (0x4)
	float UpdateEstimatedTimeLeftRateInSeconds; // 0x2f8 (0x4)
	bool bBarExpanded; // 0x2fc (0x1)
	bool bProgressDisplayPaused; // 0x2fd (0x1)
	unsigned char unreflected_2fe[0x2]; // 0x2fe (0x2) 
	class USizeBox* BarSizeBox; // 0x300 (0x8)
	class UImage* BarProgressionImage; // 0x308 (0x8)
	class UCommonTextBlock* BarPercentageNumber; // 0x310 (0x8)
	class UCommonTextBlock* StatusText; // 0x318 (0x8)
	class UCommonTextBlock* BarErrorText; // 0x320 (0x8)
	class UFortEventDateTimeTextBlock* RemainingTimeEstimateText; // 0x328 (0x8)
	unsigned char padding_330[0x20]; // 0x330 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortDataDownloadBar.SetStatusText (Underlying native function: SetStatusText 0xa95516c)
	void SetStatusText(struct FText& StatusText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortDataDownloadBar.SetRemainingTimeEstimate (Underlying native function: SetRemainingTimeEstimate 0xa955004)
	void SetRemainingTimeEstimate(struct FTimespan*& RemainingTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortDataDownloadBar.SetProgress (Underlying native function: SetProgress 0xa954f80)
	void SetProgress(float& Progress); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortDataDownloadBar.OnStatusTextChanged (Has no native function)
	void OnStatusTextChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortDataDownloadBar.OnExpandClose (Has no native function)
	void OnExpandClose(bool& IsExpanded); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortDataDownloadBar.OnDownloadCompleted (Has no native function)
	void OnDownloadCompleted(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortDataDownloadBar.ExpandClose (Underlying native function: ExpandClose 0xa953bd8)
	void ExpandClose(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortDataDownloadBar.DisplayErrorAnimation (Has no native function)
	void DisplayErrorAnimation(bool& ErrorState); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

