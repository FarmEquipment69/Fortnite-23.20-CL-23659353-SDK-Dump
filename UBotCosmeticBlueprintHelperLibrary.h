// Class /Script/FortniteAI.BotCosmeticBlueprintHelperLibrary
// Size: 0x28
class UBotCosmeticBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteAI.BotCosmeticBlueprintHelperLibrary.SplitDataArrayByType (Underlying native function: SplitDataArrayByType 0xa35c7e0)
	static bool SplitDataArrayByType(struct TArray<struct FString>& InAssetNames, struct TArray<struct FString>& InAssetTypes, struct TArray<int>& InAssetUsageCounts, struct TArray<int>& InAssetTypeSplitIndices, int& CurrentSplitIndex, struct FString& OutAssetType, struct TArray<struct FString>& OutAssetNames, struct TArray<int>& OutAssetUsageCounts); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.BotCosmeticBlueprintHelperLibrary.OpenCSVFileDialog (Underlying native function: OpenCSVFileDialog 0xa35c430)
	static struct TArray<struct FString> OpenCSVFileDialog(struct FString& TitleDetails, bool& bAllowMultipleFiles); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.BotCosmeticBlueprintHelperLibrary.LoadDataFromCSV (Underlying native function: LoadDataFromCSV 0xa35b404)
	static bool LoadDataFromCSV(struct FString& FilePath, struct TArray<struct FString>& ForbiddenAssetNames, struct TArray<struct FString>& ForbiddenAssetPrefix, struct TArray<struct FString>& AssetNames, struct TArray<struct FString>& AssetTypes, struct TArray<int>& AssetUsageCounts, struct TArray<int>& AssetTypeSplitIndices); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.BotCosmeticBlueprintHelperLibrary.GenerateWeightedCSV (Underlying native function: GenerateWeightedCSV 0xa35a4f4)
	static bool GenerateWeightedCSV(struct FString& AssetTypeName, struct TArray<struct FString>& AssetNames, struct TArray<int>& AssetWeight, struct FString& CSV); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.BotCosmeticBlueprintHelperLibrary.ExportDataTableToSourceCSV (Underlying native function: ExportDataTableToSourceCSV 0xa359f80)
	static bool ExportDataTableToSourceCSV(class UDataTable*& DataTable, bool& bCanCheckOutFile); // (Final | Native | Static | Public | BlueprintCallable)
};

