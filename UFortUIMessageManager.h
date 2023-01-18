// Class /Script/FortniteUI.FortUIMessageManager
// Size: 0xa8
class UFortUIMessageManager : public UObject
{
	struct FMulticastInlineDelegate OnMessageAvailable; // 0x28 (0x10)
	struct TArray<class UFortUIMessageItemWidget*> MessageQueue; // 0x38 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortUIMessageItemWidget>> CurrentlyDisplayedMessages; // 0x48 (0x10)
	unsigned char padding_58[0x50]; // 0x58 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortUIMessageManager.HandleMessageRemoved (Underlying native function: HandleMessageRemoved 0xa724d34)
	void HandleMessageRemoved(class UFortUIMessageItemWidget*& MessageItem); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIMessageManager.HandleMessageDisplayed (Underlying native function: HandleMessageDisplayed 0xa724cb4)
	void HandleMessageDisplayed(class UFortUIMessageItemWidget*& MessageItem); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIMessageManager.GetNumDisplayedItems (Underlying native function: GetNumDisplayedItems 0x242f83c)
	int GetNumDisplayedItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIMessageManager.GetNextMessageInQueue (Underlying native function: GetNextMessageInQueue 0xa7246c8)
	class UFortUIMessageItemWidget* GetNextMessageInQueue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIMessageManager.AddMessageItem (Underlying native function: AddMessageItem 0xa722e14)
	class UFortUIMessageItemWidget* AddMessageItem(class UClass*& MessageItemClass, class APlayerController*& OwningPlayer, struct FName& MessageID, int& StackCount); // (Final | Native | Public | BlueprintCallable)
};

