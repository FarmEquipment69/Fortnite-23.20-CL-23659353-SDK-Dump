// Class /Script/CRD_ClassSelectorUI.CreativeClassEntry
// Size: 0x1430
class UCreativeClassEntry : public UCreativeClassSelectorButton
{
	unsigned char unreflected_1420[0x8]; // 0x1420 (0x8) 
	class UCreativeClassItemInfo* ItemInfo; // 0x1428 (0x8)

	/* Functions */

	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet (Has no native function)
	void OnClassEntryDataSet(bool& bIsCurrentClass, bool& bIsPendingClass); // (Event | Public | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnBrowsingLoadout (Has no native function)
	void OnBrowsingLoadout(bool& bBrowsingLoadout); // (Event | Public | BlueprintEvent)
};

