// Class /Script/FortniteUI.HUDLayoutToolV2_QuickbarProxy
// Size: 0x430
class UHUDLayoutToolV2_QuickbarProxy : public UFortMobileHUDElementProxy
{
	struct TMap<enum EComboSlotType, struct FQuickbarProxySlotIconContainer> QuickbarProxySlotIcons; // 0x378 (0x50)
	struct TMap<struct FGameplayTag, int> SlotAmountOverridePerContext; // 0x3c8 (0x50)
	int DefaultSlotAmount; // 0x418 (0x4)
	struct FGameplayTag SlotLocksPropertyTag; // 0x41c (0x4)
	struct FGameplayTag ReversePropertyTag; // 0x420 (0x4)
	struct FGameplayTag SlotTypePropertyTag; // 0x424 (0x4)
	class UFortDynamicEntryBox* EntryBoxQuickbarProxySlots; // 0x428 (0x8)
};

