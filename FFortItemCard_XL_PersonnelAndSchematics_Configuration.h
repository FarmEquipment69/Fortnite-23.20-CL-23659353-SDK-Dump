// ScriptStruct /Script/FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
// Size: 0x560
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
	struct FMargin BackgroundPadding; // 0x0 (0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10 (0x330)
	struct FVector2D BookmarkImageSize; // 0x340 (0x10)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x350 (0xd0)
	struct TWeakObjectPtr<class UClass> ItemNameTextStyle; // 0x420 (0x28)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x448 (0x10)
	struct FVector2D FirstIconSlotSize; // 0x458 (0x10)
	float PaddingBetweenIconSlots; // 0x468 (0x4)
	unsigned char unreflected_46c[0x4]; // 0x46c (0x4) 
	struct FVector2D SecondIconSlotSize; // 0x470 (0x10)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x480 (0x10)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x490 (0x14)
	float RarityNameTextLeftPadding; // 0x4a4 (0x4)
	struct TWeakObjectPtr<class UClass> RarityNameTextStyle; // 0x4a8 (0x28)
	float ClassIconImageLeftPadding; // 0x4d0 (0x4)
	unsigned char unreflected_4d4[0x4]; // 0x4d4 (0x4) 
	struct FVector2D ClassIconSize; // 0x4d8 (0x10)
	float PaddingBetweenClassIconAndName; // 0x4e8 (0x4)
	unsigned char unreflected_4ec[0x4]; // 0x4ec (0x4) 
	struct TWeakObjectPtr<class UClass> ClassNameTextStyle; // 0x4f0 (0x28)
	float TierMeterLeftPadding; // 0x518 (0x4)
	unsigned char unreflected_51c[0x4]; // 0x51c (0x4) 
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x520 (0x18)
	struct FMargin IconSlotOverNameplatePadding; // 0x538 (0x10)
	struct FVector2D IconSlotOverNameplateSize; // 0x548 (0x10)
	unsigned char padding_558[0x8]; // 0x558 (0x8)
};

