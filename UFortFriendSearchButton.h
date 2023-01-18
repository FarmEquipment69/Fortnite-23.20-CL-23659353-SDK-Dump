// Class /Script/FortniteUI.FortFriendSearchButton
// Size: 0x14d0
class UFortFriendSearchButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x60]; // 0x1430 (0x60) 
	class UEditableText* EditableTextAddFriend; // 0x1490 (0x8)
	class UCommonRichTextBlock* RichTextSocialBanTimerText; // 0x1498 (0x8)
	class UCommonButtonLegacy* ButtonClearQuery; // 0x14a0 (0x8)
	class UCommonButtonLegacy* ButtonSubmitQuery; // 0x14a8 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherSocialBan; // 0x14b0 (0x8)
	unsigned char MaxFriendSearchNameLength; // 0x14b8 (0x1)
	unsigned char padding_14b9[0x17]; // 0x14b9 (0x17)

	/* Functions */

	// Function /Script/FortniteUI.FortFriendSearchButton.SetKeyboardFocusOnAddFriendText (Underlying native function: SetKeyboardFocusOnAddFriendText 0xa775c50)
	void SetKeyboardFocusOnAddFriendText(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortFriendSearchButton.HandleAddFriendTextCommitted (Underlying native function: HandleAddFriendTextCommitted 0xa775680)
	void HandleAddFriendTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortFriendSearchButton.HandleAddFriendTextChanged (Underlying native function: HandleAddFriendTextChanged 0xa7755c4)
	void HandleAddFriendTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)
};

