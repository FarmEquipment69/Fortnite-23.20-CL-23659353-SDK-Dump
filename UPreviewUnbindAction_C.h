// WidgetBlueprintGeneratedClass /Game/Athena/Settings/Screens/PreviewUnbindAction.PreviewUnbindAction_C
// Size: 0x2a8
class UPreviewUnbindAction_C : public UFortSettingsPreviewActionUnbind
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x280 (0x8)
	class UCommonBorder* BorderFrame; // 0x288 (0x8)
	class UCommonBorder* CommonBorder0; // 0x290 (0x8)
	class USizeBox* PrimaryKeybindTextSizeBox; // 0x298 (0x8)
	class USizeBox* SecondaryKeybindTextSizeBox; // 0x2a0 (0x8)

	/* Functions */

	// Function /Game/Athena/Settings/Screens/PreviewUnbindAction.PreviewUnbindAction_C.BP_OnEntryReleased (Has no native function)
	void BPOnEntryReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/Screens/PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged (Has no native function)
	void BPOnItemExpansionChanged(bool& bIsExpanded); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/Screens/PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged (Has no native function)
	void BPOnItemSelectionChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/Screens/PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet (Has no native function)
	void OnListItemObjectSet(class UObject*& ListItemObject); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/Screens/PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction (Has no native function)
	void ExecuteUbergraphPreviewUnbindAction(int& EntryPoint, class UObject*& K2NodeEventListItemObject, bool& K2NodeEventbIsExpanded, bool& K2NodeEventbIsSelected); // (Final | 0x00008000)
};

