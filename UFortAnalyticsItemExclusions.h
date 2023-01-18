// Class /Script/FortniteGame.FortAnalyticsItemExclusions
// Size: 0xf0
class UFortAnalyticsItemExclusions : public UDataAsset
{
	struct TSet<enum EFortRarity> ExcludedRarities; // 0x30 (0x50)
	struct TSet<enum EFortItemType> ExcludedItemTypes; // 0x80 (0x50)
	struct FGameplayTagContainer ExcludedItemTags; // 0xd0 (0x20)
};

