// Class /Script/FortniteUI.LevelManagementListEntry
// Size: 0x1450
class ULevelManagementListEntry : public UCommonButtonBase
{
	unsigned char unreflected_13e0[0x8]; // 0x13e0 (0x8) 
	class ULevelManagementListView* ParentView; // 0x13e8 (0x8)
	struct FLevelInstanceListElement LevelInstanceListElementEntry; // 0x13f0 (0x38)
	class UCommonTextBlock* TextLevelName; // 0x1428 (0x8)
	class UCommonTextBlock* TextNumPortals; // 0x1430 (0x8)
	class UCommonTextBlock* TextNumRefs; // 0x1438 (0x8)
	class UWidgetSwitcher* WidgetSwitcherTerrainType; // 0x1440 (0x8)
	class UCommonButtonBase* IconTextButtonDelete; // 0x1448 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.LevelManagementListEntry.UpdateSelected (Has no native function)
	void UpdateSelected(bool& bEntrySelected); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.LevelManagementListEntry.HandleLevelDeleteClicked (Underlying native function: HandleLevelDeleteClicked 0xa509a28)
	void HandleLevelDeleteClicked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LevelManagementListEntry.CompareToLevelInstanceInfoEntry (Underlying native function: CompareToLevelInstanceInfoEntry 0xa509224)
	bool CompareToLevelInstanceInfoEntry(struct FLevelInstanceListElement& InLevelInstanceInfoEntry); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

