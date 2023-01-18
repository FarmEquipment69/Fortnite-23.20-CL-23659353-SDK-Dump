// Class /Script/GiftingUI.FortGiftingUserSearchWidget
// Size: 0x2d8
class UFortGiftingUserSearchWidget : public UCommonUserWidget
{
	class UEditableText* EditableTextSearchFriends; // 0x290 (0x8)
	class UCommonButtonBase* ButtonClearQuery; // 0x298 (0x8)
	class UCommonButtonBase* ButtonSubmitQuery; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x30]; // 0x2a8 (0x30)

	/* Functions */

	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit (Has no native function)
	void OnSearchCommit(bool& bSearchStringShort); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered (Underlying native function: HandleSearchFriendsTextEntered 0x7449468)
	void HandleSearchFriendsTextEntered(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged (Underlying native function: HandleSearchFriendsTextChanged 0x74493bc)
	void HandleSearchFriendsTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.FocusEditableText (Underlying native function: FocusEditableText 0x7449254)
	void FocusEditableText(); // (Final | Native | Protected | BlueprintCallable)
};

