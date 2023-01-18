// Class /Script/FortniteUI.PickupStream
// Size: 0x310
class UPickupStream : public UFortHUDElementWidget
{
	struct TArray<struct FPickupStreamEntry> PickupDisplayEntries; // 0x2d0 (0x10)
	unsigned char unreflected_2e0[0x10]; // 0x2e0 (0x10) 
	int MaxDisplayedItems; // 0x2f0 (0x4)
	unsigned char unreflected_2f4[0x4]; // 0x2f4 (0x4) 
	class UClass* PickupEntryWidgetClass; // 0x2f8 (0x8)
	float ExpirationTime; // 0x300 (0x4)
	unsigned char unreflected_304[0x4]; // 0x304 (0x4) 
	class UVerticalBox* VerticalBoxPickupMessages; // 0x308 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.PickupStream.RefreshPickupEntry (Has no native function)
	void RefreshPickupEntry(class UUserWidget*& EntryWidget, struct TWeakObjectPtr<class UTexture2D>& Icon, int& Count); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.PickupStream.HandleItemPickedUp (Underlying native function: HandleItemPickedUp 0xa7c3314)
	void HandleItemPickedUp(class UFortWorldItem*& WorldItem, int& Count); // (Final | Native | Protected)
};

