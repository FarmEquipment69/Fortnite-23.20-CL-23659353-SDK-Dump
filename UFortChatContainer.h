// Class /Script/FortniteUI.FortChatContainer
// Size: 0x308
class UFortChatContainer : public USocialChatContainer
{
	unsigned char unreflected_2c0[0x18]; // 0x2c0 (0x18) 
	struct TWeakObjectPtr<class USocialChatChannel> CacheChannelForPlatformMessage; // 0x2d8 (0x8)
	unsigned char unreflected_2e0[0x8]; // 0x2e0 (0x8) 
	class USocialChatChannel* CombinedChannel; // 0x2e8 (0x8)
	class UClass* ActionMenuClass; // 0x2f0 (0x8)
	class UFortSocialInteractionMenu* ActionMenu; // 0x2f8 (0x8)
	class UMenuAnchor* MenuAnchorMessageActions; // 0x300 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortChatContainer.OnSendButtonDisplayChanged (Has no native function)
	void OnSendButtonDisplayChanged(bool& bShowSendButton); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortChatContainer.IsTextChatRestricted (Underlying native function: IsTextChatRestricted 0xa6b44c0)
	bool IsTextChatRestricted(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortChatContainer.HandleGetMenuContentForAnchor (Underlying native function: HandleGetMenuContentForAnchor 0x8b087a4)
	class UUserWidget* HandleGetMenuContentForAnchor(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortChatContainer.GetTextChatDisabledText (Underlying native function: GetTextChatDisabledText 0xa6b3320)
	struct FText GetTextChatDisabledText(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

