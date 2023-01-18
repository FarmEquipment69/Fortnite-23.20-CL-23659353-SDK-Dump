// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C
// Size: 0x1515
class USocialPanel_FriendSearchBar_C : public UFortFriendSearchButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x14d0 (0x8)
	class UWidgetAnimation* OnHovered; // 0x14d8 (0x8)
	class UImage* AddFriendBanIcon; // 0x14e0 (0x8)
	class UBorder* ClickCapture; // 0x14e8 (0x8)
	class UCommonRichTextBlock* RichTextCannotAddFriends; // 0x14f0 (0x8)
	class UCommonRichTextBlock* RichTextSocialBan; // 0x14f8 (0x8)
	class UFortMobileImage* SharingIcon; // 0x1500 (0x8)
	class UFortSimpleWidgetAnimationsPanel* SimpleWidgetAnimationsPanel; // 0x1508 (0x8)
	struct FName ShakeAnimation; // 0x1510 (0x4)
	bool bShakeAnimationIsPlaying; // 0x1514 (0x1)

	/* Functions */

	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.On_ClickCapture_MouseButtonDown_0 (Has no native function)
	struct FEventReply OnClickCaptureMouseButtonDown0(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature (Has no native function)
	void BndEvtEditableTextAddFriendK2NodeComponentBoundEvent0OnEditableTextChangedEventDelegateSignature(struct FText& Text); // (HasOutParms | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar (Has no native function)
	void ExecuteUbergraphSocialPanelFriendSearchBar(int& EntryPoint, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, struct FText& K2NodeComponentBoundEventText, bool& CallFuncLimitTextLengthWasTrimmed, bool& CallFuncPlayAnimationByNameReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue); // (Final | 0x00008000 | HasDefaults)
};

