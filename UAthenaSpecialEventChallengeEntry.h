// Class /Script/FortniteUI.AthenaSpecialEventChallengeEntry
// Size: 0x338
class UAthenaSpecialEventChallengeEntry : public UAthenaChallengeEntry
{
	float RefreshRate; // 0x270 (0x4)
	unsigned char unreflected_274[0x3c]; // 0x274 (0x3c) 
	class UCommonTextBlock* TextThreatLevel; // 0x2b0 (0x8)
	class UProgressBar* ProgressBarChallengeProgress; // 0x2b8 (0x8)
	class UCommonTextBlock* TextChallengeProgress; // 0x2c0 (0x8)
	class UProgressBar* ProgressBarTimerProgress; // 0x2c8 (0x8)
	class UFortEventDateTimeTextBlock* TextChallengeTimer; // 0x2d0 (0x8)
	class UWidget* WidgetProgressContent; // 0x2d8 (0x8)
	class UWidget* WidgetTimerContent; // 0x2e0 (0x8)
	class UCommonTextBlock* TextDistance; // 0x2e8 (0x8)
	class UCommonTextBlock* TextPrice; // 0x2f0 (0x8)
	class UImage* ImagePrice; // 0x2f8 (0x8)
	struct FText BountyDistanceFormatText; // 0x300 (0x18)
	class UWidget* WidgetPriceAndDistanceContent; // 0x318 (0x8)
	class UImage* ImageUrgentIcon; // 0x320 (0x8)
	class UImage* ImageUrgentAlertBackground; // 0x328 (0x8)
	class UCommonTextBlock* TextUrgentIcon; // 0x330 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpecialEventChallengeEntry.OnUpdateBountyThreatLevel (Has no native function)
	void OnUpdateBountyThreatLevel(enum EPlayerBountyThreatLevel& NewPlayerBountyThreatLevel); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengeEntry.OnProgressChanged (Has no native function)
	void OnProgressChanged(int& CurrentProgress, int& MaxProgress); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengeEntry.OnEntrySetup (Has no native function)
	void OnEntrySetup(struct FUrgentQuestData& UrgentQuestData, bool& bUrgentQuestRecentlyStarted); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengeEntry.OnEntryDataChanged (Has no native function)
	void OnEntryDataChanged(struct FUrgentQuestData& UrgentQuestData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengeEntry.OnBountyThreatInformationVisibilityChange (Has no native function)
	void OnBountyThreatInformationVisibilityChange(enum ESlateVisibility& NewVisibilty); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengeEntry.HandleOnPlayerBountyThreatLevelUpdated (Underlying native function: HandleOnPlayerBountyThreatLevelUpdated 0xa5313f0)
	void HandleOnPlayerBountyThreatLevelUpdated(enum EPlayerBountyThreatLevel& NewPlayerBountyThreatLeve); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpecialEventChallengeEntry.HandleOnPlayerBountyThreatLevelEnded (Underlying native function: HandleOnPlayerBountyThreatLevelEnded 0xa5313dc)
	void HandleOnPlayerBountyThreatLevelEnded(); // (Final | Native | Private)
};

