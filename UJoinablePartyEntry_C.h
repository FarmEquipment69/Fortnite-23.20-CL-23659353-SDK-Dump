// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C
// Size: 0x1568
class UJoinablePartyEntry_C : public UFortJoinablePartyListEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x14f0 (0x8)
	class UWidgetAnimation* Selected; // 0x14f8 (0x8)
	class UWidgetAnimation* Hovered; // 0x1500 (0x8)
	class UBorder* AnimatedInputBorder; // 0x1508 (0x8)
	class UImage* Arrow; // 0x1510 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x1518 (0x8)
	class UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1520 (0x8)
	class UBorder* EntryBorder; // 0x1528 (0x8)
	class USizeBox* Exclamation; // 0x1530 (0x8)
	class UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1538 (0x8)
	struct FSlateColor InviteFontColor; // 0x1540 (0x14)
	struct FSlateColor DefaultFontColor; // 0x1554 (0x14)

	/* Functions */

	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void BndEvtMenuAnchorActionsK2NodeComponentBoundEvent0OnMenuOpenChangedEventDelegateSignature(bool& bIsOpen); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated (Has no native function)
	void OnInviteStatusUpdated(bool& bIsInvited); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry (Has no native function)
	void ExecuteUbergraphJoinablePartyEntry(int& EntryPoint, bool& K2NodeComponentBoundEventbIsOpen, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsAnimationPlayingReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, bool& K2NodeEventbIsInvited); // (Final | 0x00008000)
};

