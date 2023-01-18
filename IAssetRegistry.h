// Class /Script/AssetRegistry.AssetRegistry
// Size: 0x28
class IAssetRegistry : public IInterface
{

	/* Functions */

	// Function /Script/AssetRegistry.AssetRegistry.WaitForPackage (Underlying native function: WaitForPackage 0x9b9907c)
	void WaitForPackage(struct FString& PackageName); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.WaitForCompletion (Underlying native function: WaitForCompletion 0x9b99064)
	void WaitForCompletion(); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets (Underlying native function: UseFilterToExcludeAssets 0x9b98f2c)
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets (Underlying native function: SearchAllAssets 0x9b98c24)
	void SearchAllAssets(bool& bSynchronousSearch); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous (Underlying native function: ScanPathsSynchronous 0x9b98afc)
	void ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool& bForceRescan, bool& bIgnoreDenyListScanFilters); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles (Underlying native function: ScanModifiedAssetFiles 0x9b98a60)
	void ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous (Underlying native function: ScanFilesSynchronous 0x9b98970)
	void ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool& bForceRescan); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter (Underlying native function: RunAssetsThroughFilter 0x9b98838)
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath (Underlying native function: PrioritizeSearchPath 0x9b986e0)
	void PrioritizeSearchPath(struct FString& PathToPrioritize); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers (Underlying native function: K2_GetReferencers 0x9b985a0)
	bool K2GetReferencers(struct FName& PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies (Underlying native function: K2_GetDependencies 0x9b98460)
	bool K2GetDependencies(struct FName& PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath (Underlying native function: K2_GetAssetByObjectPath 0x9b98314)
	struct FAssetData K2GetAssetByObjectPath(struct FSoftObjectPath& ObjectPath, bool& bIncludeOnlyOnDiskAssets); // (0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.IsSearchAsync (Underlying native function: IsSearchAsync 0x9b9810c)
	bool IsSearchAsync(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AssetRegistry.AssetRegistry.IsSearchAllAssets (Underlying native function: IsSearchAllAssets 0x9b980e4)
	bool IsSearchAllAssets(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets (Underlying native function: IsLoadingAssets 0x479fa78)
	bool IsLoadingAssets(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AssetRegistry.AssetRegistry.HasAssets (Underlying native function: HasAssets 0x9b97dd0)
	bool HasAssets(struct FName& PackagePath, bool& bRecursive); // (Native | Public | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths (Underlying native function: GetSubPaths 0x9b97970)
	void GetSubPaths(struct FString& InBasePath, struct TArray<struct FString>& OutPathList, bool& bInRecurse); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetDerivedClassNames (Underlying native function: GetDerivedClassNames 0x9b973b4)
	void GetDerivedClassNames(struct TArray<struct FTopLevelAssetPath*>& ClassNames, struct TSet<struct FTopLevelAssetPath*>& ExcludedClassNames, struct TSet<struct FTopLevelAssetPath*>& OutDerivedClassNames); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPaths (Underlying native function: GetAssetsByPaths 0x9b96fc0)
	bool GetAssetsByPaths(struct TArray<struct FName>& PackagePaths, struct TArray<struct FAssetData>& OutAssetData, bool& bRecursive, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath (Underlying native function: GetAssetsByPath 0x9b96e54)
	bool GetAssetsByPath(struct FName& PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool& bRecursive, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName (Underlying native function: GetAssetsByPackageName 0x9b96ce8)
	bool GetAssetsByPackageName(struct FName& PackageName, struct TArray<struct FAssetData>& OutAssetData, bool& bIncludeOnlyOnDiskAssets, bool& bSkipARFilteredAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass (Underlying native function: GetAssetsByClass 0x9b96bc0)
	bool GetAssetsByClass(struct FTopLevelAssetPath*& ClassPathName, struct TArray<struct FAssetData>& OutAssetData, bool& bSearchSubClasses); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssets (Underlying native function: GetAssets 0x9b96a44)
	bool GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData, bool& bSkipARFilteredAssets); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath (Underlying native function: GetAssetByObjectPath 0x9b968f8)
	struct FAssetData GetAssetByObjectPath(struct FName& ObjectPath, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAncestorClassNames (Underlying native function: GetAncestorClassNames 0x9b966e4)
	bool GetAncestorClassNames(struct FTopLevelAssetPath*& ClassPathName, struct TArray<struct FTopLevelAssetPath*>& OutAncestorClassNames); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths (Underlying native function: GetAllCachedPaths 0x9b96648)
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets (Underlying native function: GetAllAssets 0x9b96554)
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)
};

