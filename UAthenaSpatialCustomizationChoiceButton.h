// Class /Script/FortniteUI.AthenaSpatialCustomizationChoiceButton
// Size: 0x1470
class UAthenaSpatialCustomizationChoiceButton : public UCommonButtonLegacy
{
	class UAthenaSpatialCustomizationChoice* Choice; // 0x1430 (0x8)
	class UFortLazyImage* ImageSelected; // 0x1438 (0x8)
	struct TWeakObjectPtr<class UObject> SelectedImage; // 0x1440 (0x28)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialCustomizationChoiceButton.OnSetupChoice (Has no native function)
	void OnSetupChoice(enum ESpatialCustomizationCategoryState& CategoryState, struct FLinearColor& CategoryStateColor); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)
};

