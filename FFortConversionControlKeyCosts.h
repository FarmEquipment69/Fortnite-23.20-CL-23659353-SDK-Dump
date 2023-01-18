// ScriptStruct /Script/FortniteGame.FortConversionControlKeyCosts
// Size: 0x90
struct FFortConversionControlKeyCosts : FTableRowBase
{
	struct TWeakObjectPtr<class UFortItemDefinition> RequiredItem; // 0x8 (0x28)
	struct FFortConversionTierData* Common; // 0x30 (0x8)
	struct FFortConversionTierData* Uncommon; // 0x38 (0x8)
	struct FFortConversionTierData* Rare; // 0x40 (0x8)
	struct FFortConversionTierData* Epic; // 0x48 (0x8)
	struct FFortConversionTierData* Legendary; // 0x50 (0x8)
	struct FFortConversionTierData* Mythic; // 0x58 (0x8)
	struct FFortConversionTierData* Transcendent; // 0x60 (0x8)
	struct FFortConversionTierData* Unattainable; // 0x68 (0x8)
	struct FGameplayTagContainer RequiredCatalysts; // 0x70 (0x20)
};

