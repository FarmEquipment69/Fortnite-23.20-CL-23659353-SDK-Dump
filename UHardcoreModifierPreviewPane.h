// Class /Script/FortniteUI.HardcoreModifierPreviewPane
// Size: 0x2c8
class UHardcoreModifierPreviewPane : public UCommonUserWidget
{
	class UFortLazyImage* ImageChallengePreview; // 0x290 (0x8)
	class UCommonTextBlock* TextBlockCurrentChallenge; // 0x298 (0x8)
	class UCommonTextBlock* TextTop50Count; // 0x2a0 (0x8)
	class UCommonTextBlock* TextTop25Count; // 0x2a8 (0x8)
	class UCommonTextBlock* TextTop10Count; // 0x2b0 (0x8)
	class UCommonTextBlock* TextTop5Count; // 0x2b8 (0x8)
	class UCommonTextBlock* TextVRCount; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.HardcoreModifierPreviewPane.SetAccoladeCount (Has no native function)
	void SetAccoladeCount(int& AccoladeRank, int& NumTimesEarned); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.HardcoreModifierPreviewPane.HandleMaxLevelCompleted (Has no native function)
	void HandleMaxLevelCompleted(int& Level); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.HardcoreModifierPreviewPane.BP_HandleModifierChanged (Has no native function)
	void BPHandleModifierChanged(); // (Event | Protected | BlueprintEvent)
};

