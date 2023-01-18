// Class /Script/FortniteUI.FortReplayHighlightItemBase
// Size: 0x15b0
class UFortReplayHighlightItemBase : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x10]; // 0x1430 (0x10) 
	class UImage* ImageIcon; // 0x1440 (0x8)
	class UTextBlock* TextBlockTitle; // 0x1448 (0x8)
	class UTextBlock* TextBlockDuration; // 0x1450 (0x8)
	struct TMap<enum EHighlightReelTypes, struct FSlateBrush> IconMap; // 0x1458 (0x50)
	unsigned char unreflected_14a8[0x8]; // 0x14a8 (0x8) 
	struct FSlateBrush DefaultIcon; // 0x14b0 (0xc0)
	unsigned char padding_1570[0x40]; // 0x1570 (0x40)

	/* Functions */

	// Function /Script/FortniteUI.FortReplayHighlightItemBase.HandlePlayItemClicked (Underlying native function: HandlePlayItemClicked 0xa5d11bc)
	void HandlePlayItemClicked(); // (Final | Native | Public | BlueprintCallable)
};

