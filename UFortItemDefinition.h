// Class /Script/FortniteGame.FortItemDefinition
// Size: 0x3a8
class UFortItemDefinition : public UMcpItemDefinitionBase
{
	unsigned char unreflected_30[0x20]; // 0x30 (0x20) 
	struct FMulticastInlineDelegate OnItemCountChanged; // 0x50 (0x10)
	unsigned char unreflected_60[0x10]; // 0x60 (0x10) 
	enum EFortItemType ItemType; // 0x70 (0x1)
	enum EFortItemType PrimaryAssetIdItemTypeOverride; // 0x71 (0x1)
	enum EFortInventoryFilter FilterOverride; // 0x72 (0x1)
	enum EFortItemTier Tier; // 0x73 (0x1)
	enum EFortItemTier MaxTier; // 0x74 (0x1)
	enum EFortTemplateAccess Access; // 0x75 (0x1)
	unsigned char bIsAccountItem; // 0x76 (0x1)
	unsigned char bNeverPersisted; // 0x76 (0x1)
	unsigned char bAllowMultipleStacks; // 0x76 (0x1)
	unsigned char bAutoBalanceStacks; // 0x76 (0x1)
	unsigned char bAllowSwapSingleStack; // 0x76 (0x1)
	unsigned char bForceAutoPickup; // 0x76 (0x1)
	unsigned char bInventorySizeLimited; // 0x76 (0x1)
	unsigned char unreflected_77[0x1]; // 0x77 (0x1) 
	struct FText ItemTypeNameOverride; // 0x78 (0x18)
	struct FText DisplayName; // 0x90 (0x18)
	struct FText QuantityDisplayName; // 0xa8 (0x18)
	struct FText ShortDescription; // 0xc0 (0x18)
	struct FText Description; // 0xd8 (0x18)
	struct FText DisplayNamePrefix; // 0xf0 (0x18)
	struct FText SearchTags; // 0x108 (0x18)
	struct FName GiftBoxGroupName; // 0x120 (0x4)
	float FrontendPreviewScale; // 0x124 (0x4)
	struct FGameplayTagContainer GameplayTags; // 0x128 (0x20)
	struct FGameplayTagContainer AutomationTags; // 0x148 (0x20)
	struct FGameplayTagContainer SecondaryCategoryOverrideTags; // 0x168 (0x20)
	struct FGameplayTagContainer TertiaryCategoryOverrideTags; // 0x188 (0x20)
	struct FScalableFloat MaxStackSize; // 0x1a8 (0x28)
	struct FScalableFloat PurchaseItemLimit; // 0x1d0 (0x28)
	struct TWeakObjectPtr<class UClass> TooltipClass; // 0x1f8 (0x28)
	struct TWeakObjectPtr<class UFortTooltipDisplayStatsList> StatList; // 0x220 (0x28)
	struct FCurveTableRowHandle RatingLookup; // 0x248 (0x10)
	struct TWeakObjectPtr<class UTexture2D> WidePreviewImage; // 0x258 (0x28)
	struct TWeakObjectPtr<class UTexture2D> SmallPreviewImage; // 0x280 (0x28)
	struct TWeakObjectPtr<class UTexture2D> LargePreviewImage; // 0x2a8 (0x28)
	struct FSoftObjectPath DisplayAssetPath; // 0x2d0 (0x18)
	enum EFortRarity Rarity; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x7]; // 0x2e9 (0x7) 
	struct FDataTableRowHandle PopupDetailsTag; // 0x2f0 (0x10)
	class UFortItemSeriesDefinition* Series; // 0x300 (0x8)
	class UItemPreviewImageOverride* ItemPreviewImageOverride; // 0x308 (0x8)
	struct FFortReleaseVersion PrmReportUntil; // 0x310 (0x4)
	unsigned char unreflected_314[0x4]; // 0x314 (0x4) 
	struct FString PrmParameterName; // 0x318 (0x10)
	struct FVector FrontendPreviewPivotOffset; // 0x328 (0x18)
	struct FRotator FrontendPreviewInitialRotation; // 0x340 (0x18)
	struct TWeakObjectPtr<class UStaticMesh> FrontendPreviewMeshOverride; // 0x358 (0x28)
	struct TWeakObjectPtr<class USkeletalMesh> FrontendPreviewSkeletalMeshOverride; // 0x380 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortItemDefinition.ShouldTrackInPRM (Underlying native function: ShouldTrackInPRM 0x5da5f70)
	bool ShouldTrackInPRM(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.ShouldShowPreviewOnCurrentHero (Underlying native function: ShouldShowPreviewOnCurrentHero 0x2d00208)
	bool ShouldShowPreviewOnCurrentHero(int& InSubSlot); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.IsStackable (Underlying native function: IsStackable 0x8a651f0)
	bool IsStackable(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.IsPrmValid (Underlying native function: IsPrmValid 0x5da5f00)
	bool IsPrmValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.IsInventorySizeLimited (Underlying native function: IsInventorySizeLimited 0x8a65158)
	bool IsInventorySizeLimited(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetWidePreviewImage (Underlying native function: GetWidePreviewImage 0x8a64c08)
	struct TWeakObjectPtr<class UTexture2D> GetWidePreviewImage(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetTooltip (Underlying native function: GetTooltip 0x8a64678)
	class UClass* GetTooltip(bool& bSummaryTooltip); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetTier (Underlying native function: GetTier 0x8a64650)
	enum EFortItemTier GetTier(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetSmallPreviewImageBrush (Underlying native function: GetSmallPreviewImageBrush 0x8a64450)
	struct FSlateBrush GetSmallPreviewImageBrush(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetSmallPreviewImage (Underlying native function: GetSmallPreviewImage 0x8a643ac)
	struct TWeakObjectPtr<class UTexture2D> GetSmallPreviewImage(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetSingleLineDescription (Underlying native function: GetSingleLineDescription 0x8a64288)
	struct FText GetSingleLineDescription(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetShortDescription (Underlying native function: GetShortDescription 0x8a64208)
	struct FText GetShortDescription(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetRichDescription (Underlying native function: GetRichDescription 0x8a63ee8)
	struct FText GetRichDescription(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetRarityOrSeriesColors (Underlying native function: GetRarityOrSeriesColors 0x8a63e08)
	struct FFortColorPalette GetRarityOrSeriesColors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetRarity (Underlying native function: GetRarity 0x479fa78)
	enum EFortRarity GetRarity(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetQuantityDisplayName (Underlying native function: GetQuantityDisplayName 0x8a63ccc)
	struct FText GetQuantityDisplayName(int& Quantity); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPrmParameterName (Underlying native function: GetPrmParameterName 0x5da5ec0)
	struct FString GetPrmParameterName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPreviewStaticMeshAsset (Underlying native function: GetPreviewStaticMeshAsset 0x8a63b04)
	bool GetPreviewStaticMeshAsset(struct TWeakObjectPtr<class UStaticMesh>& Asset); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPreviewSkeletalMeshAsset (Underlying native function: GetPreviewSkeletalMeshAsset 0x8a63a34)
	bool GetPreviewSkeletalMeshAsset(struct TWeakObjectPtr<class USkeletalMesh>& Asset); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPreviewPrefabAssetAtSubSlot (Underlying native function: GetPreviewPrefabAssetAtSubSlot 0x8a63920)
	bool GetPreviewPrefabAssetAtSubSlot(struct TWeakObjectPtr<class UClass>& Asset, int& InSubSlot); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPreviewPrefabAsset (Underlying native function: GetPreviewPrefabAsset 0x8a63850)
	bool GetPreviewPrefabAsset(struct TWeakObjectPtr<class UClass>& Asset); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPreviewMeshOffset (Underlying native function: GetPreviewMeshOffset 0x8a637f4)
	struct FTransform GetPreviewMeshOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPreviewAssets (Underlying native function: GetPreviewAssets 0x8a63758)
	void GetPreviewAssets(struct TArray<struct TWeakObjectPtr<class UObject>>& Assets); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetPersistentName (Underlying native function: GetPersistentName 0x8a63634)
	struct FString GetPersistentName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetMaxStackSize (Underlying native function: GetMaxStackSize 0x8a6352c)
	int GetMaxStackSize(class UAbilitySystemComponent*& AbilityComp); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetMaxNumStacks (Underlying native function: GetMaxNumStacks 0x8a63458)
	int GetMaxNumStacks(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetLargePreviewImage (Underlying native function: GetLargePreviewImage 0x8a632bc)
	struct TWeakObjectPtr<class UTexture2D> GetLargePreviewImage(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetItemTypeName (Underlying native function: GetItemTypeName 0x8a630c8)
	struct FText GetItemTypeName(bool& bUsePlural); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetItemType (Underlying native function: GetItemType 0x2ab4d68)
	enum EFortItemType GetItemType(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetInactivePreviewImage (Underlying native function: GetInactivePreviewImage 0x8a62db0)
	struct TWeakObjectPtr<class UTexture2D> GetInactivePreviewImage(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetHiResDisplayAssetPath (Underlying native function: GetHiResDisplayAssetPath 0x8a62c8c)
	struct FSoftObjectPath GetHiResDisplayAssetPath(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetDisplayStats (Underlying native function: GetDisplayStats 0x8a62968)
	class UFortTooltipDisplayStatsList* GetDisplayStats(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetDisplayName (Underlying native function: GetDisplayName 0x8a627f8)
	struct FText GetDisplayName(bool& bBaseName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetDisplayAssetPath (Underlying native function: GetDisplayAssetPath 0x8a626f8)
	struct FSoftObjectPath GetDisplayAssetPath(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.GetDescription (Underlying native function: GetDescription 0x8a626b8)
	struct TArray<struct FText> GetDescription(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.CustomizePreviewPrefab (Underlying native function: CustomizePreviewPrefab 0x8a61e80)
	void CustomizePreviewPrefab(class AActor*& PrefabInstance); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemDefinition.CustomizePreviewMesh (Underlying native function: CustomizePreviewMesh 0x75734e0)
	void CustomizePreviewMesh(class UMeshComponent*& Mesh); // (Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortItemDefinition.CreateTemporaryItemInstanceBP (Underlying native function: CreateTemporaryItemInstanceBP 0x8a61dc0)
	class UFortItem* CreateTemporaryItemInstanceBP(int& Count, int& Level); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.CreateTemporaryInstanceFromExistingItemBP (Underlying native function: CreateTemporaryInstanceFromExistingItemBP 0x8a61cc4)
	class UFortItem* CreateTemporaryInstanceFromExistingItemBP(class UFortItem*& ExistingItem, int& Count, int& Level); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemDefinition.CopyTemplateIdToClipboard (Underlying native function: CopyTemplateIdToClipboard 0x26daa0c)
	void CopyTemplateIdToClipboard(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortItemDefinition.ClearPrmValues (Underlying native function: ClearPrmValues 0x5da5e30)
	void ClearPrmValues(); // (Final | Native | Public | BlueprintCallable)
};

