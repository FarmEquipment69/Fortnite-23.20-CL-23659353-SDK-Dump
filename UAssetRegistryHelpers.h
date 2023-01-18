// Class /Script/AssetRegistry.AssetRegistryHelpers
// Size: 0x28
class UAssetRegistryHelpers : public UObject
{

	/* Functions */

	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath (Underlying native function: ToSoftObjectPath 0x9b98df8)
	static struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues (Underlying native function: SetFilterTagsAndValues 0x9b98ca8)
	static struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid (Underlying native function: IsValid 0x9b98220)
	static bool IsValid(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset (Underlying native function: IsUAsset 0x9b98134)
	static bool IsUAsset(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector (Underlying native function: IsRedirector 0x9b97f84)
	static bool IsRedirector(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded (Underlying native function: IsAssetLoaded 0x9b97e98)
	static bool IsAssetLoaded(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue (Underlying native function: GetTagValue 0x9b97b6c)
	static bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName (Underlying native function: GetFullName 0x9b97788)
	static struct FString GetFullName(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName (Underlying native function: GetExportTextName 0x9b975a0)
	static struct FString GetExportTextName(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass (Underlying native function: GetClass 0x9b972c8)
	static class UClass* GetClass(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets (Underlying native function: GetBlueprintAssets 0x9b97198)
	static void GetBlueprintAssets(struct FARFilter& InFilter, struct TArray<struct FAssetData>& OutAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry (Underlying native function: GetAssetRegistry 0x9b96a14)
	static struct TScriptInterface<class IAssetRegistry> GetAssetRegistry(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset (Underlying native function: GetAsset 0x9b967e0)
	static class UObject* GetAsset(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass (Underlying native function: FindAssetNativeClass 0x5fe28e0)
	static class UClass* FindAssetNativeClass(struct FAssetData& AssetData); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData (Underlying native function: CreateAssetData 0x9b96404)
	static struct FAssetData CreateAssetData(class UObject*& InAsset, bool& bAllowBlueprintClass); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

