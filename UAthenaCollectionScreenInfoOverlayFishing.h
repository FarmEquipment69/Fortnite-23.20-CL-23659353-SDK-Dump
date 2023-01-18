// Class /Script/FortniteUI.AthenaCollectionScreenInfoOverlayFishing
// Size: 0x4b8
class UAthenaCollectionScreenInfoOverlayFishing : public UAthenaCollectionScreenInfoOverlay
{
	bool bNeedsProFishingRod; // 0x470 (0x1)
	unsigned char unreflected_471[0x7]; // 0x471 (0x7) 
	struct FText NoneText; // 0x478 (0x18)
	class UCommonRichTextBlock* RichTextPersonalBest; // 0x490 (0x8)
	struct FText ScaleRangeTextFormat; // 0x498 (0x18)
	class UCommonRichTextBlock* RichTextScaleRange; // 0x4b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlayFishing.BP_OnStarRatingSet (Has no native function)
	void BPOnStarRatingSet(int& NumStars); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionScreenInfoOverlayFishing.BP_OnNormalizedLengthSet (Has no native function)
	void BPOnNormalizedLengthSet(float& NormalizedLength, float& NormalizedMinLength, float& NormalizedMaxLength); // (Event | Protected | BlueprintEvent)
};

