// Class /Script/FortniteUI.FortActivatableChatWidget
// Size: 0x3c8
class UFortActivatableChatWidget : public UCommonActivatableWidget
{
	class UFortChatModalWrapper* ActivatableModalBindings; // 0x3a8 (0x8)
	class UCommonButtonBase* ButtonHoldToOpen; // 0x3b0 (0x8)
	class UDataTable* InputActionDataTable; // 0x3b8 (0x8)
	unsigned char padding_3c0[0x8]; // 0x3c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortActivatableChatWidget.FocusChat (Has no native function)
	void FocusChat(bool& bFocus); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableChatWidget.BacchusFrontendFocusChat (Underlying native function: BacchusFrontendFocusChat 0xa73be08)
	void BacchusFrontendFocusChat(); // (Final | Native | Public | BlueprintCallable)
};

