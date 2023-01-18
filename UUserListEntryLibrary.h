// Class /Script/UMG.UserListEntryLibrary
// Size: 0x28
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/UMG.UserListEntryLibrary.IsListItemSelected (Underlying native function: IsListItemSelected 0x289fc80)
	static bool IsListItemSelected(struct TScriptInterface<class IUserListEntry>& UserListEntry); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.UserListEntryLibrary.IsListItemExpanded (Underlying native function: IsListItemExpanded 0x9aecf30)
	static bool IsListItemExpanded(struct TScriptInterface<class IUserListEntry>& UserListEntry); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.UserListEntryLibrary.GetOwningListView (Underlying native function: GetOwningListView 0x9aec928)
	static class UListViewBase* GetOwningListView(struct TScriptInterface<class IUserListEntry>& UserListEntry); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

