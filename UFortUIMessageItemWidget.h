// Class /Script/FortniteUI.FortUIMessageItemWidget
// Size: 0x2d0
class UFortUIMessageItemWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnMessageDisplayed; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnMessageRemoved; // 0x2a0 (0x10)
	struct FName MessageID; // 0x2b0 (0x4)
	int StackSize; // 0x2b4 (0x4)
	float DisplayDuration; // 0x2b8 (0x4)
	float RemoveDuration; // 0x2bc (0x4)
	unsigned char padding_2c0[0x10]; // 0x2c0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortUIMessageItemWidget.OnStackSizeChanged (Has no native function)
	void OnStackSizeChanged(int& OldStackSize); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIMessageItemWidget.OnReturnedToPool (Has no native function)
	void OnReturnedToPool(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIMessageItemWidget.OnBeginRemove (Has no native function)
	void OnBeginRemove(); // (Event | Protected | BlueprintEvent)
};

