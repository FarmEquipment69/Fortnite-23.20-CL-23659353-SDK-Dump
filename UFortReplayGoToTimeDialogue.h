// Class /Script/FortniteUI.FortReplayGoToTimeDialogue
// Size: 0x510
class UFortReplayGoToTimeDialogue : public UCommonActivatablePanelLegacy
{
	class UEditableText* EditableTextGoToSeconds; // 0x4e0 (0x8)
	class UCommonButtonLegacy* ButtonConfirm; // 0x4e8 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x4f0 (0x8)
	class UTextBlock* TextHowTo; // 0x4f8 (0x8)
	unsigned char padding_500[0x10]; // 0x500 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortReplayGoToTimeDialogue.HandleTextCommitted (Underlying native function: HandleTextCommitted 0xa88ea94)
	void HandleTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortReplayGoToTimeDialogue.HandleTextChanged (Underlying native function: HandleTextChanged 0xa88e8bc)
	void HandleTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortReplayGoToTimeDialogue.HandleReplayTimelineChanged (Underlying native function: HandleReplayTimelineChanged 0xa88e5f8)
	void HandleReplayTimelineChanged(float& StartTime, float& EndTime); // (Final | Native | Private)
};

