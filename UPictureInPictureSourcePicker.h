// Class /Script/PictureInPictureUI.PictureInPictureSourcePicker
// Size: 0x5a0
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FVector2D FullScreenTranslation; // 0x3b0 (0x10)
	struct FVector2D StandardTranslation; // 0x3c0 (0x10)
	class UVerticalBox* VerticalBoxMain; // 0x3d0 (0x8)
	unsigned char unreflected_3d8[0x8]; // 0x3d8 (0x8) 
	struct FSlateBrush FullScreenActionBrush; // 0x3e0 (0xc0)
	struct FSlateBrush StandardScreenActionBrush; // 0x4a0 (0xc0)
	unsigned char unreflected_560[0x1]; // 0x560 (0x1) 
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x561 (0x3)
	unsigned char unreflected_564[0x4]; // 0x564 (0x4) 
	class UCommonTextBlock* TextItemName; // 0x568 (0x8)
	class UFortPickerOverlay* PickerOverlayMediaSource; // 0x570 (0x8)
	class UOverlay* OverlayMain; // 0x578 (0x8)
	class UTexture2D* DefaultItemTexture; // 0x580 (0x8)
	class UPictureInPictureMediaController* CurrentPartner; // 0x588 (0x8)
	unsigned char padding_590[0x10]; // 0x590 (0x10)

	/* Functions */

	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged (Underlying native function: HandleOnPartnerSourceChanged 0x7520370)
	void HandleOnPartnerSourceChanged(struct TArray<struct FPiPPartnerSource>& CurrentSources); // (Final | Native | Private | HasOutParms)

	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged (Underlying native function: HandleOnPartnerChanged 0x7520248)
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls*& NewPartner); // (Final | Native | Private)
};

