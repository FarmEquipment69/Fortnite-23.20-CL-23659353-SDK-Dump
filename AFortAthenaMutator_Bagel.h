// Class /Script/FortniteGame.FortAthenaMutator_Bagel
// Size: 0x1710
class AFortAthenaMutator_Bagel : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnTeamScoreMultiplierChanged; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnPlayerDataChanged; // 0x340 (0x10)
	struct FMulticastInlineDelegate OnPhaseChanged; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnBagelVictory; // 0x360 (0x10)
	struct FMulticastInlineDelegate OnPlayerFriendLeaderboardUpdated; // 0x370 (0x10)
	bool bOverrideReplicationSettingsDebug; // 0x380 (0x1)
	unsigned char unreflected_381[0x7]; // 0x381 (0x7) 
	struct FScalableFloat MaxAIPerClient; // 0x388 (0x28)
	struct FScalableFloat ReplicateGameplayCues; // 0x3b0 (0x28)
	enum EBagelDifficulty CurrentDifficulty; // 0x3d8 (0x1)
	unsigned char unreflected_3d9[0x7]; // 0x3d9 (0x7) 
	struct TArray<class UMaterialInterface*> StormMaterialOverrides; // 0x3e0 (0x10)
	class UClass* ObjectiveObjectClass; // 0x3f0 (0x8)
	class UClass* FinalPhaseObjectiveObjectClass; // 0x3f8 (0x8)
	struct FGameplayTag StartingAreaTag; // 0x400 (0x4)
	struct FGameplayTag ObjectiveAreaTag; // 0x404 (0x4)
	struct FScalableFloat IsPreparationPhase; // 0x408 (0x28)
	struct FScalableFloat IsSurvivePhase; // 0x430 (0x28)
	struct FScalableFloat IsMovingPhase; // 0x458 (0x28)
	struct FScalableFloat IsAftermathPhase; // 0x480 (0x28)
	struct FScalableFloat IsFinalPhase; // 0x4a8 (0x28)
	struct FScalableFloat RefillPlayerHealth; // 0x4d0 (0x28)
	struct FScalableFloat RefillPlayerShield; // 0x4f8 (0x28)
	struct FScalableFloat OnlyRespawnAtNewPhase; // 0x520 (0x28)
	struct FScalableFloat ShouldRespawnDeadPlayers; // 0x548 (0x28)
	float SpawnScoreMultiplierTraceStartHeight; // 0x570 (0x4)
	float SpawnSscoreMultiplierTraceEndHeight; // 0x574 (0x4)
	unsigned char unreflected_578[0x8]; // 0x578 (0x8) 
	struct FBagelAreaSpecialActorData AreaSpecialActorData; // 0x580 (0x1c0)
	struct FBagelScoreMultiplierSpawnData ScoreMutliplierSpawnData; // 0x740 (0x300)
	class UFortDifficultyEncounterSettings* DifficultyEncounterSettingsStatic; // 0xa40 (0x8)
	class UFortDifficultyEncounterSettings* DifficultyEncounterSettingsDynamic; // 0xa48 (0x8)
	class UFortDifficultyEncounterSettings* DifficultyEncounterSettingsFinalPhase; // 0xa50 (0x8)
	struct FScalableFloat DisplayIntroGameMsg; // 0xa58 (0x28)
	struct FAthenaGameMessageData GameMsgIntro; // 0xa80 (0x50)
	struct FScalableFloat DisplayOnTeamMultiplierIncreasedGameMsg; // 0xad0 (0x28)
	struct FAthenaGameMessageData GameMsgOnTeamMultiplierIncreased; // 0xaf8 (0x50)
	struct FBagelDifficultySettings DifficultySettings; // 0xb48 (0xa8)
	bool bUseLootTierOverrides; // 0xbf0 (0x1)
	unsigned char unreflected_bf1[0x7]; // 0xbf1 (0x7) 
	struct TArray<struct FBagelLootTierOverrideAssetData*> LootTierOverrides; // 0xbf8 (0x10)
	struct FGameplayTag HeadshotGameplayTag; // 0xc08 (0x4)
	unsigned char unreflected_c0c[0x4]; // 0xc0c (0x4) 
	struct FBagelScoreData ScoreEventList[0xe]; // 0xc10 (0x88) (ARRAY) 
	struct FScalableFloat ObjectiveAreaCompletedScoreMultiplierBonus; // 0x1380 (0x28)
	struct FScalableFloat RiftDestroyedScoreMultiplierBonus; // 0x13a8 (0x28)
	struct FScalableFloat StreakScoreMultiplierUseSpecialMechanicToActivate; // 0x13d0 (0x28)
	struct FScalableFloat StreakScoreMultiplierResetTime; // 0x13f8 (0x28)
	struct FScalableFloat StreakScoreMultiplierKillThreshold; // 0x1420 (0x28)
	struct FScalableFloat StreakScoreMultiplierTimeThresholdToActivate; // 0x1448 (0x28)
	struct FScalableFloat StreakScoreMultiplierMaxLevel; // 0x1470 (0x28)
	struct FScalableFloat StreakScoreMultiplierValue; // 0x1498 (0x28)
	struct TArray<struct FString> PlayerStatsNames; // 0x14c0 (0x10)
	int FriendsLeaderboardDisplayedNumber; // 0x14d0 (0x4)
	float TimeSecRetreiveLeaderboardTimeOut; // 0x14d4 (0x4)
	bool bIsGameOver; // 0x14d8 (0x1)
	bool bIsRespawningAllowed; // 0x14d9 (0x1)
	unsigned char CurrentObjectiveAreaIndex; // 0x14da (0x1)
	unsigned char TotalObjectiveAreaCount; // 0x14db (0x1)
	unsigned char unreflected_14dc[0x4]; // 0x14dc (0x4) 
	struct TArray<struct FBagelObjectiveAreaInstanceData> ObjectiveAreas; // 0x14e0 (0x10)
	unsigned char unreflected_14f0[0x8]; // 0x14f0 (0x8) 
	class UFortAIEncounterInfo* CurrentEncounter; // 0x14f8 (0x8)
	class UFortAIEncounterInfo* FinalPhaseEncounter; // 0x1500 (0x8)
	struct FName CurrentLootTierGroupOverride; // 0x1508 (0x4)
	unsigned char TeamScoreMultiplier; // 0x150c (0x1)
	unsigned char unreflected_150d[0x3]; // 0x150d (0x3) 
	struct FBagelPlayerDataArray PlayerDataArray; // 0x1510 (0x118)
	struct TEnumAsByte<EBagelPhase> CurrentPhase; // 0x1628 (0x1)
	unsigned char unreflected_1629[0x7]; // 0x1629 (0x7) 
	class AFortPlayerStart* RespawnLocationActor; // 0x1630 (0x8)
	struct TArray<struct FRiftDamagerInfo> RiftDamagerInfo; // 0x1638 (0x10)
	class AFortAIPawn* FinalBoss; // 0x1648 (0x8)
	struct FBagelFriendsLeaderboard LocalPlayerFriendsLeaderboard; // 0x1650 (0x20)
	struct FBagelLeaderboardQuery LocalPlayerFriendsLeaderboardQuery; // 0x1670 (0x90)
	unsigned char padding_1700[0x10]; // 0x1700 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.RetrievePlayerFriendsLeaderBoard (Underlying native function: RetrievePlayerFriendsLeaderBoard 0x848a594)
	void RetrievePlayerFriendsLeaderBoard(class AFortPlayerControllerAthena*& AthenaPC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.ResetStreakScoreMultiplier (Underlying native function: ResetStreakScoreMultiplier 0x848a514)
	void ResetStreakScoreMultiplier(class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.OverrideStormMaterial (Underlying native function: OverrideStormMaterial 0x848a500)
	void OverrideStormMaterial(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.OnScoreMultiplierInteractionCompleted (Underlying native function: OnScoreMultiplierInteractionCompleted 0x848a378)
	void OnScoreMultiplierInteractionCompleted(class ABuildingActor*& SelfActor, class AFortPawn*& InteractingPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.OnSafeZoneUpdated (Underlying native function: OnSafeZoneUpdated 0x848a364)
	void OnSafeZoneUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.OnRep_TeamScoreMultiplier (Underlying native function: OnRep_TeamScoreMultiplier 0x848a180)
	void OnRepTeamScoreMultiplier(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.OnRep_PlayerData (Underlying native function: OnRep_PlayerData 0x848a100)
	void OnRepPlayerData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.OnRep_CurrentPhase (Underlying native function: OnRep_CurrentPhase 0x8489fe8)
	void OnRepCurrentPhase(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x84896b8)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.HandleRiftSpawned (Underlying native function: HandleRiftSpawned 0x84891ec)
	void HandleRiftSpawned(class UFortAIEncounterInfo*& Encounter, class ABuildingRift*& Rift); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.HandleRiftDying (Underlying native function: HandleRiftDying 0x8488f38)
	void HandleRiftDying(class UFortAIEncounterInfo*& Encounter, class ABuildingRift*& Rift, class AController*& Controller, class AActor*& DamageActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.HandleRiftDamaged (Underlying native function: HandleRiftDamaged 0x8488cbc)
	void HandleRiftDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.HandleFinalPhaseAISpawned (Underlying native function: HandleFinalPhaseAISpawned 0x8488bf8)
	void HandleFinalPhaseAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.HandleFinalPhaseAIDied (Underlying native function: HandleFinalPhaseAIDied 0x848897c)
	void HandleFinalPhaseAIDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.HandleAISpawned (Underlying native function: HandleAISpawned 0x84887f0)
	void HandleAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.HandleAIDied (Underlying native function: HandleAIDied 0x848844c)
	void HandleAIDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.GetPlayerScore (Underlying native function: GetPlayerScore 0x8488230)
	bool GetPlayerScore(class AFortPlayerControllerAthena*& AthenaPC, int& OutScore); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Bagel.GetPlayerBestScore (Underlying native function: GetPlayerBestScore 0x8487ff0)
	bool GetPlayerBestScore(class AFortPlayerControllerAthena*& AthenaPC, int& OutStatValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

