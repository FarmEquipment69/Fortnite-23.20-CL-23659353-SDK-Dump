// Class /Script/FortniteUI.CreativePublishWatermark
// Size: 0x300
class UCreativePublishWatermark : public UFortHUDElementWidget
{
	class UCommonTextBlock* TextCreatorName; // 0x2d0 (0x8)
	class UCommonTextBlock* TextMnemonic; // 0x2d8 (0x8)
	struct FText MnemonicVersionFormat; // 0x2e0 (0x18)
	unsigned char padding_2f8[0x8]; // 0x2f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.CreativePublishWatermark.HandleShowPublishWatermarkChanged (Underlying native function: HandleShowPublishWatermarkChanged 0xa4e1c50)
	void HandleShowPublishWatermarkChanged(class AActor*& Volume, bool& bShowPublishWatermark); // (Final | Native | Private)

	// Function /Script/FortniteUI.CreativePublishWatermark.HandleCreativePlotLinkedVolumeChanged (Underlying native function: HandleCreativePlotLinkedVolumeChanged 0xa4e0e5c)
	void HandleCreativePlotLinkedVolumeChanged(class AFortVolume*& CreativeLinkedVolume); // (Final | Native | Private)
};

