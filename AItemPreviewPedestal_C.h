// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C
// Size: 0x4f9
class AItemPreviewPedestal_C : public AFortCameraTargetPedestal
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4f0 (0x8)
	bool FloorEnabled; // 0x4f8 (0x1)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor (Has no native function)
	void RemoveFloor(class AFortItemPreviewActor*& Preview, class AWrapPreview_C*& K2NodeDynamicCastAsWrapPreview, bool& K2NodeDynamicCastbSuccess, class AItemOnPawnPreview_C*& K2NodeDynamicCastAsItemonPawnPreview, bool& K2NodeDynamicCastbSuccess1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed (Has no native function)
	void OnItemDisplayed(enum EFortItemType& ItemType); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal (Has no native function)
	void ExecuteUbergraphItemPreviewPedestal(int& EntryPoint, enum EFortItemType& K2NodeEventItemType); // (Final | 0x00008000)
};

