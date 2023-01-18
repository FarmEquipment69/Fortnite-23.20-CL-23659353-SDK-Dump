// Class /Script/FortniteUI.FortFrontEndContext
// Size: 0x468
class UFortFrontEndContext : public UFortLocalPlayerSubsystem
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FMulticastInlineDelegate OnLobbyPlayerGadgetsClicked; // 0x38 (0x10)
	unsigned char unreflected_48[0x30]; // 0x48 (0x30) 
	struct FMulticastInlineDelegate OnRadialPickerStatusChanged; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnFrontEndCameraChanged; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnTheaterPinClicked; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnSetPreviewedSceneTheater; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnTheaterSelected; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnTheaterDataChanged; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnTheaterTileClicked; // 0xd8 (0x10)
	unsigned char unreflected_e8[0x10]; // 0xe8 (0x10) 
	struct FMulticastInlineDelegate OnTheaterTileDoubleClicked; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnTheaterTileFocused; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnTheaterTileUnfocused; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnShouldShowPhoenixDisplayChanged; // 0x128 (0x10)
	unsigned char unreflected_138[0x18]; // 0x138 (0x18) 
	struct FMulticastInlineDelegate OnVaultItemViewed; // 0x150 (0x10)
	struct FMulticastInlineDelegate OnVaultItemsViewed; // 0x160 (0x10)
	struct FMulticastInlineDelegate OnSeasonTabVariantPreviewInfoChanged; // 0x170 (0x10)
	unsigned char unreflected_180[0x10]; // 0x180 (0x10) 
	struct FMulticastInlineDelegate OnPlayerLoggedOut; // 0x190 (0x10)
	unsigned char unreflected_1a0[0x18]; // 0x1a0 (0x18) 
	struct FMulticastInlineDelegate OnMainTabSelected; // 0x1b8 (0x10)
	struct FMulticastInlineDelegate OnSocialImportClosed; // 0x1c8 (0x10)
	struct FFortFrontEndFeatureStruct Features[0xb]; // 0x1d8 (0x18) (ARRAY) 
	unsigned char unreflected_2e0[0x8]; // 0x2e0 (0x8) 
	struct FUnlockableVariantPreviewInfo SeasonTabVariantPreviewInfo; // 0x2e8 (0x28)
	unsigned char unreflected_310[0xf8]; // 0x310 (0xf8) 
	class UFortServerBrowserHelper* ServerBrowserHelper; // 0x408 (0x8)
	unsigned char padding_410[0x58]; // 0x410 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.FortFrontEndContext.ViewVaultItemsFromOffer (Underlying native function: ViewVaultItemsFromOffer 0xa6249c4)
	void ViewVaultItemsFromOffer(struct FCatalogOffer& CatalogOffer, bool& bIgnoreCurrentlyEquippedFavorites, enum EFortPawnDisplayContext& DisplayContext); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.ViewVaultItems (Underlying native function: ViewVaultItems 0xa624898)
	void ViewVaultItems(struct TArray<class UFortItem*>& ItemsToView, bool& bIgnoreCurrentlyEquippedFavorites, enum EFortPawnDisplayContext& DisplayContext); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.ViewVaultItemFromDefinition (Underlying native function: ViewVaultItemFromDefinition 0xa62475c)
	void ViewVaultItemFromDefinition(class UFortItemDefinition*& ItemToViewDefinition, bool& bIgnoreCurrentlyEquippedFavorites, enum EFortPawnDisplayContext& DisplayContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.ViewVaultItem (Underlying native function: ViewVaultItem 0xa624650)
	void ViewVaultItem(class UFortItem*& ItemToView, bool& bIgnoreCurrentlyEquippedFavorites, enum EFortPawnDisplayContext& DisplayContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.ShowSocialImport (Underlying native function: ShowSocialImport 0xa623ac0)
	class UFortSocialImportPanel* ShowSocialImport(class UClass*& PanelClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.ShouldShowSocialImport (Underlying native function: ShouldShowSocialImport 0xa623820)
	bool ShouldShowSocialImport(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.ShouldShowPhoenixDisplay (Underlying native function: ShouldShowPhoenixDisplay 0x8a46bf4)
	bool ShouldShowPhoenixDisplay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.ShouldShowAccountItemWarning (Underlying native function: ShouldShowAccountItemWarning 0xa6237fc)
	bool ShouldShowAccountItemWarning(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.SetSelectedTheater (Underlying native function: SetSelectedTheater 0xa622d38)
	void SetSelectedTheater(struct FString& TheaterId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SetSeasonTabVariantPreviewInfo (Underlying native function: SetSeasonTabVariantPreviewInfo 0xa622a74)
	void SetSeasonTabVariantPreviewInfo(struct FUnlockableVariantPreviewInfo& Info); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SetLocalVariantPreview (Underlying native function: SetLocalVariantPreview 0xa6223f4)
	void SetLocalVariantPreview(class UAthenaCosmeticItemDefinition*& CosmeticItem, struct FGameplayTag& VariantChannelTag, struct FGameplayTag& VariantTag, struct FString& CustomData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SetFrontEndVisibility (Underlying native function: SetFrontEndVisibility 0xa6221c4)
	void SetFrontEndVisibility(bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SetFrontEndCamera (Underlying native function: SetFrontEndCamera 0x190e558)
	void SetFrontEndCamera(enum EFrontEndCamera& NewState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SetDefaultLocalVariantPreview (Underlying native function: SetDefaultLocalVariantPreview 0xa62201c)
	void SetDefaultLocalVariantPreview(class UAthenaCosmeticItemDefinition*& CosmeticItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SetCurrentLockerSubslotIndex (Underlying native function: SetCurrentLockerSubslotIndex 0xa621fa0)
	void SetCurrentLockerSubslotIndex(int& newIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SelectTileForQuest (Underlying native function: SelectTileForQuest 0xa6218b8)
	bool SelectTileForQuest(class UFortQuestItem*& QuestItem, float& OutCriticalMissionDifficultyOverrideMin, float& OutCriticalMissionDifficultyOverrideMax); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SelectDefaultTheaterTile (Underlying native function: SelectDefaultTheaterTile 0xa621884)
	void SelectDefaultTheaterTile(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.SelectDefaultTheater (Underlying native function: SelectDefaultTheater 0xa621870)
	void SelectDefaultTheater(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.PushContentWidget_Adv (Underlying native function: PushContentWidget_Adv 0xa621694)
	void PushContentWidgetAdv(class UWidget*& Widget, bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.PlayLevelUpEffect (Underlying native function: PlayLevelUpEffect 0xa621680)
	void PlayLevelUpEffect(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.PlayEvolutionEffect (Underlying native function: PlayEvolutionEffect 0xa62166c)
	void PlayEvolutionEffect(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.OnPlayerProfileInitialized (Underlying native function: OnPlayerProfileInitialized 0x2b41eb4)
	void OnPlayerProfileInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortFrontEndContext.IsTileMissionAlertRewardClaimed (Underlying native function: IsTileMissionAlertRewardClaimed 0xa620e38)
	bool IsTileMissionAlertRewardClaimed(class AFortTheaterMapTile*& Tile); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.IsCelebrateEffectPlaying (Underlying native function: IsCelebrateEffectPlaying 0xa620ad8)
	bool IsCelebrateEffectPlaying(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.IsActiveTileMissionValid (Underlying native function: IsActiveTileMissionValid 0xa6209f0)
	bool IsActiveTileMissionValid(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.Is4PlayerTile (Underlying native function: Is4PlayerTile 0xa6206e0)
	bool Is4PlayerTile(class AFortTheaterMapTile*& Tile); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.HideAthenaStoreNewItemBang (Underlying native function: HideAthenaStoreNewItemBang 0xa62069c)
	void HideAthenaStoreNewItemBang(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.HandleDynamicSocialImportClosed (Underlying native function: HandleDynamicSocialImportClosed 0xa61f8cc)
	void HandleDynamicSocialImportClosed(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortFrontEndContext.GetUITestingClass (Underlying native function: GetUITestingClass 0x6cc27c4)
	class UClass* GetUITestingClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetTileMissionDetails (Underlying native function: GetTileMissionDetails 0xa61f57c)
	bool GetTileMissionDetails(class AFortTheaterMapTile*& Tile, struct FFortMissionDetails& MissionDetails); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetTheaterData (Underlying native function: GetTheaterData 0xa61f374)
	bool GetTheaterData(struct FString& TheaterId, struct FFortTheaterMapData& OutTheaterData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetSelectedTheaterId (Underlying native function: GetSelectedTheaterId 0xa61f118)
	struct FString GetSelectedTheaterId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetSelectedTheaterData (Underlying native function: GetSelectedTheaterData 0xa61f028)
	bool GetSelectedTheaterData(struct FFortTheaterMapData& OutTheaterData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetSelectableGadgets (Underlying native function: GetSelectableGadgets 0x8546cb4)
	void GetSelectableGadgets(struct TArray<class UFortWorldItem*>& SelectableGadgets, struct TArray<class UFortWorldItem*>& LastSelectedGadgets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.GetSeasonTabVariantPreviewInfo (Underlying native function: GetSeasonTabVariantPreviewInfo 0xa61ef34)
	struct FUnlockableVariantPreviewInfo GetSeasonTabVariantPreviewInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.GetPostMaxAccountLevelUpRewards (Underlying native function: GetPostMaxAccountLevelUpRewards 0xa61ebb4)
	void GetPostMaxAccountLevelUpRewards(struct TArray<struct FFortItemQuantityPair>& Rewards, int& RewardOffset); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetOutpostCoreLevelByTheaterId (Underlying native function: GetOutpostCoreLevelByTheaterId 0xa61e6c8)
	bool GetOutpostCoreLevelByTheaterId(struct FString& TheaterId, int& OutCoreLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetOutpostCoreLevelByItemDefinition (Underlying native function: GetOutpostCoreLevelByItemDefinition 0xa61e4a0)
	bool GetOutpostCoreLevelByItemDefinition(class UFortOutpostItemDefinition*& OutpostCoreItemDef, int& OutCoreLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetMCPRegionText (Underlying native function: GetMCPRegionText 0x12a0020)
	struct FText GetMCPRegionText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetMCPRegion (Underlying native function: GetMCPRegion 0xa61e394)
	struct FText GetMCPRegion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetMaxAvailableDifficulty (Underlying native function: GetMaxAvailableDifficulty 0xa61e3e8)
	struct FGameDifficultyInfo GetMaxAvailableDifficulty(bool& bIncludeMissionAlertTiles); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetItemFromItemQuantityPair (Underlying native function: GetItemFromItemQuantityPair 0x8937dd4)
	class UFortItemDefinition* GetItemFromItemQuantityPair(struct FFortItemQuantityPair& InPair); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetInventoryFilterForAccountItemWarning (Underlying native function: GetInventoryFilterForAccountItemWarning 0xa61e104)
	enum EFortFrontendInventoryFilter GetInventoryFilterForAccountItemWarning(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetHighestEnduranceWaveReachedByItemDefinition (Underlying native function: GetHighestEnduranceWaveReachedByItemDefinition 0xa61dee0)
	bool GetHighestEnduranceWaveReachedByItemDefinition(class UFortOutpostItemDefinition*& OutpostCoreItemDef, int& HighestWaveNumber); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetHeroPlayerPawnForCurrentDisplayedItem (Underlying native function: GetHeroPlayerPawnForCurrentDisplayedItem 0xa61debc)
	class AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.GetHeroPlayerPawnByIndex (Underlying native function: GetHeroPlayerPawnByIndex 0xa61ddc0)
	class AFortPlayerPawn* GetHeroPlayerPawnByIndex(int& PartyMemberIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.GetFrontEndCamera (Underlying native function: GetFrontEndCamera 0x190e870)
	enum EFrontEndCamera GetFrontEndCamera(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetFocusedOrActiveTileMissionDetails (Underlying native function: GetFocusedOrActiveTileMissionDetails 0xa61db8c)
	bool GetFocusedOrActiveTileMissionDetails(struct FFortMissionDetails& MissionDetails); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetFocusedOrActiveTile (Underlying native function: GetFocusedOrActiveTile 0xa61db68)
	class AFortTheaterMapTile* GetFocusedOrActiveTile(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetFeatureState (Underlying native function: GetFeatureState 0xa61da48)
	void GetFeatureState(enum EFortFrontEndFeature& Feature, enum EFortFrontEndFeatureState& OutFeatureState, enum EFortFrontEndFeatureStateReason& OutReason); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetCurrentTheaterName (Underlying native function: GetCurrentTheaterName 0xa61d838)
	struct FText GetCurrentTheaterName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetCurrentLockerSubslotIndex (Underlying native function: GetCurrentLockerSubslotIndex 0xa61d668)
	int GetCurrentLockerSubslotIndex(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.GetCriticalMissionRewards (Underlying native function: GetCriticalMissionRewards 0xa61d3c0)
	void GetCriticalMissionRewards(struct TArray<struct FFortMissionRewardInfo>& RewardList); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetAvailableDifficulties (Underlying native function: GetAvailableDifficulties 0xa61d100)
	struct TArray<struct FGameDifficultyInfo> GetAvailableDifficulties(bool& bIncludeMissionAlertTiles); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetAllTheaterData (Underlying native function: GetAllTheaterData 0xa61d028)
	bool GetAllTheaterData(struct TArray<struct FFortTheaterMapData>& OutAllTheaterData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetActiveTileMissionDetails (Underlying native function: GetActiveTileMissionDetails 0xa61cf78)
	bool GetActiveTileMissionDetails(struct FFortMissionDetails& MissionDetails); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetActiveTile (Underlying native function: GetActiveTile 0xa61cf54)
	class AFortTheaterMapTile* GetActiveTile(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.GetAccountLevelUpRewards (Underlying native function: GetAccountLevelUpRewards 0xa61ce58)
	void GetAccountLevelUpRewards(struct TArray<struct FFortItemQuantityPair>& Rewards, int& AccountLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.ClearSelectedTheater (Underlying native function: ClearSelectedTheater 0xa61c0b4)
	void ClearSelectedTheater(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.ClearLocalPreview (Underlying native function: ClearLocalPreview 0xa61c038)
	void ClearLocalPreview(bool& StopUsingLocalPreview); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.CanShowLockerSlotType (Underlying native function: CanShowLockerSlotType 0xa61bf98)
	bool CanShowLockerSlotType(enum EAthenaCustomizationCategory& SlotType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.CanFindTileForQuest (Underlying native function: CanFindTileForQuest 0xa61beac)
	bool CanFindTileForQuest(class UFortQuestItem*& QuestItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.CanCompleteQuestInFocusedOrActiveTileMission (Underlying native function: CanCompleteQuestInFocusedOrActiveTileMission 0xa61bda0)
	bool CanCompleteQuestInFocusedOrActiveTileMission(class UFortQuestItem*& QuestItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.BroadcastMainTabSelected (Underlying native function: BroadcastMainTabSelected 0xa61bce8)
	void BroadcastMainTabSelected(struct FName& TabName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortFrontEndContext.AreProfilesAvailableForWriting (Underlying native function: AreProfilesAvailableForWriting 0xa61bc9c)
	bool AreProfilesAvailableForWriting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontEndContext.AccountItemWarningShown (Underlying native function: AccountItemWarningShown 0xa61b9c8)
	void AccountItemWarningShown(); // (Final | Native | Public | BlueprintCallable)
};

