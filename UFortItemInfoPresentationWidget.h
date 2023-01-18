// Class /Script/FortniteUI.FortItemInfoPresentationWidget
// Size: 0x2c0
class UFortItemInfoPresentationWidget : public UCommonUserWidget
{
	class UAthenaRewardItemTypeRarityTag* AthenaRewardItemTypeRarityTag; // 0x290 (0x8)
	class UCommonTextBlock* TextName; // 0x298 (0x8)
	class UCommonTextBlock* TextDescReward; // 0x2a0 (0x8)
	class UCommonTextBlock* TextVariance; // 0x2a8 (0x8)
	class UCommonTextBlock* TextDescVariance; // 0x2b0 (0x8)
	class UOverlay* OverlayMainView; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemInfoPresentationWidget.PopulateUsingItem (Underlying native function: PopulateUsingItem 0x149e174)
	void PopulateUsingItem(class UFortItem*& NewItem); // (Final | Native | Public | BlueprintCallable)
};

