// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C
// Size: 0x670
class USocialPanelView_UserLists_C : public UFortSocialPanelView_UserLists
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5b0 (0x8)
	class UWidgetAnimation* WeGameButtonHovered; // 0x5b8 (0x8)
	class UWidgetAnimation* SwitcherTransition; // 0x5c0 (0x8)
	class UWidgetAnimation* NoFriendsArrowBounce; // 0x5c8 (0x8)
	class UWidgetAnimation* MenuAnchorItemOpen; // 0x5d0 (0x8)
	class UWidgetAnimation* Open0; // 0x5d8 (0x8)
	class UWidgetAnimation* Open; // 0x5e0 (0x8)
	class UImage* bckgrnd; // 0x5e8 (0x8)
	class UImage* CircularThrobberUserSearch; // 0x5f0 (0x8)
	class UCommonRichTextBlock* CommonRichTextBlock97; // 0x5f8 (0x8)
	class UFortMobileImage* FortMobileImage127; // 0x600 (0x8)
	class UImage* ImageMicDisabled; // 0x608 (0x8)
	class UFortMobileImage* ImageMicIcon; // 0x610 (0x8)
	class UFortMobileImage* ImageMicIcon1; // 0x618 (0x8)
	class UFortMobileImage* ImageMicIcon2; // 0x620 (0x8)
	class UImage* ImageMicIcon3; // 0x628 (0x8)
	class UFortMobileImage* ImageTitleIcon; // 0x630 (0x8)
	class UCommonRichTextBlock* RichTextLeavePlatformPartyTitle; // 0x638 (0x8)
	class UCommonRichTextBlock* RichTextVoiceChatDisabled; // 0x640 (0x8)
	class UCommonRichTextBlock* RichTextVoiceChatDisabledHeader; // 0x648 (0x8)
	class UCommonRichTextBlock* RichTextVoiceChatDisabledWarningMessage; // 0x650 (0x8)
	class URichTextBlock* RichTextBlock0; // 0x658 (0x8)
	class USocialPanel_FriendLinkButton_C* SocialPanelFriendLinkButton; // 0x660 (0x8)
	class UCommonTextBlock* TextLowPowerMode; // 0x668 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature (Has no native function)
	void BndEvtSwitcherUserListsK2NodeComponentBoundEvent0OnActiveWidgetChangedDelegateSignature(class UWidget*& ActiveWidget, int& ActiveWidgetIndex); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSetVoiceChannelButtonText (Has no native function)
	void OnSetVoiceChannelButtonText(struct FText& ButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists (Has no native function)
	void ExecuteUbergraphSocialPanelViewUserLists(int& EntryPoint, bool& K2NodeEventIsDesignTime, class UWidget*& K2NodeComponentBoundEventActiveWidget, int& K2NodeComponentBoundEventActiveWidgetIndex, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, struct FText& K2NodeEventButtonText, class ULeavePlatformPartyButton_C*& K2NodeDynamicCastAsLeavePlatformPartyButton, bool& K2NodeDynamicCastbSuccess, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue); // (Final | 0x00008000 | HasDefaults)
};

