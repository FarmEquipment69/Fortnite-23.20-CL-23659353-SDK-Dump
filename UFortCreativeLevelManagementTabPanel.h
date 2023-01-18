// Class /Script/FortniteUI.FortCreativeLevelManagementTabPanel
// Size: 0x550
class UFortCreativeLevelManagementTabPanel : public UFortCreativeContentBrowserTabPanelBase
{
	class ULevelManagementListView* LevelManagementListViewOptions; // 0x3f0 (0x8)
	unsigned char unreflected_3f8[0x8]; // 0x3f8 (0x8) 
	struct FSlateBrush LevelManagementBrush; // 0x400 (0xc0)
	struct FLevelInstanceListElement CurrentLevelEntry; // 0x4c0 (0x38)
	unsigned char unreflected_4f8[0x8]; // 0x4f8 (0x8) 
	struct TArray<struct FLevelInstanceListElement> LevelEntries; // 0x500 (0x10)
	unsigned char padding_510[0x40]; // 0x510 (0x40)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeLevelManagementTabPanel.LevelListUpdated (Underlying native function: LevelListUpdated 0xa6d9ce0)
	void LevelListUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeLevelManagementTabPanel.HandleLevelDeleteClicked (Underlying native function: HandleLevelDeleteClicked 0xa6d939c)
	void HandleLevelDeleteClicked(struct FLevelInstanceListElement& LevelInstanceListElement); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeLevelManagementTabPanel.ClearAllItems (Underlying native function: ClearAllItems 0xa6d75b8)
	void ClearAllItems(); // (Final | Native | Public | BlueprintCallable)
};

