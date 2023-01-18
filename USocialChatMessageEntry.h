// Class /Script/SocialUMG.SocialChatMessageEntry
// Size: 0x3c8
class USocialChatMessageEntry : public UUserWidget
{
	unsigned char unreflected_268[0x18]; // 0x268 (0x18) 
	struct FSocialChatMessageEntryStyle DefaultStyle; // 0x280 (0x138)
	class UCommonRichTextBlock* RichTextMessage; // 0x3b8 (0x8)
	class UButton* ButtonMessageButton; // 0x3c0 (0x8)

	/* Functions */

	// Function /Script/SocialUMG.SocialChatMessageEntry.OnMessageSet (Has no native function)
	void OnMessageSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SocialUMG.SocialChatMessageEntry.CanInteract (Underlying native function: CanInteract 0x27c9608)
	bool CanInteract(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

