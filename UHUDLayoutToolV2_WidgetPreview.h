// Class /Script/FortniteUI.HUDLayoutToolV2_WidgetPreview
// Size: 0x2d8
class UHUDLayoutToolV2_WidgetPreview : public UCommonUserWidget
{
	class UCreateHUDWidgetDragDropOperation* CreateHUDWidgetOperation; // 0x290 (0x8)
	unsigned char unreflected_298[0x10]; // 0x298 (0x10) 
	float DragDistanceThresholdMillimeters; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x1c]; // 0x2ac (0x1c) 
	class UCommonTextBlock* TextBlockInstancesLeftCounter; // 0x2c8 (0x8)
	class UBorder* BorderBackground; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.HUDLayoutToolV2_WidgetPreview.HandleOperationDrop (Underlying native function: HandleOperationDrop 0xa620130)
	void HandleOperationDrop(class UDragDropOperation*& Operation); // (Final | Native | Private)
};

