// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
// Size: 0x1540
class UInviteListEntry_FriendInvite_XS_C : public UFortConnectionsUserListEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x14d0 (0x8)
	class UWidgetAnimation* Selected; // 0x14d8 (0x8)
	class UWidgetAnimation* Hovered; // 0x14e0 (0x8)
	class UImage* Arrow; // 0x14e8 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x14f0 (0x8)
	class UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x14f8 (0x8)
	class UBorder* EntryBorder; // 0x1500 (0x8)
	class UCommonRichTextBlock* TextSentRequest; // 0x1508 (0x8)
	struct FLinearColor Online; // 0x1510 (0x10)
	struct FLinearColor Offline; // 0x1520 (0x10)
	struct FLinearColor Away; // 0x1530 (0x10)

	/* Functions */

	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView (Has no native function)
	void HandleOnlineIndicatorView(unsigned char& OnlineStatus, unsigned char& TempbyteVariable, struct FLinearColor& TempstructVariable, struct FLinearColor& TempstructVariable1, struct FLinearColor& TempstructVariable2, struct FLinearColor& TempstructVariable3, struct FLinearColor& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void BndEvtMenuAnchorActionsK2NodeComponentBoundEvent0OnMenuOpenChangedEventDelegateSignature(bool& bIsOpen); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS (Has no native function)
	void ExecuteUbergraphInviteListEntryFriendInviteXS(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, bool& K2NodeComponentBoundEventbIsOpen, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, bool& CallFuncIsAnimationPlayingReturnValue); // (Final | 0x00008000)
};

