// Class /Script/FortniteUI.AthenaGoalsPageBaseCard
// Size: 0x288
class UAthenaGoalsPageBaseCard : public UUserWidget
{
	class UDynamicEntryBox* DynamicEntryBoxGoals; // 0x268 (0x8)
	class UAthenaChallengeDateTimeTextBlock* DateTimeTextTimeRemaining; // 0x270 (0x8)
	class UPanelWidget* PanelTimeRemaining; // 0x278 (0x8)
	unsigned char padding_280[0x8]; // 0x280 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGoalsPageBaseCard.ShowNewBang (Has no native function)
	void ShowNewBang(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGoalsPageBaseCard.OnTimerSet (Has no native function)
	void OnTimerSet(enum EAthenaChallengeTimerState& TimerState); // (Event | Protected | BlueprintEvent)
};

