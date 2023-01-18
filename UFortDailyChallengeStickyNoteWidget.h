// Class /Script/FortniteUI.FortDailyChallengeStickyNoteWidget
// Size: 0x3f8
class UFortDailyChallengeStickyNoteWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	int MyDailyChallengeIndex; // 0x3c0 (0x4)
	unsigned char unreflected_3c4[0x4]; // 0x3c4 (0x4) 
	class UCommonButtonLegacy* ButtonRerollChallenge; // 0x3c8 (0x8)
	class UCommonRichTextBlock* RichTextChallengeDesc; // 0x3d0 (0x8)
	class UCommonRichTextBlock* RichTextProgress; // 0x3d8 (0x8)
	class USizeBox* SizeBoxContentEnforcedSize; // 0x3e0 (0x8)
	class UCommonRichTextBlock* RichTextNextChallengeTime; // 0x3e8 (0x8)
	class UClass* ConfirmationWindowClass; // 0x3f0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortDailyChallengeStickyNoteWidget.OnHasChallengeUpdated (Has no native function)
	void OnHasChallengeUpdated(bool& bHasAssignedChallenge); // (Event | Public | BlueprintEvent)
};

