// Class /Script/FortniteUI.UINavigationManager
// Size: 0x48
class UUINavigationManager : public UObject
{
	struct FMulticastInlineDelegate OnNavigationEvent; // 0x28 (0x10)
	struct TArray<struct FUINavigationEntry> NavigationStack; // 0x38 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.UINavigationManager.PushNavigation (Underlying native function: PushNavigation 0xa72631c)
	void PushNavigation(struct FText& DisplayName, class UObject*& ObjectData, struct FName& IdData, int& IntData, struct FDelegate& OnNavigateTo, struct FDelegate& OnNavigateFrom); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.UINavigationManager.PopNavigation (Underlying native function: PopNavigation 0xa725a24)
	void PopNavigation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.UINavigationManager.NavigationToIndex (Underlying native function: NavigationToIndex 0xa725578)
	void NavigationToIndex(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.UINavigationManager.GetStackSize (Underlying native function: GetStackSize 0x7f92868)
	int GetStackSize(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.UINavigationManager.GetDisplayName (Underlying native function: GetDisplayName 0xa723a5c)
	struct FText GetDisplayName(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.UINavigationManager.ClearStack (Underlying native function: ClearStack 0xa723430)
	void ClearStack(); // (Final | Native | Public | BlueprintCallable)
};

