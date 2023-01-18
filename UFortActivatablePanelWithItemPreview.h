// Class /Script/FortniteUI.FortActivatablePanelWithItemPreview
// Size: 0x660
class UFortActivatablePanelWithItemPreview : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x8]; // 0x518 (0x8) 
	class UFortItemView* ItemViewObject; // 0x520 (0x8)
	struct FDataTableRowHandle ItemViewUnifiedSupportsCameraControlInputAction; // 0x528 (0x10)
	struct FDataTableRowHandle ItemViewUnifiedZoomInputAction; // 0x538 (0x10)
	struct FDataTableRowHandle ItemViewZoomOutInputAction; // 0x548 (0x10)
	struct FDataTableRowHandle ItemViewZoomInInputAction; // 0x558 (0x10)
	struct FDataTableRowHandle ItemViewRotateInputAction; // 0x568 (0x10)
	unsigned char unreflected_578[0xb0]; // 0x578 (0xb0) 
	bool AllowItemRotation; // 0x628 (0x1)
	bool AllowItemZooming; // 0x629 (0x1)
	bool AutomaticallyRegisterCameraView; // 0x62a (0x1)
	bool OverrideFixedCameras; // 0x62b (0x1)
	unsigned char unreflected_62c[0x4]; // 0x62c (0x4) 
	class UDataTable* ActionDataTable; // 0x630 (0x8)
	class UWidgetAnimation* AnimationToHideItemInfo; // 0x638 (0x8)
	bool bAutoShowDetails; // 0x640 (0x1)
	bool bItemDetailsHidden; // 0x641 (0x1)
	unsigned char unreflected_642[0x2]; // 0x642 (0x2) 
	float HideItemInfoHeaderDurationSecs; // 0x644 (0x4)
	unsigned char padding_648[0x18]; // 0x648 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.ShowItemDetails (Underlying native function: ShowItemDetails 0xa50b7b8)
	void ShowItemDetails(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnVaultItemsViewed (Underlying native function: OnVaultItemsViewed 0xa50b19c)
	void OnVaultItemsViewed(struct TArray<class UFortItem*>& Items); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnItemPreviewChanged (Underlying native function: OnItemPreviewChanged 0xa50ac50)
	void OnItemPreviewChanged(class AActor*& NewPrefab, class UFortItem*& NewItem); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_7 (Underlying native function: OnCosmeticSpecialActionPressed_7 0xa50abac)
	void OnCosmeticSpecialActionPressed7(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_6 (Underlying native function: OnCosmeticSpecialActionPressed_6 0xa50ab1c)
	void OnCosmeticSpecialActionPressed6(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_5 (Underlying native function: OnCosmeticSpecialActionPressed_5 0xa50aa8c)
	void OnCosmeticSpecialActionPressed5(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_4 (Underlying native function: OnCosmeticSpecialActionPressed_4 0xa50a9fc)
	void OnCosmeticSpecialActionPressed4(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_3 (Underlying native function: OnCosmeticSpecialActionPressed_3 0xa50a96c)
	void OnCosmeticSpecialActionPressed3(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_2 (Underlying native function: OnCosmeticSpecialActionPressed_2 0xa50a8dc)
	void OnCosmeticSpecialActionPressed2(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_1 (Underlying native function: OnCosmeticSpecialActionPressed_1 0xa50a84c)
	void OnCosmeticSpecialActionPressed1(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.OnCosmeticSpecialActionPressed_0 (Underlying native function: OnCosmeticSpecialActionPressed_0 0xa50a7bc)
	void OnCosmeticSpecialActionPressed0(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.HideItemDetails (Underlying native function: HideItemDetails 0xa50a520)
	void HideItemDetails(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatablePanelWithItemPreview.GetWidgetForFramingViewedItem (Has no native function)
	class UWidget* GetWidgetForFramingViewedItem(); // (Event | Protected | BlueprintEvent)
};

