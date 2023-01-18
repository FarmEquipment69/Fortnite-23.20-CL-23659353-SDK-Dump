// Class /Script/PictureInPictureUI.PictureInPicturePanelWidget
// Size: 0x5b8
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class USizeBox* VideoSizeBox; // 0x3b0 (0x8)
	struct FVector2D StandardVideoSize; // 0x3b8 (0x10)
	struct FVector2D StandardVideoTranslation; // 0x3c8 (0x10)
	class UImage* ImageMovie; // 0x3d8 (0x8)
	class UCommonLazyImage* ImageThumbnailPrev; // 0x3e0 (0x8)
	class UCommonLazyImage* ImageThumbnailNext; // 0x3e8 (0x8)
	class UNamedSlot* MetadataOverlaySlot; // 0x3f0 (0x8)
	class UOverlay* OverlayMain; // 0x3f8 (0x8)
	class UOverlay* OverlayKeybind; // 0x400 (0x8)
	struct FDataTableRowHandle PressedObjectInputAction; // 0x408 (0x10)
	unsigned char unreflected_418[0x8]; // 0x418 (0x8) 
	class UPictureInPicturePartnerControls* CurrentPartner; // 0x420 (0x8)
	bool bEnableUCPCheck; // 0x428 (0x1)
	unsigned char unreflected_429[0x7]; // 0x429 (0x7) 
	class UClass* SourcePickerClass; // 0x430 (0x8)
	class USoundSourceBus* SourceBus; // 0x438 (0x8)
	class UCommonActionWidget* ToggleActionWidget; // 0x440 (0x8)
	class UCommonActivatableWidget* SourcePickerWidget; // 0x448 (0x8)
	class UPictureInPicturePlayer* VideoWidget; // 0x450 (0x8)
	unsigned char unreflected_458[0x20]; // 0x458 (0x20) 
	class UAudioComponent* PIPSoundComponent; // 0x478 (0x8)
	struct FPiPPartnerSource CurrentSource; // 0x480 (0x128)
	unsigned char unreflected_5a8[0x8]; // 0x5a8 (0x8) 
	class USubtitleDisplay* Subtitles; // 0x5b0 (0x8)

	/* Functions */

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP (Underlying native function: ToggleFullScreenPiP 0x7520608)
	void ToggleFullScreenPiP(); // (Final | Native | Protected)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo (Has no native function)
	void ShowDebugInfo(bool& bShow); // (Event | Protected | BlueprintEvent)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent (Underlying native function: SetupPIPSoundComponent 0x7520538)
	void SetupPIPSoundComponent(struct FFortMediaEventsStreamAssets& InStreamAssets); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate (Underlying native function: IntentionalDeactivate 0x7520508)
	void IntentionalDeactivate(); // (Final | Native | Protected)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0x7520488)
	void HandleToggleFullscreenMap(bool& bFullscreenMapVisible); // (Final | Native | Protected)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged (Underlying native function: HandleOnPartnerSourceChanged 0x75202cc)
	void HandleOnPartnerSourceChanged(struct FPiPPartnerSource& InSelectedSource); // (Final | Native | Protected | HasOutParms)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated (Underlying native function: HandleOnPartnerListUpdated 0x1d9f600)
	void HandleOnPartnerListUpdated(); // (Final | Native | Protected)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged (Underlying native function: HandleOnPartnerChanged 0x7520040)
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls*& NewPartnerControls); // (Final | Native | Protected)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged (Underlying native function: HandleIsPictureInPictureEnabledChanged 0x751ffac)
	void HandleIsPictureInPictureEnabledChanged(bool& bIsPiPEnabled); // (Final | Native | Protected)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix (Underlying native function: FlipPIPAudioSubmix 0x751fe50)
	void FlipPIPAudioSubmix(bool& bInDefault, struct FFortMediaEventsStreamAssets& InStreamAssets, bool& bForce); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent (Underlying native function: DestroyPIPSoundComponent 0x751fe3c)
	void DestroyPIPSoundComponent(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController (Underlying native function: AutoEnableController 0x751fe28)
	void AutoEnableController(); // (Final | Native | Private)
};

