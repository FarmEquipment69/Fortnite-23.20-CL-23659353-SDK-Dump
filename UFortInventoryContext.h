// Class /Script/FortniteUI.FortInventoryContext
// Size: 0x308
class UFortInventoryContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnMcpWorldItemsChanged; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnMcpOutpostItemsChanged; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnWorldItemListChanged; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnOutpostItemListChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnItemPickedUp; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnQuickbarContentsChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnQuickbarRecordsChanged; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnQuickbarSlotFocusChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnQuickbarSecondarySlotFocusChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnQuickbarForceFullUpdate; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnWorldItemsChanged; // 0xd0 (0x10)
	unsigned char unreflected_e0[0x20]; // 0xe0 (0x20) 
	struct FMulticastInlineDelegate OnCraftItemFailed; // 0x100 (0x10)
	unsigned char unreflected_110[0x10]; // 0x110 (0x10) 
	struct FMulticastInlineDelegate OnVaultItemLimitStateChangedEvent; // 0x120 (0x10)
	unsigned char unreflected_130[0x48]; // 0x130 (0x48) 
	struct TMap<class UFortSchematicItemDefinition*, bool> SchematicLockedStates; // 0x178 (0x50)
	unsigned char padding_1c8[0x140]; // 0x1c8 (0x140)

	/* Functions */

	// Function /Script/FortniteUI.FortInventoryContext.WouldExceedMaxStackSize (Underlying native function: WouldExceedMaxStackSize 0xa643690)
	bool WouldExceedMaxStackSize(class UFortItemDefinition*& ItemDefinition, int& QuantityToTest); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.WillAllItemsSlotInCollectionBook (Underlying native function: WillAllItemsSlotInCollectionBook 0xa6435e4)
	bool WillAllItemsSlotInCollectionBook(struct TArray<class UFortItem*>& Items); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.UpdateLastSeenResearchPointCollectionNodes (Underlying native function: UpdateLastSeenResearchPointCollectionNodes 0xa643584)
	void UpdateLastSeenResearchPointCollectionNodes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.UpdateLastSeenHomebasePoints (Underlying native function: UpdateLastSeenHomebasePoints 0xa64355c)
	void UpdateLastSeenHomebasePoints(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.RemoveItemFromQuickBar (Underlying native function: RemoveItemFromQuickBar 0xa6416ac)
	bool RemoveItemFromQuickBar(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.MakeItemQuantityPair (Underlying native function: MakeItemQuantityPair 0xa640f28)
	static struct FFortItemQuantityPair MakeItemQuantityPair(class UFortItemDefinition*& ItemDefinition, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.MakeItemInstanceQuantityPair (Underlying native function: MakeItemInstanceQuantityPair 0xa640e28)
	static struct FFortItemInstanceQuantityPair MakeItemInstanceQuantityPair(class UFortItem*& Item, struct TEnumAsByte<EFortInventoryType>& InventoryType, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.IsTrapAvailableForBuilding (Underlying native function: IsTrapAvailableForBuilding 0xa640b9c)
	bool IsTrapAvailableForBuilding(class ABuildingSMActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasUnseenResearchPointCollectionNodes (Underlying native function: HasUnseenResearchPointCollectionNodes 0xa6405f0)
	bool HasUnseenResearchPointCollectionNodes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasUnseenHomebasePoints (Underlying native function: HasUnseenHomebasePoints 0xa6405b8)
	bool HasUnseenHomebasePoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasUnavailableItemsInStorage (Underlying native function: HasUnavailableItemsInStorage 0xa640554)
	bool HasUnavailableItemsInStorage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasTrapReadyForBuilding (Underlying native function: HasTrapReadyForBuilding 0xa64048c)
	bool HasTrapReadyForBuilding(class ABuildingSMActor*& BuildingToAttachTo); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasGameplayTagContainerExact (Underlying native function: HasGameplayTagContainerExact 0xa6403c0)
	bool HasGameplayTagContainerExact(struct FGameplayTagContainer& GameplayTagContainer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HasGameplayTagContainer (Underlying native function: HasGameplayTagContainer 0xa6402f4)
	bool HasGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0x28adc64)
	void HandleMcpProfilesInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortInventoryContext.GetVaultItemLimitStatus (Underlying native function: GetVaultItemLimitStatus 0xa63fc1c)
	enum EVaultItemLimitStatus GetVaultItemLimitStatus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetVaultItemLimit (Underlying native function: GetVaultItemLimit 0xa63fc04)
	int GetVaultItemLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetUserFriendlyTags (Underlying native function: GetUserFriendlyTags 0xa63f5c4)
	static struct TArray<struct FText> GetUserFriendlyTags(class UFortItem*& Item, bool& bAddWeaponTier); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetUpgradeItemRarityRecipeFromItemDefintion (Underlying native function: GetUpgradeItemRarityRecipeFromItemDefintion 0xa63f4f4)
	struct FRecipe GetUpgradeItemRarityRecipeFromItemDefintion(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetUnseenTransformKeys (Underlying native function: GetUnseenTransformKeys 0xa63f3dc)
	void GetUnseenTransformKeys(enum EConversionControlKeyRequest& RequestType, enum EInventoryContentSortType& SortType, struct TArray<class UFortAccountItem*>& TransformKeys); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetTrapAttachTypeName (Underlying native function: GetTrapAttachTypeName 0xa63f130)
	struct FText GetTrapAttachTypeName(class ABuildingSMActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetTransmogSacrificeDataFromItemDefintion (Underlying native function: GetTransmogSacrificeDataFromItemDefintion 0xa63f020)
	bool GetTransmogSacrificeDataFromItemDefintion(class UFortItemDefinition*& ItemDefinition, struct FTransmogSacrifice& OutTransmogData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetTransformKeys (Underlying native function: GetTransformKeys 0xa63ef08)
	void GetTransformKeys(enum EConversionControlKeyRequest& RequestType, enum EInventoryContentSortType& SortType, struct TArray<class UFortAccountItem*>& TransformKeys); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetTotalItemQuantityByDefinition (Underlying native function: GetTotalItemQuantityByDefinition 0xa63ee78)
	int GetTotalItemQuantityByDefinition(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetTierText (Underlying native function: GetTierText 0xa63eb98)
	static struct FText GetTierText(enum EFortItemTier& Tier); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetStorageOverflowFromAddingItem (Underlying native function: GetStorageOverflowFromAddingItem 0xa63e8cc)
	int GetStorageOverflowFromAddingItem(class UFortWorldItem*& Item, int& Count); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetStorageNumItems (Underlying native function: GetStorageNumItems 0xa63e884)
	int GetStorageNumItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetStorageCapacity (Underlying native function: GetStorageCapacity 0xa63e860)
	int GetStorageCapacity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetResourceItemDefinition (Underlying native function: GetResourceItemDefinition 0x893e420)
	class UFortResourceItemDefinition* GetResourceItemDefinition(struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetResourceCount (Underlying native function: GetResourceCount 0xa63e61c)
	int GetResourceCount(struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetRecyclingWarningText (Underlying native function: GetRecyclingWarningText 0xa63e508)
	static struct FText GetRecyclingWarningText(enum EItemRecyclingWarning& Warning, bool& WereAnyItemsAnimate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetQuickBarSlottedItem (Underlying native function: GetQuickBarSlottedItem 0xa63dedc)
	class UFortItem* GetQuickBarSlottedItem(enum EFortQuickBars& InQuickBar, int& Slot); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetQuickbarFocus (Underlying native function: GetQuickbarFocus 0xa63dfa0)
	void GetQuickbarFocus(enum EFortQuickBars& OutQuickBar, int& OutSlot, int& OutSecondarySlot, int& OutPreviousFocusedSlot); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetNumOfItemToMulch (Underlying native function: GetNumOfItemToMulch 0xa63da74)
	int GetNumOfItemToMulch(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetNumItemsToMulch (Underlying native function: GetNumItemsToMulch 0xa63da50)
	int GetNumItemsToMulch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetNumInInventory (Underlying native function: GetNumInInventory 0xa63d98c)
	int GetNumInInventory(class UFortItemDefinition*& ItemDefinition, bool& bIncludeReserved); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetLevelsPerItemPromotion (Underlying native function: GetLevelsPerItemPromotion 0xa63d5d4)
	int GetLevelsPerItemPromotion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetItemsToMulchBP (Underlying native function: GetItemsToMulchBP 0xa63d02c)
	struct TArray<class UFortItem*> GetItemsToMulchBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetItemStackCount_Creative (Underlying native function: GetItemStackCount_Creative 0xa63cf68)
	static struct FText GetItemStackCountCreative(int& Quantity); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.GetItemInstancesByDefinition (Underlying native function: GetItemInstancesByDefinition 0xa63cdf0)
	void GetItemInstancesByDefinition(class UFortItemDefinition*& ItemDefinition, struct TArray<class UFortItem*>& Items); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetEquippedWeapon (Underlying native function: GetEquippedWeapon 0x28d18f4)
	class AFortWeapon* GetEquippedWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetDeployableBaseOverflowFromAddingItem (Underlying native function: GetDeployableBaseOverflowFromAddingItem 0xa63c384)
	int GetDeployableBaseOverflowFromAddingItem(class UFortWorldItem*& Item, int& Count); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetDeployableBaseItemCounts (Underlying native function: GetDeployableBaseItemCounts 0xa63c210)
	void GetDeployableBaseItemCounts(int& ItemsCount, int& MaxItemsCount, int& OverflowItemsCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCurrentResourceItemDefinition (Underlying native function: GetCurrentResourceItemDefinition 0xa63c160)
	class UFortResourceItemDefinition* GetCurrentResourceItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCurrentResourceCount (Underlying native function: GetCurrentResourceCount 0xa63c13c)
	int GetCurrentResourceCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCurrentAmmoItemDefinition (Underlying native function: GetCurrentAmmoItemDefinition 0xa63be20)
	class UFortWorldItemDefinition* GetCurrentAmmoItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetCountOfVaultLimitedItems (Underlying native function: GetCountOfVaultLimitedItems 0x890d76c)
	int GetCountOfVaultLimitedItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetConversionRecipesFromItemDefintion (Underlying native function: GetConversionRecipesFromItemDefintion 0xa63b564)
	struct TArray<struct FRecipe> GetConversionRecipesFromItemDefintion(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.GetBackpackOverflowFromAddingItem (Underlying native function: GetBackpackOverflowFromAddingItem 0xa63af78)
	int GetBackpackOverflowFromAddingItem(class UFortWorldItem*& Item, int& Count); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetBackpackItemCounts (Underlying native function: GetBackpackItemCounts 0xa63ae50)
	void GetBackpackItemCounts(int& ItemsCount, int& MaxItemsCount, int& OverflowItemsCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetAccountItemsByType (Underlying native function: GetAccountItemsByType 0xa63a8dc)
	void GetAccountItemsByType(enum EFortItemType& ItemType, struct TArray<class UFortAccountItem*>& Items); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.GetAccountItemsByFilterType (Underlying native function: GetAccountItemsByFilterType 0xa63a690)
	void GetAccountItemsByFilterType(struct FString& SearchText, enum EInventoryContentSortType& SortType, enum EFortInventoryFilter& Subtype, struct TArray<class UFortAccountItem*>& OutItemList); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.ForceItemsChanged (Underlying native function: ForceItemsChanged 0xa63a258)
	void ForceItemsChanged(struct TArray<enum EFortInventoryFilter>& InventoryFilters); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.EquipItem (Underlying native function: EquipItem 0xa63a1bc)
	void EquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.EnumerateRecyclingWarningsForItems (Underlying native function: EnumerateRecyclingWarningsForItems 0xa639f34)
	void EnumerateRecyclingWarningsForItems(struct TArray<class UFortItem*>& Items, struct TArray<enum EItemRecyclingWarning>& OutWarnings); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.DropItemOnQuickBar (Underlying native function: DropItemOnQuickBar 0xa639d28)
	bool DropItemOnQuickBar(class UFortItem*& Item, enum EFortQuickBars& TargetQuickbar, int& TargetSlot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.DropItem (Underlying native function: DropItem 0xa639c64)
	bool DropItem(class UFortWorldItem*& ItemBeingDropped, int& Quantity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.DropCreativeItemOnQuickBar (Underlying native function: DropCreativeItemOnQuickBar 0xa639b68)
	bool DropCreativeItemOnQuickBar(class UFortItem*& Item, enum EFortQuickBars& TargetQuickbar, int& TargetSlot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.DestroyWorldItem (Underlying native function: DestroyWorldItem 0xa63992c)
	void DestroyWorldItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CraftSchematic (Underlying native function: CraftSchematic 0xa6397d4)
	bool CraftSchematic(class UFortSchematicItem*& SchematicItem, enum EFortCraftFailCause& FailCause, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CraftAndSlotSchematic (Underlying native function: CraftAndSlotSchematic 0xa639638)
	bool CraftAndSlotSchematic(class UFortSchematicItem*& SchematicItem, int& PostCraftSlot, enum EFortCraftFailCause& FailCause, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CanUpgradeItemRarity (Underlying native function: CanUpgradeItemRarity 0xa639128)
	bool CanUpgradeItemRarity(class UFortItem*& Item, struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.CanSwapItem (Underlying native function: CanSwapItem 0xa638f2c)
	bool CanSwapItem(class UFortItem*& Item, enum EFortQuickBars& TargetQuickbar, int& TargetSlot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortInventoryContext.CanRecycle (Underlying native function: CanRecycle 0xa638cf8)
	bool CanRecycle(class UFortItem*& Item, struct TArray<enum EItemRecyclingRestrictionReason>& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanItemBePromoted (Underlying native function: CanItemBePromoted 0xa6389ac)
	bool CanItemBePromoted(class UFortItem*& Item, struct TArray<struct FFortItemQuantityPair>& Costs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanItemBeMulched (Underlying native function: CanItemBeMulched 0xa63889c)
	bool CanItemBeMulched(class UFortItem*& Item, struct FText& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanEvolve (Underlying native function: CanEvolve 0xa6386ec)
	bool CanEvolve(class UFortItem*& Item, struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.CanCraftSchematic (Underlying native function: CanCraftSchematic 0xa63849c)
	bool CanCraftSchematic(class UFortSchematicItem*& SchematicItem, enum EFortCraftFailCause& FailCause, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.AreAnyItemsUnseenForInventoryFilter (Underlying native function: AreAnyItemsUnseenForInventoryFilter 0xa638244)
	bool AreAnyItemsUnseenForInventoryFilter(enum EFortFrontendInventoryFilter& InventoryFilter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortInventoryContext.AreAnyItemsInanimate (Underlying native function: AreAnyItemsInanimate 0xa638160)
	static bool AreAnyItemsInanimate(struct TArray<class UFortItem*>& Items); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortInventoryContext.AreAnyItemsAnimate (Underlying native function: AreAnyItemsAnimate 0xa63807c)
	static bool AreAnyItemsAnimate(struct TArray<class UFortItem*>& Items); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

