// Class /Script/FortniteUI.AthenaCreativeItemTileButton
// Size: 0x15f0
class UAthenaCreativeItemTileButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UAthenaCreativeItemTileView* ParentView; // 0x1438 (0x8)
	class UFortItemDefinition* ItemDefinition; // 0x1440 (0x8)
	struct FFortItemEntry ItemEntry; // 0x1448 (0x1a0)
	unsigned char padding_15e8[0x8]; // 0x15e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCreativeItemTileButton.OnLoadedItem (Has no native function)
	void OnLoadedItem(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCreativeItemTileButton.OnEntryClick (Has no native function)
	void OnEntryClick(class UAthenaCreativeItemTileButton*& Entry); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCreativeItemTileButton.MakeFortItemEntryObjectWrapper (Underlying native function: MakeFortItemEntryObjectWrapper 0xa4e25b4)
	static class UAthenaCreativeItemEntryObjectWrapper* MakeFortItemEntryObjectWrapper(class UObject*& Target, struct FFortItemEntry& InItemEntry); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.AthenaCreativeItemTileButton.GetItemTypeCount (Underlying native function: GetItemTypeCount 0xa4e0c58)
	int GetItemTypeCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.AthenaCreativeItemTileButton.CompareToItemEntry (Underlying native function: CompareToItemEntry 0xa4e09c0)
	bool CompareToItemEntry(struct FFortItemEntry& InItemEntry); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

