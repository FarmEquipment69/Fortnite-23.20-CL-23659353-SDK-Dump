// Class /Script/FortniteUI.FortAttributeList_NUI
// Size: 0x2c0
class UFortAttributeList_NUI : public UCommonUserWidget
{
	class UClass* AttributeItemClass; // 0x290 (0x8)
	bool bHoverEnabledOnElements; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	struct TArray<class UFortAttributeListItem_NUI*> ShownAttributeWidgets; // 0x2a0 (0x10)
	unsigned char padding_2b0[0x10]; // 0x2b0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortAttributeList_NUI.SetPreviewData (Underlying native function: SetPreviewData 0xa8f23fc)
	void SetPreviewData(struct TArray<struct FFortDisplayAttribute>& Data); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeList_NUI.SetData (Underlying native function: SetData 0xa8f1c00)
	void SetData(struct TArray<struct FFortDisplayAttribute>& Data); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeList_NUI.OnRemoveShownAttributeListItem (Has no native function)
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI*& AttributeListItemWidget, int& AtIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeList_NUI.OnClearShownAttributes (Has no native function)
	void OnClearShownAttributes(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeList_NUI.OnAddShownAttributeListItem (Has no native function)
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI*& AttributeListItemWidget); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeList_NUI.ClearPreviewData (Underlying native function: ClearPreviewData 0xa8ea324)
	void ClearPreviewData(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

