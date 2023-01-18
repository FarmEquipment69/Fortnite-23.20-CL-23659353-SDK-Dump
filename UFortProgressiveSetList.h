// Class /Script/CrewUI.FortProgressiveSetList
// Size: 0x428
class UFortProgressiveSetList : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UAthenaScrollBox* ScrollBoxSetList; // 0x3b0 (0x8)
	class UFortSwipePanel* SwipePanelNavigation; // 0x3b8 (0x8)
	class UCommonButtonGroupBase* ButtonGroupSetTiles; // 0x3c0 (0x8)
	int NumTilesPerPage; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	struct TArray<class UFortProgressiveSetTile*> SetTiles; // 0x3d0 (0x10)
	unsigned char padding_3e0[0x48]; // 0x3e0 (0x48)

	/* Functions */

	// Function /Script/CrewUI.FortProgressiveSetList.ClearSetTiles (Has no native function)
	void ClearSetTiles(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveSetList.AddSetTile (Has no native function)
	class UFortProgressiveSetTile* AddSetTile(); // (Event | Protected | BlueprintEvent)
};

