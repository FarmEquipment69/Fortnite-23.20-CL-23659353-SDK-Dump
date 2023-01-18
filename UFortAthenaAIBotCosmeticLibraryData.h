// Class /Script/FortniteAI.FortAthenaAIBotCosmeticLibraryData
// Size: 0x210
class UFortAthenaAIBotCosmeticLibraryData : public UPrimaryDataAsset
{
	struct TWeakObjectPtr<class UDataTable> PredefineSetsDataTable; // 0x30 (0x28)
	struct TWeakObjectPtr<class UDataTable> CharactersDataTable; // 0x58 (0x28)
	struct TWeakObjectPtr<class UDataTable> GlidersDataTable; // 0x80 (0x28)
	struct TWeakObjectPtr<class UDataTable> SkyDiveContrailsDataTable; // 0xa8 (0x28)
	struct TWeakObjectPtr<class UDataTable> BackpacksDataTable; // 0xd0 (0x28)
	struct TWeakObjectPtr<class UDataTable> PickaxesDataTable; // 0xf8 (0x28)
	struct TWeakObjectPtr<class UDataTable> FallbackCharactersDataTable; // 0x120 (0x28)
	struct TWeakObjectPtr<class UDataTable> EmotesDataTable; // 0x148 (0x28)
	struct TWeakObjectPtr<class UDataTable> BannerIconDataTable; // 0x170 (0x28)
	struct TWeakObjectPtr<class UDataTable> BannerColorDataTable; // 0x198 (0x28)
	struct FScalableFloat OddsToUseSameSetCosmeticItems; // 0x1c0 (0x28)
	struct FScalableFloat OddsToUseRandomItemWhenNoneFromSetAvailable; // 0x1e8 (0x28)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotCosmeticLibraryData.RetrieveDataTables (Underlying native function: RetrieveDataTables 0xa35c5d8)
	struct TArray<class UDataTable*> RetrieveDataTables(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotCosmeticLibraryData.FindDataTableFromAssetType (Underlying native function: FindDataTableFromAssetType 0xa35a1c4)
	class UDataTable* FindDataTableFromAssetType(struct FString& AssetType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotCosmeticLibraryData.FillDataTableValuesFromSourceLibrary (Underlying native function: FillDataTableValuesFromSourceLibrary 0xa35a02c)
	bool FillDataTableValuesFromSourceLibrary(class UFortAthenaAIBotCosmeticLibraryData*& SourceLibrary); // (Final | Native | Public | BlueprintCallable)
};

