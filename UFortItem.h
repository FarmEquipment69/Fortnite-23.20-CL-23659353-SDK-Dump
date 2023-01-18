// Class /Script/FortniteGame.FortItem
// Size: 0x88
class UFortItem : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct FMulticastInlineDelegate OnItemChanged; // 0x40 (0x10)
	unsigned char unreflected_50[0x18]; // 0x50 (0x18) 
	struct FMulticastInlineDelegate OnItemDestroyed; // 0x68 (0x10)
	unsigned char unreflected_78[0x8]; // 0x78 (0x8) 
	unsigned char bLoadedFromSave; // 0x80 (0x1)
	unsigned char bTemporaryItemOwningController; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortItem.UsesPhantomReserveAmmo (Underlying native function: UsesPhantomReserveAmmo 0x8a662c4)
	bool UsesPhantomReserveAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.TryGetCategory (Underlying native function: TryGetCategory 0x8a65900)
	bool TryGetCategory(enum EFortItemCategoryOrdinal& Ordinal, struct FText& OutCategoryDisplayName, bool& OutHasIcon, struct FFortMultiSizeBrush& OutCategoryIconBrush); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.SetOwningControllerForTemporaryItem (Underlying native function: SetOwningControllerForTemporaryItem 0x8a655bc)
	void SetOwningControllerForTemporaryItem(class AFortPlayerController*& InController); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItem.IsVisible (Underlying native function: IsVisible 0x8a65218)
	bool IsVisible(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsTemporaryItem (Underlying native function: IsTemporaryItem 0x2da7c4c)
	bool IsTemporaryItem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsSlotted (Underlying native function: IsSlotted 0x8a651c8)
	bool IsSlotted(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsSchematicOrCraftedWeapon (Underlying native function: IsSchematicOrCraftedWeapon 0x8a6519c)
	bool IsSchematicOrCraftedWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsSchematic (Underlying native function: IsSchematic 0x8a65174)
	bool IsSchematic(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsInventoryOverflowItem (Underlying native function: IsInventoryOverflowItem 0x6ae4fa0)
	bool IsInventoryOverflowItem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsInStorageVault (Underlying native function: IsInStorageVault 0x8a65130)
	bool IsInStorageVault(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsEquipped (Underlying native function: IsEquipped 0x8a650f0)
	bool IsEquipped(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsEquipable (Underlying native function: IsEquipable 0x8a65024)
	bool IsEquipable(class AFortPlayerController*& EquippingPC, bool& bGamepadSwitchingForHeroAbilities); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsDroppedItem (Underlying native function: IsDroppedItem 0x8a64ffc)
	bool IsDroppedItem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsActivatable (Underlying native function: IsActivatable 0x8a64ef8)
	bool IsActivatable(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& FailureReason); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.HasRarityUpgrade (Underlying native function: HasRarityUpgrade 0x7202ed4)
	bool HasRarityUpgrade(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.HasEvolutions (Underlying native function: HasEvolutions 0x8a64d0c)
	bool HasEvolutions(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.HasDurability (Underlying native function: HasDurability 0x8a64ce4)
	bool HasDurability(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetWidePreviewImage (Underlying native function: GetWidePreviewImage 0x8a64b64)
	struct TWeakObjectPtr<class UTexture2D> GetWidePreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetUpgradeRestrictionReasonText (Underlying native function: GetUpgradeRestrictionReasonText 0x8a64918)
	static struct FText GetUpgradeRestrictionReasonText(enum EItemUpgradeRestrictionReason& Reason); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortItem.GetUpgradeResourceItemDefinition (Underlying native function: GetUpgradeResourceItemDefinition 0x8a648f0)
	class UFortPersistentResourceItemDefinition* GetUpgradeResourceItemDefinition(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetUpgradeCostToLevel (Underlying native function: GetUpgradeCostToLevel 0x8a6485c)
	int GetUpgradeCostToLevel(int& TargetLevel); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetUpgradeCost (Underlying native function: GetUpgradeCost 0x8a64834)
	int GetUpgradeCost(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetType (Underlying native function: GetType 0x8a64760)
	enum EFortItemType GetType(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTrackerGuid (Underlying native function: GetTrackerGuid 0x8a6472c)
	struct FGuid GetTrackerGuid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTotalAmmo (Underlying native function: GetTotalAmmo 0x8a64704)
	int GetTotalAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTier (Underlying native function: GetTier 0x8a6462c)
	enum EFortItemTier GetTier(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTertiaryCategory (Underlying native function: GetTertiaryCategory 0x8a64498)
	bool GetTertiaryCategory(struct FText& ItemCategoryText, struct FSlateBrush& ItemCategoryBrush, struct TEnumAsByte<EFortBrushSize>& BrushSize); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSmallPreviewImage (Underlying native function: GetSmallPreviewImage 0x8a64308)
	struct TWeakObjectPtr<class UTexture2D> GetSmallPreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSecondaryCategory (Underlying native function: GetSecondaryCategory 0x8a64074)
	bool GetSecondaryCategory(struct FText& ItemCategoryText, struct FSlateBrush& ItemCategoryBrush, struct TEnumAsByte<EFortBrushSize>& BrushSize); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSearchTags (Underlying native function: GetSearchTags 0x8a63ff4)
	struct FText GetSearchTags(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSchematicResultType (Underlying native function: GetSchematicResultType 0x8a63fcc)
	enum EFortItemType GetSchematicResultType(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSchematicCraftingResultOrCraftedWeaponBP (Underlying native function: GetSchematicCraftingResultOrCraftedWeaponBP 0x8a63fa8)
	class UFortWeaponItemDefinition* GetSchematicCraftingResultOrCraftedWeaponBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSchematicCraftingResultBP (Underlying native function: GetSchematicCraftingResultBP 0x8a63f80)
	class UFortItemDefinition* GetSchematicCraftingResultBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRemainingAmmo (Underlying native function: GetRemainingAmmo 0x8a63458)
	int GetRemainingAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRecycleValue (Underlying native function: GetRecycleValue 0x8a63ec0)
	int GetRecycleValue(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRating (Underlying native function: GetRating 0x8a63e98)
	int GetRating(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRaritySecondaryColor (Underlying native function: GetRaritySecondaryColor 0x8a63e68)
	struct FLinearColor GetRaritySecondaryColor(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRarityColor (Underlying native function: GetRarityColor 0x8a63dd4)
	struct FLinearColor GetRarityColor(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRarity (Underlying native function: GetRarity 0x8a63dac)
	enum EFortRarity GetRarity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPromotionTier (Underlying native function: GetPromotionTier 0x8a63ca4)
	int GetPromotionTier(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPrimaryCategory (Underlying native function: GetPrimaryCategory 0x8a63bd4)
	bool GetPrimaryCategory(struct FText& ItemCategoryText); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPreviewAssets (Underlying native function: GetPreviewAssets 0x8a63718)
	struct TArray<struct TWeakObjectPtr<class UObject>> GetPreviewAssets(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPhantomReserveAmmo (Underlying native function: GetPhantomReserveAmmo 0x8a636ac)
	int GetPhantomReserveAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetOwningController (Underlying native function: GetOwningController 0x8a6360c)
	class AFortPlayerController* GetOwningController(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetNumInStack (Underlying native function: GetNumInStack 0x8a635e4)
	int GetNumInStack(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetNumberOfSlotsTaken (Underlying native function: GetNumberOfSlotsTaken 0x6ae4f78)
	unsigned char GetNumberOfSlotsTaken(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetNormalizedDurability (Underlying native function: GetNormalizedDurability 0x7202080)
	float GetNormalizedDurability(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetMaxTier (Underlying native function: GetMaxTier 0x8a635c0)
	enum EFortItemTier GetMaxTier(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetMaxStackSize (Underlying native function: GetMaxStackSize 0x8a63498)
	int GetMaxStackSize(class UAbilitySystemComponent*& AbilityComp); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetMaxLevel (Underlying native function: GetMaxLevel 0x8a63430)
	int GetMaxLevel(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLoadedAmmo (Underlying native function: GetLoadedAmmo 0x8a63408)
	int GetLoadedAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLevelRelativeCostForRarityUpgrade (Underlying native function: GetLevelRelativeCostForRarityUpgrade 0x8a633e0)
	int GetLevelRelativeCostForRarityUpgrade(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLevel (Underlying native function: GetLevel 0x8a63360)
	int GetLevel(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLargePreviewImage (Underlying native function: GetLargePreviewImage 0x8a63218)
	struct TWeakObjectPtr<class UTexture2D> GetLargePreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemVariantHandle (Underlying native function: GetItemVariantHandle 0x8a631dc)
	struct FItemVariantHandle GetItemVariantHandle(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemVariantGuid (Underlying native function: GetItemVariantGuid 0x8a631a8)
	struct FGuid GetItemVariantGuid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemTypeName (Underlying native function: GetItemTypeName 0x8a62fe4)
	struct FText GetItemTypeName(bool& bUsePlural); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemGuid (Underlying native function: GetItemGuid 0x8a62fb0)
	struct FGuid GetItemGuid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemDefinitionBP (Underlying native function: GetItemDefinitionBP 0x8a62e54)
	class UFortItemDefinition* GetItemDefinitionBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetInactivePreviewImage (Underlying native function: GetInactivePreviewImage 0x8a62d0c)
	struct TWeakObjectPtr<class UTexture2D> GetInactivePreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetFilterCategory (Underlying native function: GetFilterCategory 0x8a62af8)
	enum EFortInventoryFilter GetFilterCategory(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetEvolveRestrictionReasonText (Underlying native function: GetEvolveRestrictionReasonText 0x8a62a2c)
	static struct FText GetEvolveRestrictionReasonText(enum EItemEvolutionRestrictionReason& Reason); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortItem.GetDurability (Underlying native function: GetDurability 0x8a62994)
	float GetDurability(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetDisplayNameWithoutPrefix (Underlying native function: GetDisplayNameWithoutPrefix 0x8a628dc)
	struct FText GetDisplayNameWithoutPrefix(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetDisplayName (Underlying native function: GetDisplayName 0x8a62778)
	struct FText GetDisplayName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetDescription (Underlying native function: GetDescription 0x8a62638)
	struct FText GetDescription(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetCraftedDisplayName (Underlying native function: GetCraftedDisplayName 0x8a625b8)
	struct FText GetCraftedDisplayName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetCooldownTimeRemaining (Underlying native function: GetCooldownTimeRemaining 0x8a624dc)
	float GetCooldownTimeRemaining(class AFortPlayerController*& FortPC, float& CooldownDuration); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetAlterationSlots (Underlying native function: GetAlterationSlots 0x8a62400)
	struct TArray<struct FFortAlterationSlotStatus> GetAlterationSlots(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetActiveAlterations (Underlying native function: GetActiveAlterations 0x8a62334)
	struct TArray<class UFortAlterationItemDefinition*> GetActiveAlterations(int& PretendLevel); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.DoesMatchSearchString (Underlying native function: DoesMatchSearchString 0x8a61f04)
	bool DoesMatchSearchString(struct FString& SearchString); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanUpgradeItemRarity (Underlying native function: CanUpgradeItemRarity 0x8a61a8c)
	bool CanUpgradeItemRarity(struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanEvolve (Underlying native function: CanEvolve 0x8a6191c)
	bool CanEvolve(struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanBeUpgraded (Underlying native function: CanBeUpgraded 0x8a617ac)
	bool CanBeUpgraded(struct TArray<enum EItemUpgradeRestrictionReason>& OutRestrictionReasons); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanBeUnslotted (Underlying native function: CanBeUnslotted 0x8a61784)
	bool CanBeUnslotted(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanBeDropped (Underlying native function: CanBeDropped 0x8a6175c)
	bool CanBeDropped(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanAffordPromotion (Underlying native function: CanAffordPromotion 0x479fa78)
	bool CanAffordPromotion(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.BroadcastOnItemChanged (Underlying native function: BroadcastOnItemChanged 0x8a61560)
	void BroadcastOnItemChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged, bool& bLogBroadcasts); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortItem.AllowedToBeLockedInInventory (Underlying native function: AllowedToBeLockedInInventory 0x871a5b0)
	bool AllowedToBeLockedInInventory(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

