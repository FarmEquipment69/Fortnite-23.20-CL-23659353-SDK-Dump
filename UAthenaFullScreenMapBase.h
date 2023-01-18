// Class /Script/FortniteUI.AthenaFullScreenMapBase
// Size: 0x528
class UAthenaFullScreenMapBase : public UCommonActivatablePanelLegacy
{
	class UAthenaMapLayerContainer* MapLayerContainer; // 0x4e0 (0x8)
	struct FDataTableRowHandle ToggleMapMarkerRowHandle; // 0x4e8 (0x10)
	struct TWeakObjectPtr<class UFortMarkerDetailsTable> SoftMarkerDetailsTable; // 0x4f8 (0x28)
	bool bMapLayerContainerEnabled; // 0x520 (0x1)
	unsigned char padding_521[0x7]; // 0x521 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaFullScreenMapBase.ShowMapLayerContainer (Has no native function)
	void ShowMapLayerContainer(bool& bShowing); // (Event | Protected | BlueprintEvent)
};

