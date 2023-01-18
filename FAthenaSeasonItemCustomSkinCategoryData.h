// ScriptStruct /Script/FortniteGame.AthenaSeasonItemCustomSkinCategoryData
// Size: 0x38
struct FAthenaSeasonItemCustomSkinCategoryData
{
	struct FText Name; // 0x0 (0x18)
	struct TArray<class UAthenaSeasonItemEntryBase*> Entries; // 0x18 (0x10)
	int RequiredRewardsToUnlock; // 0x28 (0x4)
	float ZoomLevel; // 0x2c (0x4)
	float Rotation; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

