// Class /Script/FortniteUI.FortHeroSupportPerkIndicator
// Size: 0x178
class UFortHeroSupportPerkIndicator : public UFortIconWithLabel
{
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x168 (0x8)
	enum EFortSupportBonusType SupportTypeToRepresent; // 0x170 (0x1)
	unsigned char padding_171[0x7]; // 0x171 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortHeroSupportPerkIndicator.SetSupportTypeToRepresent (Underlying native function: SetSupportTypeToRepresent 0xa827454)
	void SetSupportTypeToRepresent(enum EFortSupportBonusType& SupportTypeToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHeroSupportPerkIndicator.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa826e90)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | Native | Public | BlueprintCallable)
};

