// Class /Script/FortniteGame.FortControllerRequirement_ItemSaleSlotCondition_TypeFilter
// Size: 0xb0
class UFortControllerRequirement_ItemSaleSlotCondition_TypeFilter : public UFortControllerRequirement
{
	struct FSlotSelectionMethod* SellSlot; // 0x30 (0x8)
	bool bRequireSpecificItem; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct TArray<struct FString> PersistentItemNames; // 0x40 (0x10)
	struct TArray<enum EFortItemType> AllowedItemTypes; // 0x50 (0x10)
	struct TArray<enum EFortWeaponType> AllowedWeaponTypes; // 0x60 (0x10)
	struct FGameplayTagContainer RequiredGameplayTagsExactMatch; // 0x70 (0x20)
	struct FGameplayTagContainer RequiredGameplayTagsPartialMatch; // 0x90 (0x20)
};

