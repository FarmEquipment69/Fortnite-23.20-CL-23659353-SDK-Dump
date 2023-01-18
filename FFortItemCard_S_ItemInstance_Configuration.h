// ScriptStruct /Script/FortniteUI.FortItemCard_S_ItemInstance_Configuration
// Size: 0x300
struct FFortItemCard_S_ItemInstance_Configuration
{
	struct FMargin BackgroundPadding; // 0x0 (0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10 (0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20 (0x240)
	struct FVector2D BookmarkImageSize; // 0x260 (0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x270 (0x30)
	struct FMargin TraitBoxPadding; // 0x2a0 (0x10)
	struct FVector2D FirstTraitSize; // 0x2b0 (0x10)
	struct FMargin TierMeterPadding; // 0x2c0 (0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x2d0 (0x18)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2e8 (0x14)
	unsigned char padding_2fc[0x4]; // 0x2fc (0x4)
};

