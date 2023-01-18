// Class /Script/FortniteUI.BacchusQuickbarComboSlot
// Size: 0x370
class UBacchusQuickbarComboSlot : public UBacchusQuickbarBase
{
	float SlotSize; // 0x318 (0x4)
	enum EComboSlotType SlotType; // 0x31c (0x1)
	unsigned char unreflected_31d[0x3]; // 0x31d (0x3) 
	int SlotIndex; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	class UBacchusQuickbarSlotBase* PrimarySlot; // 0x328 (0x8)
	class UBacchusQuickbarSlotBase* SecondarySlot; // 0x330 (0x8)
	class UBacchusQuickbarSlotBase* CreativeSlot; // 0x338 (0x8)
	struct FGameplayTagContainer RefreshHUDStateTags; // 0x340 (0x20)
	struct FGameplayTag SlotTypePropertyTag; // 0x360 (0x4)
	struct FGameplayTag SlotLockPropertyTag; // 0x364 (0x4)
	struct FGameplayTag SlotNumberPropertyTag; // 0x368 (0x4)
	unsigned char padding_36c[0x4]; // 0x36c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.BacchusQuickbarComboSlot.SetSize (Underlying native function: SetSize 0xa5a4308)
	void SetSize(float& NewButtonSize); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusQuickbarComboSlot.SetQuickbarType (Underlying native function: SetQuickbarType 0xa5a448c)
	void SetQuickbarType(int& NewType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.BacchusQuickbarComboSlot.Refresh (Underlying native function: Refresh 0x8783edc)
	void Refresh(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusQuickbarComboSlot.GetQuickbarType (Underlying native function: GetQuickbarType 0xa5a2d4c)
	enum EFortQuickBars GetQuickbarType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

