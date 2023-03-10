// Class /Script/FortniteGame.FortAthenaMutator_Wax
// Size: 0x11f0
class AFortAthenaMutator_Wax : public AFortAthenaMutator_GameModeBase
{
	struct TArray<class AFortPlayerStateAthena*> TeamLeadersInOrder; // 0x450 (0x10)
	struct TArray<class AFortPlayerStateAthena*> PlayerLeadersInOrder; // 0x460 (0x10)
	struct FMulticastInlineDelegate OnFlyingTokensApplied; // 0x470 (0x10)
	struct FMulticastInlineDelegate OnTokensAwarded; // 0x480 (0x10)
	struct FMulticastInlineDelegate OnTokensCollected; // 0x490 (0x10)
	struct FMulticastInlineDelegate PodiumChanged; // 0x4a0 (0x10)
	struct FMulticastInlineDelegate OnPendingFlashes; // 0x4b0 (0x10)
	struct FMulticastInlineDelegate AnyTokenChange; // 0x4c0 (0x10)
	class USoundBase* RespawnSound; // 0x4d0 (0x8)
	class USoundBase* GameEndMusicSound; // 0x4d8 (0x8)
	class UAudioComponent* GameEndMusicAudioComponent; // 0x4e0 (0x8)
	struct FGameplayTag LeaderSpecialActorCategoryTag; // 0x4e8 (0x4)
	unsigned char unreflected_4ec[0x4]; // 0x4ec (0x4) 
	class UClass* TokenClass; // 0x4f0 (0x8)
	class UClass* TokenPickupClass; // 0x4f8 (0x8)
	class UFortWorldItemDefinition* PickupItemDef; // 0x500 (0x8)
	struct FName TokenSpawnBoneName; // 0x508 (0x4)
	unsigned char unreflected_50c[0x4]; // 0x50c (0x4) 
	struct FScalableFloat TokensToWin; // 0x510 (0x28)
	struct FScalableFloat TokensToStartWith; // 0x538 (0x28)
	struct FScalableFloat TokenPercentDropOnElimPodium; // 0x560 (0x28)
	struct FScalableFloat TokenPercentDropOnElimCommoner; // 0x588 (0x28)
	struct FScalableFloat TokensAwardedPerEliminationOnKill; // 0x5b0 (0x28)
	struct FScalableFloat ThresholdShowTeamFlashAtOne; // 0x5d8 (0x28)
	struct FScalableFloat ThresholdShowTeamFlashAtTwo; // 0x600 (0x28)
	struct FScalableFloat ThresholdShowTeamFlashAtThree; // 0x628 (0x28)
	struct FScalableFloat ThresholdShowEnemyFlashAtOne; // 0x650 (0x28)
	struct FScalableFloat ThresholdShowEnemyFlashAtTwo; // 0x678 (0x28)
	struct FScalableFloat ThresholdShowEnemyFlashAtThree; // 0x6a0 (0x28)
	struct FScalableFloat BigTokenAmountForSingleElim; // 0x6c8 (0x28)
	struct FScalableFloat MediumTokenAmountForSingleElim; // 0x6f0 (0x28)
	struct FScalableFloat UseLiteralTokenAward; // 0x718 (0x28)
	struct FScalableFloat TokensToMarkPermanentlyMaxTier; // 0x740 (0x28)
	struct FScalableFloat DrawSecondGenTokensOnCompass; // 0x768 (0x28)
	struct FScalableFloat LivesToStartPlayerWith; // 0x790 (0x28)
	struct FScalableFloat PodiumSize; // 0x7b8 (0x28)
	struct TArray<struct FWaxNoStormZone> NoStormZones; // 0x7e0 (0x10)
	struct TMap<enum EWaxState, struct FWaxVisibilityModifiers> VisibilityModifiers; // 0x7f0 (0x50)
	struct TMap<enum EWaxState, struct FScalableFloat> StateTokenCount; // 0x840 (0x50)
	struct FScalableFloat DistanceConsideredNearbyForUI; // 0x890 (0x28)
	struct FScalableFloat VelocityConsideredMovingForUI; // 0x8b8 (0x28)
	struct FScalableFloat TimeConsideredRecentForUI; // 0x8e0 (0x28)
	struct FWaxRespawnLogicData RespawnSettings; // 0x908 (0x280)
	struct FScalableFloat WaxStateAboveWhichLeadersDrawSpecialStyleOnUI; // 0xb88 (0x28)
	struct FScalableFloat WaxLeadersMaximumCompassDistance; // 0xbb0 (0x28)
	struct FScalableFloat MapLeaderboardTeamBased; // 0xbd8 (0x28)
	struct FScalableFloat AboutToWinPopupTeamBased; // 0xc00 (0x28)
	struct FScalableFloat PodiumIconsTeamBased; // 0xc28 (0x28)
	struct TArray<struct FSlateBrush> CompassBrushesByPlace; // 0xc50 (0x10)
	struct TArray<struct FSlateBrush> SquadmateCompassBrushesByPlace; // 0xc60 (0x10)
	struct TArray<struct FSlateBrush> MapBrushesByPlace; // 0xc70 (0x10)
	struct TArray<struct FSlateBrush> SquadmateMapBrushesByPlace; // 0xc80 (0x10)
	struct FScalableFloat UseSquadPlacementIconsOnMap; // 0xc90 (0x28)
	struct FScalableFloat UseSquadPlacementIconsOnCompass; // 0xcb8 (0x28)
	struct FScalableFloat SquadPlacementScaleOnMap; // 0xce0 (0x28)
	struct FVector2D SquadPlacementOffsetPct; // 0xd08 (0x10)
	struct FScalableFloat TokenThresholdAboveWhichToWarn; // 0xd18 (0x28)
	struct FAthenaGameMessageData GameMsgEnemyToWinSoon; // 0xd40 (0x50)
	struct FAthenaGameMessageData GameMsgPlayerToWinSoon; // 0xd90 (0x50)
	struct FAthenaGameMessageData GameMsgPlayerTookWaxLead; // 0xde0 (0x50)
	struct FAthenaGameMessageData GameMsgPlayerLostWaxLead; // 0xe30 (0x50)
	struct FAthenaGameMessageData GameMsgWaxLeaderChanged; // 0xe80 (0x50)
	struct TArray<struct FAthenaGameMessageData> BusGameMessages; // 0xed0 (0x10)
	struct FText ShowTextOnEnteringSpecialBuilding; // 0xee0 (0x18)
	struct FGameplayTagContainer SkinMetaTagsToSkip; // 0xef8 (0x20)
	struct TArray<struct FWaxPartOverrideData> OverrideParts; // 0xf18 (0x10)
	struct FScalableFloat ShouldSwapSkins; // 0xf28 (0x28)
	struct FWaxPlayerDataArray PlayerData; // 0xf50 (0x120)
	struct TMap<struct TWeakObjectPtr<class AFortPlayerStateAthena>, int> StatDataNumTokensCollectedByPlayerMap; // 0x1070 (0x50)
	unsigned char unreflected_10c0[0x8]; // 0x10c0 (0x8) 
	struct TArray<class UFortQuestItemDefinition*> NumTokensCollectedStatTrackingQuestItemDefinitions; // 0x10c8 (0x10)
	struct FGameplayTagContainer NumTokensCollectedStatTrackingTags; // 0x10d8 (0x20)
	unsigned char unreflected_10f8[0x8]; // 0x10f8 (0x8) 
	struct TArray<class AFortGameModePickup_Wax*> WaxPickupsToDraw; // 0x1100 (0x10)
	struct TMap<class AFortPlayerStateAthena*, float> TimeSinceLastFireMap; // 0x1110 (0x50)
	class AFortPlayerStateAthena* LastEligibleLeader; // 0x1160 (0x8)
	struct TArray<class AFortPlayerStateAthena*> PlayersAboveThresholdByPlace; // 0x1168 (0x10)
	struct TMap<unsigned char, class AFortPlayerStateAthena*> TopPlayerInSquadID; // 0x1178 (0x50)
	unsigned char unreflected_11c8[0x18]; // 0x11c8 (0x18) 
	struct TArray<class AActor*> RegisteredWaxPickupActors; // 0x11e0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.ShouldBeUI_Visible (Underlying native function: ShouldBeUI_Visible 0x8524dc0)
	bool ShouldBeUIVisible(class AFortPlayerStateAthena*& Player); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.SendTokenStats (Underlying native function: SendTokenStats 0x26daa0c)
	void SendTokenStats(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.OnRep_Leaders (Underlying native function: OnRep_Leaders 0x8524648)
	void OnRepLeaders(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.OnNewGamePhase (Underlying native function: OnNewGamePhase 0x85243d4)
	void OnNewGamePhase(enum EAthenaGamePhase& NewPhase); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.IsPlayerTeamLeader (Underlying native function: IsPlayerTeamLeader 0x852417c)
	bool IsPlayerTeamLeader(class AFortPlayerStateAthena*& Player); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.IsPlayerMovingOrShooting (Underlying native function: IsPlayerMovingOrShooting 0x85240ec)
	bool IsPlayerMovingOrShooting(class AFortPlayerStateAthena*& Player); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.IsPlayerInPodium (Underlying native function: IsPlayerInPodium 0x852405c)
	bool IsPlayerInPodium(class AFortPlayerStateAthena*& Player); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetWaxUI_Info (Underlying native function: GetWaxUI_Info 0x8523c34)
	void GetWaxUIInfo(float& MyPercent, float& Enemy1Pct, float& Enemy2Pct, float& Enemy3Pct, int& MyRank); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetTokensToWinBP (Underlying native function: GetTokensToWinBP 0x8523c10)
	int GetTokensToWinBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetTokensForPlayer (Underlying native function: GetTokensForPlayer 0x8523b68)
	int GetTokensForPlayer(class AFortPlayerStateAthena*& Player); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetPlayerTeamScore (Underlying native function: GetPlayerTeamScore 0x8523808)
	int GetPlayerTeamScore(class AFortPlayerStateAthena*& Player); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetPlayerTeamPlacement (Underlying native function: GetPlayerTeamPlacement 0x8523770)
	int GetPlayerTeamPlacement(class AFortPlayerStateAthena*& Player); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetPlayerPlacement (Underlying native function: GetPlayerPlacement 0x85236e0)
	int GetPlayerPlacement(class AFortPlayerStateAthena*& Player); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetPlayerLives (Underlying native function: GetPlayerLives 0x8523530)
	int GetPlayerLives(class AFortPlayerStateAthena*& Player); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.GetCurrentWaxState (Underlying native function: GetCurrentWaxState 0x8523418)
	enum EWaxState GetCurrentWaxState(class AFortPlayerStateAthena*& Player); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Wax.CommonDeadPawn (Underlying native function: CommonDeadPawn 0x8522e8c)
	void CommonDeadPawn(class AFortPlayerPawnAthena*& DeadPawn); // (0x00000002 | Native | Protected)
};

