// Class /Script/FortniteGame.FortTheaterMapTile
// Size: 0x540
class AFortTheaterMapTile : public AFortClientOnlyActor
{
	bool bFocused; // 0x290 (0x1)
	bool bHostSelected; // 0x291 (0x1)
	bool bGoToPromptEnabled; // 0x292 (0x1)
	unsigned char unreflected_293[0x1]; // 0x293 (0x1) 
	struct FFortHexMapCoord MapCoord; // 0x294 (0xc)
	bool bHasFinishedLoading; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0xf]; // 0x2a1 (0xf) 
	enum EFortTheaterMapTileType TileType; // 0x2b0 (0x1)
	unsigned char unreflected_2b1[0x7]; // 0x2b1 (0x7) 
	class UClass* ZoneThemeClass; // 0x2b8 (0x8)
	int TileIndex; // 0x2c0 (0x4)
	int RegionIndex; // 0x2c4 (0x4)
	struct FVector SelectionOffset; // 0x2c8 (0x18)
	struct FVector FocusOffset; // 0x2e0 (0x18)
	float SelectionInterpSpeed; // 0x2f8 (0x4)
	float NormalBrightness; // 0x2fc (0x4)
	float LockedBrightness; // 0x300 (0x4)
	float FocusedBrightness; // 0x304 (0x4)
	float SelectedBrightnessRange; // 0x308 (0x4)
	float SelectedPulseSpeed; // 0x30c (0x4)
	bool bEnableBrightnessCode; // 0x310 (0x1)
	bool bDisallowQuickplay; // 0x311 (0x1)
	unsigned char unreflected_312[0x2]; // 0x312 (0x2) 
	float StaticMeshMaterialID; // 0x314 (0x4)
	struct FVector InitialLocation; // 0x318 (0x18)
	struct FFortAvailableMissionData MissionData; // 0x330 (0xa8)
	struct FFortAvailableMissionData LastValidMissionData; // 0x3d8 (0xa8)
	struct FDataTableRowHandle ZoneDifficultyInfo; // 0x480 (0x10)
	struct FFortAvailableMissionAlertData MissionAlertData; // 0x490 (0x98)
	class UStaticMeshComponent* StaticMeshComponent; // 0x528 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> AdjacencyMIDs; // 0x530 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortTheaterMapTile.RefreshTile (Has no native function)
	void RefreshTile(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnTileClicked (Underlying native function: OnTileClicked 0x8f35220)
	void OnTileClicked(class AActor*& ClickedActor, struct FKey& ButtonReleased); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnSelectWrapper (Underlying native function: OnSelectWrapper 0x8f3519c)
	void OnSelectWrapper(bool& bIsGameSessionOwner); // (Native | Public)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnProfileBannerChanged (Has no native function)
	void OnProfileBannerChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnMouseOverEnd (Underlying native function: OnMouseOverEnd 0x8f3511c)
	void OnMouseOverEnd(class AActor*& MousedOverActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnMouseOverBegin (Underlying native function: OnMouseOverBegin 0x8f3509c)
	void OnMouseOverBegin(class AActor*& MousedOverActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnMissionDataUpdated (Has no native function)
	void OnMissionDataUpdated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnMarkedQuestChanged (Has no native function)
	void OnMarkedQuestChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnInitializeTile (Has no native function)
	void OnInitializeTile(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnHostSelect (Has no native function)
	void OnHostSelect(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnHostDeselect (Has no native function)
	void OnHostDeselect(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnFocus (Has no native function)
	void OnFocus(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnEnableGoToPrompt (Has no native function)
	void OnEnableGoToPrompt(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnDisableGoToPrompt (Has no native function)
	void OnDisableGoToPrompt(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnDeselectWrapper (Underlying native function: OnDeselectWrapper 0x7a9f094)
	void OnDeselectWrapper(bool& bIsGameSessionOwner); // (Native | Public)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnDefocus (Has no native function)
	void OnDefocus(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnClientSelect (Has no native function)
	void OnClientSelect(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.OnClientDeselect (Has no native function)
	void OnClientDeselect(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTileValidForMarkedQuest (Underlying native function: IsTileValidForMarkedQuest 0x8f35004)
	bool IsTileValidForMarkedQuest(class UFortQuestItem*& OutMarkedQuest); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTileSelectable (Underlying native function: IsTileSelectable 0x8f34fe0)
	bool IsTileSelectable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTileQuestRecommended (Underlying native function: IsTileQuestRecommended 0x8f34fbc)
	bool IsTileQuestRecommended(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTilePlayable (Underlying native function: IsTilePlayable 0x8f34f98)
	bool IsTilePlayable(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTileLocked (Underlying native function: IsTileLocked 0x8f34f74)
	bool IsTileLocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTileInPhoenixTheater (Underlying native function: IsTileInPhoenixTheater 0x8f34f50)
	bool IsTileInPhoenixTheater(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTileHidden (Underlying native function: IsTileHidden 0x8f34f2c)
	bool IsTileHidden(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsTeamRatingDataValid (Underlying native function: IsTeamRatingDataValid 0x8f34ef0)
	bool IsTeamRatingDataValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.IsMissionAlertTile (Underlying native function: IsMissionAlertTile 0x8f34ecc)
	bool IsMissionAlertTile(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.HasValidMissionData (Underlying native function: HasValidMissionData 0x8f34eb0)
	bool HasValidMissionData(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.GetZoneDifficulty (Underlying native function: GetZoneDifficulty 0x8f34dc4)
	struct FGameDifficultyInfo GetZoneDifficulty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.GetMissionDefinitionIcon (Underlying native function: GetMissionDefinitionIcon 0x8f3498c)
	bool GetMissionDefinitionIcon(struct FSlateBrush& OutMissionDefIcon); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.GetMissionContentDifficultyLevel (Underlying native function: GetMissionContentDifficultyLevel 0x8f34938)
	int GetMissionContentDifficultyLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.GetMissionAlertVisualTags (Underlying native function: GetMissionAlertVisualTags 0x8f348e8)
	struct FGameplayTagContainer GetMissionAlertVisualTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.GetMissionAlertCategoryName (Underlying native function: GetMissionAlertCategoryName 0x8f348bc)
	struct FName GetMissionAlertCategoryName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTheaterMapTile.DoesTileAllowQuickplay (Underlying native function: DoesTileAllowQuickplay 0x8f34898)
	bool DoesTileAllowQuickplay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

