// Class /Script/SocialUMG.SocialChatContainer
// Size: 0x2c0
class USocialChatContainer : public UUserWidget
{
	class USocialChatManager* ChatManager; // 0x268 (0x8)
	struct TArray<class USocialChatChannel*> JoinedChannels; // 0x270 (0x10)
	class USocialChatChannel* ActiveChannel; // 0x280 (0x8)
	class UCommonButtonGroupLegacy* TabButtonGroup; // 0x288 (0x8)
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class USocialChatMessageList* ChatListMessages; // 0x298 (0x8)
	class USocialChatEditableText* ChatEditableTextMessageEntry; // 0x2a0 (0x8)
	class UCommonButtonBase* ButtonSendMessage; // 0x2a8 (0x8)
	class UDynamicEntryBox* EntryBoxJoinedChannels; // 0x2b0 (0x8)
	class UScrollBox* ScrollBoxChannels; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/SocialUMG.SocialChatContainer.SendCurrentMessage (Underlying native function: SendCurrentMessage 0x73f40b4)
	void SendCurrentMessage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SocialUMG.SocialChatContainer.OnChatOpenChanged (Has no native function)
	void OnChatOpenChanged(bool& bShouldBeOpen); // (Event | Protected | BlueprintEvent)

	// Function /Script/SocialUMG.SocialChatContainer.HandleRightTabPressed (Underlying native function: HandleRightTabPressed 0x73f407c)
	void HandleRightTabPressed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SocialUMG.SocialChatContainer.HandleLeftTabPressed (Underlying native function: HandleLeftTabPressed 0x73f3f60)
	void HandleLeftTabPressed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SocialUMG.SocialChatContainer.FocusEditableText (Underlying native function: FocusEditableText 0x73f3eb0)
	void FocusEditableText(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted (Underlying native function: DynamicHandleMessageTextCommitted 0x73f3ddc)
	void DynamicHandleMessageTextCommitted(struct FText& MessageText, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)
};

