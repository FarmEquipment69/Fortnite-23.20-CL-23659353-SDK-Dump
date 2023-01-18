// Class /Script/FortniteUI.FortEditNicknameButton
// Size: 0x1470
class UFortEditNicknameButton : public UCommonButtonLegacy
{
	struct FColor CharacterLimitWarningColor; // 0x1430 (0x4)
	unsigned char unreflected_1434[0x24]; // 0x1434 (0x24) 
	class UEditableText* EditableTextEditNickname; // 0x1458 (0x8)
	class UCommonRichTextBlock* RichTextCharacterCounter; // 0x1460 (0x8)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEditNicknameButton.SetKeyboardFocusOnEditableText (Underlying native function: SetKeyboardFocusOnEditableText 0xa775c64)
	void SetKeyboardFocusOnEditableText(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortEditNicknameButton.HandleNicknameTextCommited (Underlying native function: HandleNicknameTextCommited 0xa7757ec)
	void HandleNicknameTextCommited(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortEditNicknameButton.HandleNicknameTextChanged (Underlying native function: HandleNicknameTextChanged 0x1d5a3e4)
	void HandleNicknameTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)
};

