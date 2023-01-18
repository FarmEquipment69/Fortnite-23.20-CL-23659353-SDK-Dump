// Class /Script/FortniteUI.BacchusQuickbar
// Size: 0x3b0
class UBacchusQuickbar : public UBacchusQuickbarBase
{
	float SlotSize; // 0x318 (0x4)
	enum EComboSlotType SlotType; // 0x31c (0x1)
	bool bIsBackwards; // 0x31d (0x1)
	unsigned char unreflected_31e[0x2]; // 0x31e (0x2) 
	class UFortQuickbarBase* BacchusQuickbarPrimary; // 0x320 (0x8)
	class UFortQuickbarBase* BacchusQuickbarSecondary; // 0x328 (0x8)
	class UFortQuickbarBase* BacchusQuickbarCreative; // 0x330 (0x8)
	class UCommonVisibilitySwitcher* BarSwitcher; // 0x338 (0x8)
	unsigned char unreflected_340[0x60]; // 0x340 (0x60) 
	struct FGameplayTag SlotLocksPropertyTag; // 0x3a0 (0x4)
	struct FGameplayTag ReversePropertyTag; // 0x3a4 (0x4)
	struct FGameplayTag SlotTypePropertyTag; // 0x3a8 (0x4)
	unsigned char padding_3ac[0x4]; // 0x3ac (0x4)

	/* Functions */

	// Function /Script/FortniteUI.BacchusQuickbar.Refresh (Underlying native function: Refresh 0x812310c)
	void Refresh(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusQuickbar.OnQuickbarChanged (Has no native function)
	void OnQuickbarChanged(class UFortQuickbarBase*& NewBar, class UFortQuickbarBase*& OldBar); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusQuickbar.OnModeChanged (Underlying native function: OnModeChanged 0xa5a3f60)
	void OnModeChanged(enum EFortQuickBars& NewQuickbar, int& FocusedSlot); // (Final | Native | Protected)
};

