// Class /Script/FortniteUI.FortHUDQualityLevelSelectTimer
// Size: 0x2d0
class UFortHUDQualityLevelSelectTimer : public UCommonUserWidget
{
	unsigned char unreflected_290[0x18]; // 0x290 (0x18) 
	class UImage* ImageProgressBar; // 0x2a8 (0x8)
	class UCommonTextBlock* TextTimeRemaining; // 0x2b0 (0x8)
	float TimerDuration; // 0x2b8 (0x4)
	struct FName ProgressBarMaterialParamName; // 0x2bc (0x4)
	unsigned char padding_2c0[0x10]; // 0x2c0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDQualityLevelSelectTimer.UpdateTimeRemainingText (Underlying native function: UpdateTimeRemainingText 0xa6dc8ec)
	void UpdateTimeRemainingText(float& TimeRemaining); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDQualityLevelSelectTimer.OnTimeRemainingChanged (Has no native function)
	void OnTimeRemainingChanged(float& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDQualityLevelSelectTimer.OnProgressStarted (Has no native function)
	void OnProgressStarted(float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDQualityLevelSelectTimer.OnProgressEnded (Has no native function)
	void OnProgressEnded(); // (Event | Protected | BlueprintEvent)
};

