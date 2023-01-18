// Class /Script/FortniteUI.FortLobbyPlayerPanel
// Size: 0x580
class UFortLobbyPlayerPanel : public UFortActivatablePanel
{
	class UClass* ManageModalClass; // 0x518 (0x8)
	unsigned char unreflected_520[0x8]; // 0x520 (0x8) 
	class UCommonButtonBase* ButtonAddFriend; // 0x528 (0x8)
	class UCommonButtonBase* ButtonInviteParty; // 0x530 (0x8)
	class UCommonButtonBase* ButtonManage; // 0x538 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x540 (0x8)
	class UFortPlayerBanner* BannerPlayer; // 0x548 (0x8)
	class URichTextBlock* RichTextPlayerName; // 0x550 (0x8)
	class UTextBlock* TextInviteSent; // 0x558 (0x8)
	class UImage* ImagePlatformIcon; // 0x560 (0x8)
	unsigned char padding_568[0x18]; // 0x568 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortLobbyPlayerPanel.OnFriendStatusUpdated (Has no native function)
	void OnFriendStatusUpdated(enum EFortFriendRequestStatus& FriendRequestStatus); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortLobbyPlayerPanel.ClosePanel (Underlying native function: ClosePanel 0xa73bef8)
	void ClosePanel(); // (Final | Native | Protected | BlueprintCallable)
};

