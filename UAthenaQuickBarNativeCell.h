// Class /Script/FortniteUI.AthenaQuickBarNativeCell
// Size: 0x740
class UAthenaQuickBarNativeCell : public UContentWidget
{
	struct FVector2D SelectionOffset; // 0x160 (0x10)
	float SelectionAnimLengthSeconds; // 0x170 (0x4)
	unsigned char unreflected_174[0xc]; // 0x174 (0xc) 
	struct FSlateBrush EmptyCellBrush; // 0x180 (0xc0)
	struct FVector2D EmptyCellPadding; // 0x240 (0x10)
	struct FSlateBrush SelectedCellBrush; // 0x250 (0xc0)
	struct FSlateBrush InactivePortraitBrush; // 0x310 (0xc0)
	struct FSlateBrush ItemPortraitBrush; // 0x3d0 (0xc0)
	struct FSlateBrush AmmoTypeBrush; // 0x490 (0xc0)
	struct FVector2D AmmoTypeIconSize; // 0x550 (0x10)
	struct FVector2D AmmoTypeIconPadding; // 0x560 (0x10)
	struct FSlateFontInfo ItemCountFont; // 0x570 (0x58)
	struct FLinearColor ItemCountColor; // 0x5c8 (0x10)
	float ItemCountOutlineAlphaFactor; // 0x5d8 (0x4)
	unsigned char unreflected_5dc[0x4]; // 0x5dc (0x4) 
	struct FSlateBrush GadgetFuelBrush; // 0x5e0 (0xc0)
	struct FVector2D GadgetFuelPadding; // 0x6a0 (0x10)
	float GadgetFuelChargeCountOutlineAlphaFactor; // 0x6b0 (0x4)
	unsigned char unreflected_6b4[0x4]; // 0x6b4 (0x4) 
	struct FSlateFontInfo GadgetFuelChargeCountFont; // 0x6b8 (0x58)
	struct FLinearColor GadgetFuelChargeCountColor; // 0x710 (0x10)
	unsigned char bShowSelectedWhenEmpty; // 0x720 (0x1)
	unsigned char bSupportsWideItems; // 0x720 (0x1)
	unsigned char padding_721[0x1f]; // 0x721 (0x1f)

	/* Functions */

	// Function /Script/FortniteUI.AthenaQuickBarNativeCell.UpdateItemPortrait (Underlying native function: UpdateItemPortrait 0xa890108)
	void UpdateItemPortrait(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaQuickBarNativeCell.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa88f8e0)
	void SetItemToRepresent(class UFortItem*& InItemToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaQuickBarNativeCell.SetIsSelected (Underlying native function: SetIsSelected 0xa88f6dc)
	void SetIsSelected(bool& bInSelected); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaQuickBarNativeCell.DesiredSizeOverride (Underlying native function: DesiredSizeOverride 0xa88d180)
	void DesiredSizeOverride(float& WidthOverride, float& HeightOverride); // (Final | Native | Public | BlueprintCallable)
};

