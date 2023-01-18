// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C
// Size: 0x14b0
class UReferAFriendEntry_C : public UFortReferFriendListEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1460 (0x8)
	class UWidgetAnimation* Selected; // 0x1468 (0x8)
	class UWidgetAnimation* Hovered; // 0x1470 (0x8)
	class UBorder* AnimatedInputBorder; // 0x1478 (0x8)
	class UImage* Arrow; // 0x1480 (0x8)
	class UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1488 (0x8)
	class UBorder* EntryBorder; // 0x1490 (0x8)
	class USizeBox* Exclamation; // 0x1498 (0x8)
	class UCommonRichTextBlock* TextMissedInvitesText; // 0x14a0 (0x8)
	class UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x14a8 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void BndEvtMenuAnchorActionsK2NodeComponentBoundEvent0OnMenuOpenChangedEventDelegateSignature(bool& bIsOpen); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.ExecuteUbergraph_ReferAFriendEntry (Has no native function)
	void ExecuteUbergraphReferAFriendEntry(int& EntryPoint, bool& K2NodeComponentBoundEventbIsOpen, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsAnimationPlayingReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3); // (Final | 0x00008000)
};

