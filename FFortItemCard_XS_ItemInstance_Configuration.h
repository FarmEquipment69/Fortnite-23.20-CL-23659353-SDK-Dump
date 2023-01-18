// ScriptStruct /Script/FortniteUI.FortItemCard_XS_ItemInstance_Configuration
// Size: 0x2e0
struct FFortItemCard_XS_ItemInstance_Configuration
{
	struct FMargin BackgroundPadding; // 0x0 (0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10 (0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20 (0x240)
	struct FVector2D BookmarkImageSize; // 0x260 (0x10)
	struct FMargin TraitBoxPadding; // 0x270 (0x10)
	struct FVector2D FirstTraitSize; // 0x280 (0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x290 (0x30)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2c0 (0x14)
	unsigned char padding_2d4[0xc]; // 0x2d4 (0xc)
};

