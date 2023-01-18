// Class /Script/FortniteUI.BacchusActionButton
// Size: 0x3d8
class UBacchusActionButton : public UBacchusButton
{
	struct TArray<struct FBacchusActionIconMapping> ActionMapping; // 0x390 (0x10)
	struct FName TempActionMapping; // 0x3a0 (0x4)
	unsigned char unreflected_3a4[0x4]; // 0x3a4 (0x4) 
	struct TArray<struct FGameplayTag> ItemsAllowingClickThrough; // 0x3a8 (0x10)
	bool bCapturesInput; // 0x3b8 (0x1)
	unsigned char padding_3b9[0x1f]; // 0x3b9 (0x1f)

	/* Functions */

	// Function /Script/FortniteUI.BacchusActionButton.OnCursorModeChanged (Underlying native function: OnCursorModeChanged 0xa5d1770)
	void OnCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CustomWidget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.BacchusActionButton.AddActionMappings (Underlying native function: AddActionMappings 0xa5d0ae8)
	void AddActionMappings(struct TArray<struct FBacchusActionIconMapping>& NewActionMappings); // (Final | Native | Protected | BlueprintCallable)
};

