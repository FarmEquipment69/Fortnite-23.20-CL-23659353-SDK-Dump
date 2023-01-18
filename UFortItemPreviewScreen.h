// Class /Script/FortniteUI.FortItemPreviewScreen
// Size: 0x668
class UFortItemPreviewScreen : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x10]; // 0x518 (0x10) 
	struct FDataTableRowHandle ItemViewUnifiedSupportsCameraControlInputAction; // 0x528 (0x10)
	struct FDataTableRowHandle ItemViewUnifiedZoomInputAction; // 0x538 (0x10)
	struct FDataTableRowHandle ItemViewZoomOutInputAction; // 0x548 (0x10)
	struct FDataTableRowHandle ItemViewZoomInInputAction; // 0x558 (0x10)
	struct FDataTableRowHandle ItemViewRotateInputAction; // 0x568 (0x10)
	class UWidgetAnimation* AnimationToHideItemInfo; // 0x578 (0x8)
	bool bAutoShowDetails; // 0x580 (0x1)
	bool bItemDetailsHidden; // 0x581 (0x1)
	unsigned char unreflected_582[0x2]; // 0x582 (0x2) 
	float HideItemInfoHeaderDurationSecs; // 0x584 (0x4)
	unsigned char unreflected_588[0x8]; // 0x588 (0x8) 
	bool bAllowItemRotation; // 0x590 (0x1)
	bool bAllowItemZooming; // 0x591 (0x1)
	enum EFrontEndCamera FrontEndCamera; // 0x592 (0x1)
	unsigned char unreflected_593[0x1]; // 0x593 (0x1) 
	struct FGameplayTag PreviewSceneChangerTag; // 0x594 (0x4)
	struct FGameplayTag PreviewSceneChangerOverrideTag; // 0x598 (0x4)
	unsigned char unreflected_59c[0x4]; // 0x59c (0x4) 
	class AFortItemPreviewSceneChanger* PreviewSceneChanger; // 0x5a0 (0x8)
	class UFortItemView* ItemViewObject; // 0x5a8 (0x8)
	float CameraEntryTransitionDuration; // 0x5b0 (0x4)
	unsigned char unreflected_5b4[0x4]; // 0x5b4 (0x4) 
	class UCurveFloat* CameraEntryTransitionCurve; // 0x5b8 (0x8)
	unsigned char unreflected_5c0[0x80]; // 0x5c0 (0x80) 
	class UWidget* WidgetCameraFrame; // 0x640 (0x8)
	class UCommonButtonBase* ButtonPreviewAction; // 0x648 (0x8)
	class UCommonButtonBase* ButtonCamera; // 0x650 (0x8)
	class UCommonActivatableWidget* OverrideFocusWidget; // 0x658 (0x8)
	class UFortItemDownloadIndicator* ItemDownloadIndicator; // 0x660 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPreviewScreen.ShowItemDetails (Underlying native function: ShowItemDetails 0xa73df44)
	void ShowItemDetails(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPreviewScreen.OnPreviewActionButtonUpdated (Has no native function)
	void OnPreviewActionButtonUpdated(struct FText& RowDisplayName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPreviewScreen.HideItemDetails (Underlying native function: HideItemDetails 0xa73d4f8)
	void HideItemDetails(); // (Final | Native | Public | BlueprintCallable)
};

