// WidgetBlueprintGeneratedClass /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C
// Size: 0x14a0
class UMultiFriendActionListEntry_C : public UFortMultiFriendActionListEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1460 (0x8)
	class UWidgetAnimation* Selected; // 0x1468 (0x8)
	class UWidgetAnimation* Hovered; // 0x1470 (0x8)
	class UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1478 (0x8)
	class UBorder* EntryBorder; // 0x1480 (0x8)
	class UCommonRichTextBlock* TextMissedInvitesText; // 0x1488 (0x8)
	class UCommonRichTextBlock* TextMissedInvitesTextHover; // 0x1490 (0x8)
	class UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1498 (0x8)

	/* Functions */

	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.GetText (Has no native function)
	void GetText(enum EMultiFriendAction& InAction, struct FText& Text, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void BndEvtMenuAnchorActionsK2NodeComponentBoundEvent0OnMenuOpenChangedEventDelegateSignature(bool& bIsOpen); // (BlueprintEvent)

	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.OnActionUpdated (Has no native function)
	void OnActionUpdated(enum EMultiFriendAction& InAction); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.ExecuteUbergraph_MultiFriendActionListEntry (Has no native function)
	void ExecuteUbergraphMultiFriendActionListEntry(int& EntryPoint, bool& K2NodeComponentBoundEventbIsOpen, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsAnimationPlayingReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, enum EMultiFriendAction& K2NodeEventInAction, struct FText& CallFuncGetTextText); // (Final | 0x00008000 | HasDefaults)
};

