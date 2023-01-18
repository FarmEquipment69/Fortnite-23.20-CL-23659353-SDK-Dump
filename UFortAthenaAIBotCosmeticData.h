// Class /Script/FortniteAI.FortAthenaAIBotCosmeticData
// Size: 0x40
class UFortAthenaAIBotCosmeticData : public UDataAsset
{
	struct TArray<struct TWeakObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries; // 0x30 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotCosmeticData.FindLibraryDataFromName (Underlying native function: FindLibraryDataFromName 0xa35a328)
	struct TWeakObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> FindLibraryDataFromName(struct FString& PartialName); // (Final | Native | Public | BlueprintCallable)
};

