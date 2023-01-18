// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C
// Size: 0x1488
class UUserListHeaderEntry_C : public USocialUserListHeaderEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1460 (0x8)
	class UWidgetAnimation* OnExpansion; // 0x1468 (0x8)
	class UWidgetAnimation* OnHover; // 0x1470 (0x8)
	class UFortMobileImage* ExpandDirectionTick; // 0x1478 (0x8)
	class USizeBox* SBEntryContent; // 0x1480 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged (Has no native function)
	void BPOnItemExpansionChanged(bool& bIsExpanded); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet_1 (Has no native function)
	void OnListItemObjectSet1(class UObject*& ListItemObject); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.OnFocusLost (Has no native function)
	void OnFocusLost(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry (Has no native function)
	void ExecuteUbergraphUserListHeaderEntry(int& EntryPoint, struct FFocusEvent*& K2NodeEventInFocusEvent, bool& TempboolVariable, struct TEnumAsByte<EUMGSequencePlayMode>& TempbyteVariable, struct TEnumAsByte<EUMGSequencePlayMode>& TempbyteVariable1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, bool& K2NodeEventbIsExpanded, struct TEnumAsByte<EUMGSequencePlayMode>& K2NodeSelectDefault, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, float& CallFuncGetEndTimeReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, bool& CallFuncIsListItemExpandedReturnValue, class UObject*& K2NodeEventListItemObject); // (Final | 0x00008000 | HasDefaults)
};

