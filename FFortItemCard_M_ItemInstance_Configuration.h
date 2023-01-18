// ScriptStruct /Script/FortniteUI.FortItemCard_M_ItemInstance_Configuration
// Size: 0x320
struct FFortItemCard_M_ItemInstance_Configuration
{
	struct FMargin BackgroundPadding; // 0x0 (0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10 (0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20 (0x240)
	struct FVector2D BookmarkImageSize; // 0x260 (0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x270 (0x30)
	struct FMargin TraitBoxPadding; // 0x2a0 (0x10)
	struct FVector2D FirstTraitSize; // 0x2b0 (0x10)
	float PaddingBetweenTraitIcons; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	struct FVector2D SecondTraitSize; // 0x2c8 (0x10)
	struct FMargin TierMeterPadding; // 0x2d8 (0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x2e8 (0x18)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x300 (0x14)
	unsigned char padding_314[0xc]; // 0x314 (0xc)
};

