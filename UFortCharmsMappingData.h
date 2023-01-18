// Class /Script/FortniteGame.FortCharmsMappingData
// Size: 0x58
class UFortCharmsMappingData : public UDataAsset
{
	struct TArray<struct FCharmSlotMetadata> SlotMetadata; // 0x30 (0x10)
	struct TArray<struct FCharmPreviewEntry> NonSlotPreviewList; // 0x40 (0x10)
	struct FGameplayTag DoNotApplyCharmsTag; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

