// Class /Script/FortniteUI.AthenaItemElementWidgetBase
// Size: 0x298
class UAthenaItemElementWidgetBase : public UCommonUserWidget
{
	unsigned char unreflected_298[0x298]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemElementWidgetBase.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa53222c)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemElementWidgetBase.OnPreItemToRepresentChanged (Has no native function)
	void OnPreItemToRepresentChanged(class UFortItem*& ItemToRepresent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemElementWidgetBase.OnPostItemToRepresentChanged (Has no native function)
	void OnPostItemToRepresentChanged(class UFortItem*& ItemToRepresent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemElementWidgetBase.OnItemRarityUpdated (Has no native function)
	void OnItemRarityUpdated(enum EFortRarity& ItemRarity, struct FFortRarityItemData& RarityItemData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemElementWidgetBase.HandleItemChanged (Underlying native function: HandleItemChanged 0xa530fe0)
	void HandleItemChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemElementWidgetBase.GetItemToRepresent (Underlying native function: GetItemToRepresent 0xa5308ac)
	class UFortItem* GetItemToRepresent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

