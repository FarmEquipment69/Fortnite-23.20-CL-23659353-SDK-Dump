// Class /Script/CrewUI.FortProgressiveItemWidget
// Size: 0x1470
class UFortProgressiveItemWidget : public UCommonButtonBase
{
	class UAthenaItemShopReactiveTileText* TileTextItemName; // 0x13e0 (0x8)
	struct FProgressiveStageItemInfo StageItemInfo; // 0x13e8 (0x70)
	unsigned char padding_1458[0x18]; // 0x1458 (0x18)

	/* Functions */

	// Function /Script/CrewUI.FortProgressiveItemWidget.OnUnhighlighted (Has no native function)
	void OnUnhighlighted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded (Has no native function)
	void OnTileMaterialLoaded(bool& bSubscribed); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemWidget.OnStageItemChanged (Has no native function)
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemWidget.OnPeekStateChanged (Has no native function)
	void OnPeekStateChanged(bool& bIsInPeekState); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemWidget.OnHighlighted (Has no native function)
	void OnHighlighted(); // (Event | Protected | BlueprintEvent)
};

