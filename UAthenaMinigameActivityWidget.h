// Class /Script/FortniteUI.AthenaMinigameActivityWidget
// Size: 0x320
class UAthenaMinigameActivityWidget : public UCommonUserWidget
{
	struct TMap<enum EMinigameActivityWidgetStatFormat, struct FText> StatFormats; // 0x290 (0x50)
	class UCommonTextBlock* TextActivityName; // 0x2e0 (0x8)
	class UCommonTextBlock* TextStat; // 0x2e8 (0x8)
	class UCommonTextBlock* TextAddTime; // 0x2f0 (0x8)
	class UCommonTextBlock* TextScore; // 0x2f8 (0x8)
	class UCommonTextBlock* TextLap; // 0x300 (0x8)
	class UCommonTextBlock* TextBestLapTime; // 0x308 (0x8)
	bool bMinigameActive; // 0x310 (0x1)
	unsigned char padding_311[0xf]; // 0x311 (0xf)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnMinigameTimerUIEnabledChanged (Has no native function)
	void BPOnMinigameTimerUIEnabledChanged(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnMinigameProgressUIEnabledChanged (Has no native function)
	void BPOnMinigameProgressUIEnabledChanged(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnMinigameBestLapTimeUIEnabledChanged (Has no native function)
	void BPOnMinigameBestLapTimeUIEnabledChanged(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameUIEnabledChanged (Has no native function)
	void BPOnHandleMinigameUIEnabledChanged(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameTimeChanged (Has no native function)
	void BPOnHandleMinigameTimeChanged(float& Time, float& Delta); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameStarted (Has no native function)
	void BPOnHandleMinigameStarted(struct FMinigameActivityStartedData& StartData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameScoreChanged (Has no native function)
	void BPOnHandleMinigameScoreChanged(int& CurrentScore, int& TotalScore); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameRankChanged (Has no native function)
	void BPOnHandleMinigameRankChanged(int& Rank); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameLapsChanged (Has no native function)
	void BPOnHandleMinigameLapsChanged(int& CurrentLap, int& MaxLaps); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameEnded (Has no native function)
	void BPOnHandleMinigameEnded(struct FMinigameActivityEndedData& EndData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameDistanceChanged (Has no native function)
	void BPOnHandleMinigameDistanceChanged(float& Distance); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMinigameActivityWidget.BP_OnHandleMinigameBestLapTimeChanged (Has no native function)
	void BPOnHandleMinigameBestLapTimeChanged(float& BestLapTime); // (Event | Protected | BlueprintEvent)
};

