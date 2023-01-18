// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C
// Size: 0x1560
class UUserSearchResultListEntry_XS_C : public UFortUserSearchResultListEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1500 (0x8)
	class UWidgetAnimation* Selected; // 0x1508 (0x8)
	class UWidgetAnimation* Hovered; // 0x1510 (0x8)
	class UImage* Arrow; // 0x1518 (0x8)
	class UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1520 (0x8)
	class UImage* ImageLock; // 0x1528 (0x8)
	class UCommonRichTextBlock* TextDisplayName; // 0x1530 (0x8)
	class UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1538 (0x8)
	struct FLinearColor EncourageEpicFriendIdleColor; // 0x1540 (0x10)
	struct FLinearColor EncourageEpicFriendHoveredColor; // 0x1550 (0x10)

	/* Functions */

	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void BndEvtMenuAnchorActionsK2NodeComponentBoundEvent0OnMenuOpenChangedEventDelegateSignature(bool& bIsOpen); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.SetNamePlatformAndMutuals (Has no native function)
	void SetNamePlatformAndMutuals(struct FText& DisplayName, struct FText& Platform, int& MutualCount); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.ExecuteUbergraph_UserSearchResultListEntry_XS (Has no native function)
	void ExecuteUbergraphUserSearchResultListEntryXS(int& EntryPoint, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, bool& TempboolVariable, struct FText& TemptextVariable, struct FText& TemptextVariable1, bool& TempboolVariable1, struct FText& TemptextVariable2, struct FText& TemptextVariable3, bool& TempboolVariable2, bool& K2NodeComponentBoundEventbIsOpen, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsAnimationPlayingReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, struct FText& K2NodeEventDisplayName, struct FText& K2NodeEventPlatform, int& K2NodeEventMutualCount, struct FText& CallFuncMakeLiteralTextReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncEqualEqualIgnoreCaseTextTextReturnValue, struct FText& K2NodeSelectDefault, struct FText& K2NodeSelectDefault1, struct FText& CallFuncConvIntToTextReturnValue, struct FText& K2NodeSelectDefault2, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData1, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData2, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData3, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue); // (Final | 0x00008000 | HasDefaults)
};

