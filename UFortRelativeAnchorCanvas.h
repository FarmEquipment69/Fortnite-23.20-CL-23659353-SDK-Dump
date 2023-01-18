// Class /Script/FortniteUI.FortRelativeAnchorCanvas
// Size: 0x178
class UFortRelativeAnchorCanvas : public UPanelWidget
{
	int ZLayerOffset; // 0x160 (0x4)
	unsigned char padding_164[0x14]; // 0x164 (0x14)

	/* Functions */

	// Function /Script/FortniteUI.FortRelativeAnchorCanvas.SetZLayerOffset (Underlying native function: SetZLayerOffset 0xa623124)
	void SetZLayerOffset(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRelativeAnchorCanvas.AddSlot (Underlying native function: AddSlot 0xa61ba1c)
	class UFortRelativeAnchorCanvasSlot* AddSlot(class UWidget*& ContentWidget, class UWidget*& AnchorWidget); // (Final | Native | Public | BlueprintCallable)
};

