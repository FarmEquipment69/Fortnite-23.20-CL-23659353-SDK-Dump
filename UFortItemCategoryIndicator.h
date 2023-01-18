// Class /Script/FortniteUI.FortItemCategoryIndicator
// Size: 0x188
class UFortItemCategoryIndicator : public UFortIconWithLabel
{
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x168 (0x8)
	enum EFortItemCategoryOrdinal OrdinalOfCategoryToRepresent; // 0x170 (0x1)
	unsigned char padding_171[0x17]; // 0x171 (0x17)

	/* Functions */

	// Function /Script/FortniteUI.FortItemCategoryIndicator.SetOrdinalOfCategoryToRepresent (Underlying native function: SetOrdinalOfCategoryToRepresent 0xa8270e0)
	void SetOrdinalOfCategoryToRepresent(enum EFortItemCategoryOrdinal& ItemCategoryOrdinal); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCategoryIndicator.SetLabelColorOverride (Underlying native function: SetLabelColorOverride 0xa827020)
	void SetLabelColorOverride(struct FLinearColor& InLabelColorOverride); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCategoryIndicator.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa826f10)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCategoryIndicator.ClearLabelColorOverride (Underlying native function: ClearLabelColorOverride 0xa82584c)
	void ClearLabelColorOverride(); // (Final | Native | Public | BlueprintCallable)
};

