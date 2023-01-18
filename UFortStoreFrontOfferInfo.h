// Class /Script/FortniteUI.FortStoreFrontOfferInfo
// Size: 0x60
class UFortStoreFrontOfferInfo : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	class UFortMtxOfferData* OfferDisplayAsset; // 0x40 (0x8)
	unsigned char padding_48[0x18]; // 0x48 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.WasPrerollItemSeen (Underlying native function: WasPrerollItemSeen 0xa8f345c)
	bool WasPrerollItemSeen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.OfferHasDenyRequirements (Underlying native function: OfferHasDenyRequirements 0xa8f0a74)
	bool OfferHasDenyRequirements(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.MarkPrerollAsSeen (Underlying native function: MarkPrerollAsSeen 0xa8f09f0)
	void MarkPrerollAsSeen(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsVotingOffer (Underlying native function: IsVotingOffer 0xa8f0980)
	bool IsVotingOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsValidOffer (Underlying native function: IsValidOffer 0xa8f095c)
	bool IsValidOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsUnique (Underlying native function: IsUnique 0xa8f0938)
	bool IsUnique(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsSubscriptionOffer (Underlying native function: IsSubscriptionOffer 0xa8f0914)
	bool IsSubscriptionOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsRefundable (Underlying native function: IsRefundable 0xa8f0868)
	bool IsRefundable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsPurchasingAvailable (Underlying native function: IsPurchasingAvailable 0xa8f0844)
	bool IsPurchasingAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsPriceInRealMoney (Underlying native function: IsPriceInRealMoney 0xa8f07b8)
	bool IsPriceInRealMoney(int& PriceIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsPriceInMTX (Underlying native function: IsPriceInMTX 0xa8f072c)
	bool IsPriceInMTX(int& PriceIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsPriceInGameItems (Underlying native function: IsPriceInGameItems 0xa8f06a0)
	bool IsPriceInGameItems(int& PriceIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsPrerollOffer (Underlying native function: IsPrerollOffer 0xa8f05e4)
	bool IsPrerollOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsOfferOwned (Underlying native function: IsOfferOwned 0xa8f0584)
	bool IsOfferOwned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsNoPreviewOffer (Underlying native function: IsNoPreviewOffer 0xa8f0560)
	bool IsNoPreviewOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsLockedByRequirement (Underlying native function: IsLockedByRequirement 0xa8f053c)
	bool IsLockedByRequirement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsItemMissingFromInventory (Underlying native function: IsItemMissingFromInventory 0xa8f037c)
	bool IsItemMissingFromInventory(class UFortItem*& ItemToCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsItemMissingFromCollectionBook (Underlying native function: IsItemMissingFromCollectionBook 0xa8f022c)
	bool IsItemMissingFromCollectionBook(class UFortItem*& ItemToCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.isItemGrantUnique (Underlying native function: isItemGrantUnique 0xa8f3480)
	bool isItemGrantUnique(struct FString& TemplateId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsItemDefOwned (Underlying native function: IsItemDefOwned 0xa8f00a4)
	bool IsItemDefOwned(class UFortItemDefinition*& ItemDef); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsGridLayout (Underlying native function: IsGridLayout 0xa8f0080)
	bool IsGridLayout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsGiftOnly (Underlying native function: IsGiftOnly 0xa8efff8)
	bool IsGiftOnly(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsGiftLimitIgnored (Underlying native function: IsGiftLimitIgnored 0xa8effd4)
	bool IsGiftLimitIgnored(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsGiftingStorefrontOffer (Underlying native function: IsGiftingStorefrontOffer 0xa8f005c)
	bool IsGiftingStorefrontOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsGiftable (Underlying native function: IsGiftable 0xa8f0040)
	bool IsGiftable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsFriendTimeRequirementIgnored (Underlying native function: IsFriendTimeRequirementIgnored 0xa8effb0)
	bool IsFriendTimeRequirementIgnored(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsExclusive (Underlying native function: IsExclusive 0xa8efe98)
	bool IsExclusive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsCurrencyVoucher (Underlying native function: IsCurrencyVoucher 0xa8efe50)
	bool IsCurrencyVoucher(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsCrewBlingOffer (Underlying native function: IsCrewBlingOffer 0xa8efe2c)
	bool IsCrewBlingOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsCardpack (Underlying native function: IsCardpack 0x8a64d0c)
	bool IsCardpack(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.IsBattlePassLevelBundle (Underlying native function: IsBattlePassLevelBundle 0xa8efe08)
	bool IsBattlePassLevelBundle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.HasRequirement (Underlying native function: HasRequirement 0xa8efd18)
	bool HasRequirement(struct FText& RequirementText); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.HasMaxLevel (Underlying native function: HasMaxLevel 0xa8efbec)
	bool HasMaxLevel(int& MaxLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.HasDisplayAsset (Underlying native function: HasDisplayAsset 0x720202c)
	bool HasDisplayAsset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.HasCatalogOfferName (Underlying native function: HasCatalogOfferName 0xa8efb1c)
	bool HasCatalogOfferName(struct FText& CatalogOfferName); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetTotalQuantity (Underlying native function: GetTotalQuantity 0xa8ee3ec)
	int GetTotalQuantity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetStorefrontName (Underlying native function: GetStorefrontName 0x6d2c944)
	struct FName GetStorefrontName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetSortPriority (Underlying native function: GetSortPriority 0xa8ee35c)
	int GetSortPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetShortName (Underlying native function: GetShortName 0x9bc814c)
	struct FText GetShortName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetShortDescription (Underlying native function: GetShortDescription 0xa8ee2dc)
	struct FText GetShortDescription(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetSaleType (Underlying native function: GetSaleType 0xa8edf0c)
	struct TEnumAsByte<ECatalogSaleType> GetSaleType(int& PriceIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetSaleText (Underlying native function: GetSaleText 0xa8eddec)
	struct FText GetSaleText(int& PriceIndex, int& ItemQuantity); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetSalePrice (Underlying native function: GetSalePrice 0xa8eda24)
	bool GetSalePrice(int& PriceIndex, struct FText& SalePrice, int& ItemQuantity); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetRequirementTypeAtIndex (Underlying native function: GetRequirementTypeAtIndex 0xa8ed980)
	enum ECatalogRequirementType GetRequirementTypeAtIndex(int& RequirementIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetRequirementMinQuantityAtIndex (Underlying native function: GetRequirementMinQuantityAtIndex 0xa8ed8dc)
	int GetRequirementMinQuantityAtIndex(int& RequirementIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetRequirementIdAtIndex (Underlying native function: GetRequirementIdAtIndex 0xa8ed71c)
	struct FString GetRequirementIdAtIndex(int& RequirementIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetQuantityRemaining (Underlying native function: GetQuantityRemaining 0xa8ed6f8)
	int GetQuantityRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetPriceItem (Underlying native function: GetPriceItem 0xa8ed5d4)
	class UFortAccountItemDefinition* GetPriceItem(int& PriceIndex, int& RequiredItemCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetPriceCurrencyType (Underlying native function: GetPriceCurrencyType 0xa8ed4e4)
	struct TEnumAsByte<EStoreCurrencyType> GetPriceCurrencyType(int& PriceIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetPrerollRarity (Underlying native function: GetPrerollRarity 0xa8ed4a8)
	int GetPrerollRarity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetPrerollOfferItem (Underlying native function: GetPrerollOfferItem 0xa8ed40c)
	bool GetPrerollOfferItem(struct FFortItemQuantityPair& ItemQuantityPair); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetOfferType (Underlying native function: GetOfferType 0xa8ed3f4)
	enum ECatalogOfferType GetOfferType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetOfferId (Underlying native function: GetOfferId 0xa8ed204)
	struct FString GetOfferId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetOfferDisplaySize (Underlying native function: GetOfferDisplaySize 0xa8ed1e0)
	enum EFortMtxOfferDisplaySize GetOfferDisplaySize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetOfferDisplayAsset (Underlying native function: GetOfferDisplayAsset 0xa8ed1c8)
	class UFortMtxOfferData* GetOfferDisplayAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetOffer (Underlying native function: GetOffer 0xa8ed1a8)
	struct FCatalogOffer GetOffer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetNumRequirements (Underlying native function: GetNumRequirements 0xa8ed18c)
	int GetNumRequirements(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetNumGrantedItems (Underlying native function: GetNumGrantedItems 0xa8ed168)
	int GetNumGrantedItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetNormalPrice (Underlying native function: GetNormalPrice 0xa8ed024)
	struct FText GetNormalPrice(int& PriceIndex, int& ItemQuantity); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetName (Underlying native function: GetName 0xa8ecfa4)
	struct FText GetName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetMetaValue (Underlying native function: GetMetaValue 0xa8ece04)
	struct FString GetMetaValue(struct FString& MetaTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetMetaAsBool (Underlying native function: GetMetaAsBool 0xa8ecca0)
	bool GetMetaAsBool(struct FString& MetaTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetMaxConcurrentPurchases (Underlying native function: GetMaxConcurrentPurchases 0xa8ecc7c)
	int GetMaxConcurrentPurchases(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetItemTypeText (Underlying native function: GetItemTypeText 0xa8ecac8)
	struct FText GetItemTypeText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetItemQuantity (Underlying native function: GetItemQuantity 0xa8ec964)
	int GetItemQuantity(struct FString& TemplateId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetItemOfferCount (Underlying native function: GetItemOfferCount 0xa8ec800)
	int GetItemOfferCount(struct FString& TemplateId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetGrantedItems (Underlying native function: GetGrantedItems 0xa8ec70c)
	void GetGrantedItems(struct TArray<class UFortItem*>& Items, bool& bSortItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetGrantedItemQuantityPairs (Underlying native function: GetGrantedItemQuantityPairs 0xa8ec5dc)
	void GetGrantedItemQuantityPairs(bool& bPrioritizeUnowned, bool& bCombineCurrencyItems, struct TArray<struct FFortItemQuantityPair>& ItemQuantityPairs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetGrantedItemQuantityPair (Underlying native function: GetGrantedItemQuantityPair 0xa8ec4fc)
	bool GetGrantedItemQuantityPair(int& GrantedItemIndex, struct FFortItemQuantityPair& ItemQuantity); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetGrantedItemQuantity (Underlying native function: GetGrantedItemQuantity 0xa8ec470)
	int GetGrantedItemQuantity(int& GrantedItemIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetGrantedItemDefinitions (Underlying native function: GetGrantedItemDefinitions 0xa8ec314)
	void GetGrantedItemDefinitions(struct TArray<class UFortAccountItemDefinition*>& GrantedItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetGrantedItemDefinition (Underlying native function: GetGrantedItemDefinition 0xa8ec288)
	class UFortAccountItemDefinition* GetGrantedItemDefinition(int& GrantedItemIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetFortStoreOfferType (Underlying native function: GetFortStoreOfferType 0xa8ec264)
	enum EFortMtxStoreOfferType GetFortStoreOfferType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetFortStoreOfferFinalPrice (Underlying native function: GetFortStoreOfferFinalPrice 0xa8ec244)
	int GetFortStoreOfferFinalPrice(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetFortStoreOfferCategory (Underlying native function: GetFortStoreOfferCategory 0xa8ec1d0)
	struct FString GetFortStoreOfferCategory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetForcedGiftBoxTemplateId (Underlying native function: GetForcedGiftBoxTemplateId 0xa8ec080)
	struct FString GetForcedGiftBoxTemplateId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetFirstGrantQuantity (Underlying native function: GetFirstGrantQuantity 0xa8ec058)
	int GetFirstGrantQuantity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetFirstGrantItemDefinition (Underlying native function: GetFirstGrantItemDefinition 0xa8ec030)
	class UFortAccountItemDefinition* GetFirstGrantItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetFinalPrice (Underlying native function: GetFinalPrice 0xa8ebf10)
	struct FText GetFinalPrice(int& PriceIndex, int& ItemQuantity); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetDynamicBundleItems (Underlying native function: GetDynamicBundleItems 0xa8eb6cc)
	void GetDynamicBundleItems(struct TArray<struct FBundledItemInfo>& Items); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetDisplayAssetPath (Underlying native function: GetDisplayAssetPath 0xa8eb204)
	struct FString GetDisplayAssetPath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetDescription (Underlying native function: GetDescription 0xa8eafb8)
	struct FText GetDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetCurrencyItemDefinition (Underlying native function: GetCurrencyItemDefinition 0xa8eaca4)
	class UFortAccountItemDefinition* GetCurrencyItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetCategoryText (Underlying native function: GetCategoryText 0xa8eac28)
	struct FText GetCategoryText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetBonusQuantity (Underlying native function: GetBonusQuantity 0xa8eac04)
	int GetBonusQuantity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetBaseQuantity (Underlying native function: GetBaseQuantity 0xa8eabbc)
	int GetBaseQuantity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetBannerOverrideTag (Underlying native function: GetBannerOverrideTag 0xa8eab48)
	struct FString GetBannerOverrideTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.GetAppStoreByPrice (Underlying native function: GetAppStoreByPrice 0xa8eaa8c)
	enum EAppStore GetAppStoreByPrice(int& PriceIndex, int& ItemQuantity); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.CreatePreviewItem (Underlying native function: CreatePreviewItem 0xa8ea524)
	class UFortAccountItem* CreatePreviewItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferInfo.AreGrantedItemsOwned (Underlying native function: AreGrantedItemsOwned 0xa8ea194)
	bool AreGrantedItemsOwned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

