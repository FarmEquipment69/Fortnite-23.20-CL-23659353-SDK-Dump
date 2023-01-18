// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C
// Size: 0x1548
class UUserListEntry_C : public UFortSocialUserListEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x14f0 (0x8)
	class UWidgetAnimation* Selected; // 0x14f8 (0x8)
	class UWidgetAnimation* Hovered; // 0x1500 (0x8)
	class UImage* Arrow; // 0x1508 (0x8)
	class UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1510 (0x8)
	class UCommonRichTextBlock* TextDisplayName; // 0x1518 (0x8)
	class UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1520 (0x8)
	struct FLinearColor EncourageEpicFriendIdleColor; // 0x1528 (0x10)
	struct FLinearColor EncourageEpicFriendHoveredColor; // 0x1538 (0x10)

	/* Functions */

	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void BndEvtMenuAnchorActionsK2NodeComponentBoundEvent0OnMenuOpenChangedEventDelegateSignature(bool& bIsOpen); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.OnFocusLost (Has no native function)
	void OnFocusLost(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.ExecuteUbergraph_UserListEntry (Has no native function)
	void ExecuteUbergraphUserListEntry(int& EntryPoint, struct FFocusEvent*& K2NodeEventInFocusEvent, bool& K2NodeComponentBoundEventbIsOpen, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsAnimationPlayingReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3); // (Final | 0x00008000 | HasDefaults)
};

