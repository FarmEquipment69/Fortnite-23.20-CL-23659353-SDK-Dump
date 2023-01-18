// Class /Script/FortniteUI.FortSocialPanelView_UserLists
// Size: 0x5b0
class UFortSocialPanelView_UserLists : public UCommonActivatableWidget
{
	class UCommonButtonGroupLegacy* ButtonGroupSocialTabs; // 0x3a8 (0x8)
	struct FText PartyVoiceMessagePSN; // 0x3b0 (0x18)
	struct FText PlatformPartyChatMessageHeaderPSN; // 0x3c8 (0x18)
	struct FText LeavePlatformPartyInstructionsPSN; // 0x3e0 (0x18)
	struct FText PartyVoiceMessageXBL; // 0x3f8 (0x18)
	struct FText PlatformPartyChatMessageHeaderXBL; // 0x410 (0x18)
	struct FText LeavePlatformPartyInstructionsXBL; // 0x428 (0x18)
	unsigned char unreflected_440[0x48]; // 0x440 (0x48) 
	struct TArray<struct FFortUserListHeaderInfo> ListHeaderInfos; // 0x488 (0x10)
	struct FDataTableRowHandle NextTabInputAction; // 0x498 (0x10)
	unsigned char unreflected_4a8[0x8]; // 0x4a8 (0x8) 
	struct FDataTableRowHandle PreviousTabInputAction; // 0x4b0 (0x10)
	unsigned char unreflected_4c0[0x20]; // 0x4c0 (0x20) 
	class UFortLocalUserEntry* UserEntryLocalPlayer; // 0x4e0 (0x8)
	class UFortFriendSearchButton* ButtonFriendSearch; // 0x4e8 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherUserLists; // 0x4f0 (0x8)
	class UFortSocialTab* SocialTabAddFriends; // 0x4f8 (0x8)
	class UFortSocialTab* SocialTabFriends; // 0x500 (0x8)
	class UFortSocialTab* SocialTabVoiceChat; // 0x508 (0x8)
	class UFortSocialUserTreeView* UserTreeFriendsLists; // 0x510 (0x8)
	class UFortSocialUserTreeView* UserTreeVoiceChat; // 0x518 (0x8)
	class UFortVoiceSettingsDisplay* VoiceChannelSettings; // 0x520 (0x8)
	class UFortSocialUserTreeView* UserTreeAddFriends; // 0x528 (0x8)
	class UCommonButtonLegacy* ButtonAddWeGameFriends; // 0x530 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherVoiceChatState; // 0x538 (0x8)
	class UVerticalBox* VBoxVoicePlatformPartyWithSwitchButton; // 0x540 (0x8)
	class UVerticalBox* VBoxVoicePlatformPartyInstructions; // 0x548 (0x8)
	class UFortJoinVoiceChannelButton* ButtonJoinVoiceChat; // 0x550 (0x8)
	class UCommonButtonLegacy* ButtonLeavePlatformVoiceChat; // 0x558 (0x8)
	class UCommonButtonLegacy* ButtonEnableVoiceChat; // 0x560 (0x8)
	class UCommonTextBlock* TextPartyVoiceMessage; // 0x568 (0x8)
	class UCommonRichTextBlock* RichTextSocialBanDescription; // 0x570 (0x8)
	class UCommonRichTextBlock* RichTextSocialBanRemainingTimeVoiceTab; // 0x578 (0x8)
	class UCommonRichTextBlock* RichTextPlatformPartyChatMessageHeader; // 0x580 (0x8)
	class UCommonRichTextBlock* RichTextLeavePlatformPartyInstructions; // 0x588 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherAddFriends; // 0x590 (0x8)
	class UFortSocialUserTreeView* UserTreeSearchResults; // 0x598 (0x8)
	class UCommonTextBlock* TextSearchingForUsers; // 0x5a0 (0x8)
	class UCommonTextBlock* TextSearchFailed; // 0x5a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialPanelView_UserLists.OnSetVoiceChannelButtonText (Has no native function)
	void OnSetVoiceChannelButtonText(struct FText& ButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialPanelView_UserLists.HandlePrevTabAction_STW (Underlying native function: HandlePrevTabAction_STW 0xa7759a4)
	void HandlePrevTabActionSTW(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortSocialPanelView_UserLists.HandleNextTabAction_STW (Underlying native function: HandleNextTabAction_STW 0xa77576c)
	void HandleNextTabActionSTW(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortSocialPanelView_UserLists.FocusSearchResultsAfterQueryEnd (Underlying native function: FocusSearchResultsAfterQueryEnd 0xa775454)
	void FocusSearchResultsAfterQueryEnd(class UWidget*& ActiveWidget, int& ActiveWidgetIndex); // (Final | Native | Private)
};

