// Class /Script/FortniteUI.FortItemRatingIndicator
// Size: 0x750
class UFortItemRatingIndicator : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x290 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToCompareWith; // 0x298 (0x8)
	struct FFortMultiSizeBrush RatingTypeIcon; // 0x2a0 (0x480)
	int RatingValue; // 0x720 (0x4)
	enum EFortBuffState ComparisonResult; // 0x724 (0x1)
	bool ShouldAppearEnchanted; // 0x725 (0x1)
	unsigned char padding_726[0x2a]; // 0x726 (0x2a)

	/* Functions */

	// Function /Script/FortniteUI.FortItemRatingIndicator.SetItemViewContext (Underlying native function: SetItemViewContext 0xa84ab6c)
	void SetItemViewContext(struct TScriptInterface<class IFortItemViewContextInterface>& ItemViewContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemRatingIndicator.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa84a584)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemRatingIndicator.SetItemToCompareWith (Underlying native function: SetItemToCompareWith 0xa84a218)
	void SetItemToCompareWith(class UFortItem*& ItemToCompareWith); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemRatingIndicator.HandleViewModelChanged (Has no native function)
	void HandleViewModelChanged(); // (Event | Protected | BlueprintEvent)
};

