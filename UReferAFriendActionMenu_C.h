// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C
// Size: 0x450
class UReferAFriendActionMenu_C : public UFortReferFriendActionMenu
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3f0 (0x8)
	class UWidgetAnimation* ConfirmationOpened; // 0x3f8 (0x8)
	class UWidgetAnimation* Opened; // 0x400 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x408 (0x8)
	class UCommonRichTextBlock* CommonRichTextBlock; // 0x410 (0x8)
	class UCommonRichTextBlock* CommonRichTextBlock143; // 0x418 (0x8)
	class UBorder* EntryBorder; // 0x420 (0x8)
	class UImage* ImageAddFriendsQR; // 0x428 (0x8)
	class UImage* ImagePartyUpQR; // 0x430 (0x8)
	class UImage* ImagePlatform; // 0x438 (0x8)
	class UCommonRichTextBlock* TextDisplayName; // 0x440 (0x8)
	class UWidgetSwitcher* WidgetSwitcherQR; // 0x448 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.Set QRt Image (Has no native function)
	void SetQRtImage(enum EReferFriendOrigin& Origin, bool& K2NodeSwitchEnumCmpSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnKeyUp (Has no native function)
	struct FEventReply OnKeyUp(struct FGeometry& MyGeometry, struct FKeyEvent& InKeyEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnOpened (Has no native function)
	void OnOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnRequestOriginChanged (Has no native function)
	void OnRequestOriginChanged(enum EReferFriendOrigin& RequestOrigin); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.ExecuteUbergraph_ReferAFriendActionMenu (Has no native function)
	void ExecuteUbergraphReferAFriendActionMenu(int& EntryPoint, enum EReferFriendOrigin& K2NodeEventRequestOrigin, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Final | 0x00008000)
};

