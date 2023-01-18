// Class /Script/FortniteUI.AthenaChallengeProgressBar
// Size: 0x280
class UAthenaChallengeProgressBar : public UUserWidget
{
	bool bHideProgressBar; // 0x268 (0x1)
	unsigned char unreflected_269[0x7]; // 0x269 (0x7) 
	class UProgressBar* ProgressBarStepsCompleted; // 0x270 (0x8)
	class UCommonRichTextBlock* RichTextProgress; // 0x278 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeProgressBar.SetPercentValueForMaterialNumber (Has no native function)
	void SetPercentValueForMaterialNumber(int& PercentValue); // (Event | Public | BlueprintEvent)
};

