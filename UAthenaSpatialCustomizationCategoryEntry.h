// Class /Script/FortniteUI.AthenaSpatialCustomizationCategoryEntry
// Size: 0x14c0
class UAthenaSpatialCustomizationCategoryEntry : public UAthenaSpatialNavigationButton
{
	class UAthenaSpatialCustomizationChoice* ChoiceSelectedChoice; // 0x1438 (0x8)
	class UCommonTextBlock* TextEntryName; // 0x1440 (0x8)
	class UCommonTextBlock* TextEntryNameBig; // 0x1448 (0x8)
	class UCommonRichTextBlock* RichTextStateDescription; // 0x1450 (0x8)
	class UFortTokenType* CategoryKey; // 0x1458 (0x8)
	bool bUseColorPicker; // 0x1460 (0x1)
	bool bCategoryDefaultColorIsNull; // 0x1461 (0x1)
	unsigned char unreflected_1462[0x2]; // 0x1462 (0x2) 
	float LowerClampingColorBound; // 0x1464 (0x4)
	unsigned char padding_1468[0x58]; // 0x1468 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialCustomizationCategoryEntry.OnCategoryStateSet (Has no native function)
	void OnCategoryStateSet(enum ESpatialCustomizationCategoryState& State, struct FLinearColor& StateColor); // (Event | Protected | HasDefaults | BlueprintEvent)
};

