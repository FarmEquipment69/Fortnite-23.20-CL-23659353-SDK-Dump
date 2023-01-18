// Class /Script/FortniteUI.AthenaBattlePassItemTracker
// Size: 0x2a0
class UAthenaBattlePassItemTracker : public UCommonUserWidget
{
	class UCommonTextBlock* TextCategory; // 0x290 (0x8)
	class UCommonNumericTextBlock* TextCounter; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBattlePassItemTracker.OnInterpStarted (Has no native function)
	void OnInterpStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBattlePassItemTracker.OnInterpEnded (Has no native function)
	void OnInterpEnded(class UCommonNumericTextBlock*& NumericTextBlock, bool& HadCompleted); // (Event | Protected | BlueprintEvent)
};

