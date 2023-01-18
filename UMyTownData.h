// Class /Script/FortniteGame.MyTownData
// Size: 0x90
class UMyTownData : public UDataAsset
{
	struct TArray<struct FMyTownWorkerPersonalityData> WorkerPersonalities; // 0x30 (0x10)
	struct TArray<struct FMyTownWorkerSetBonusData> WorkerSetBonuses; // 0x40 (0x10)
	class UFortPersistentResourceItemDefinition* PersonnelXpItemDefinition; // 0x50 (0x8)
	class UFortPersistentResourceItemDefinition* HeroXpItemDefinition; // 0x58 (0x8)
	class UFortPersistentResourceItemDefinition* VoucherItemDefinition; // 0x60 (0x8)
	class UFortPersistentResourceItemDefinition* SchematicXpItemDefinition; // 0x68 (0x8)
	class UFortCurrencyItemDefinition* CurrencyItemDefinition; // 0x70 (0x8)
	class UFortTokenType* SkillPointItemDefinition; // 0x78 (0x8)
	class UFortTokenType* ResearchPointItemDefinition; // 0x80 (0x8)
	class UClass* TotalRatingGameplayEffect; // 0x88 (0x8)
};

