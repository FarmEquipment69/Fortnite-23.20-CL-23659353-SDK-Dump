// Class /Script/FortniteUI.FortItemWidget_NUI
// Size: 0x170
class UFortItemWidget_NUI : public UWidget
{
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x148 (0x8)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x150 (0x10)
	unsigned char padding_160[0x10]; // 0x160 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortItemWidget_NUI.SetItemViewContext (Underlying native function: SetItemViewContext 0xa701ce0)
	void SetItemViewContext(struct TScriptInterface<class IFortItemViewContextInterface>& ItemViewContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemWidget_NUI.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa701c60)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | Native | Public | BlueprintCallable)
};

