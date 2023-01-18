// Class /Script/FortniteGame.FortAthenaMutator_Ashton
// Size: 0x1a80
class AFortAthenaMutator_Ashton : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnStoneListChanged; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnVillainRespawnsRemainingChanged; // 0x340 (0x10)
	unsigned char unreflected_350[0x8]; // 0x350 (0x8) 
	struct FScalableFloat GameOverDelay; // 0x358 (0x28)
	unsigned char unreflected_380[0x10]; // 0x380 (0x10) 
	struct FAshtonStoneData StoneDataList[0x6]; // 0x390 (0xf0) (ARRAY) 
	struct FAshtonStoneSpawnData StoneSpawnDataList[0x6]; // 0x930 (0xf0) (ARRAY) 
	struct TArray<struct FAshtonStoneState> StoneList; // 0xed0 (0x10)
	struct TArray<struct FAshtonStoneState> CachedStoneList; // 0xee0 (0x10)
	struct FVector VillainLeaderLocationForSnapSound; // 0xef0 (0x18)
	struct FVector VillainLeaderLocationForDeathSound; // 0xf08 (0x18)
	struct FVector VillainLeaderLocationForSound; // 0xf20 (0x18)
	struct FGameplayTag JimInventoryTag; // 0xf38 (0x4)
	struct FGameplayTag JimPickupTag; // 0xf3c (0x4)
	struct FGameplayTag VillainTeamTag; // 0xf40 (0x4)
	struct FGameplayTag HeroTeamTag; // 0xf44 (0x4)
	struct FGameplayTagContainer ForceEquipTags; // 0xf48 (0x20)
	unsigned char unreflected_f68[0x8]; // 0xf68 (0x8) 
	struct FSlateBrush MapEnemyBrush; // 0xf70 (0xc0)
	struct FVector2D MapEnemyScale; // 0x1030 (0x10)
	class AFortPlayerController* AutoEquipController; // 0x1040 (0x8)
	unsigned char unreflected_1048[0x10]; // 0x1048 (0x10) 
	class UFortGadgetItemDefinition* VillainLeaderItemDef; // 0x1058 (0x8)
	struct TArray<class UFortWorldItemDefinition*> VillainItemDefs; // 0x1060 (0x10)
	class AFortPlayerControllerAthena* VillainLeaderPC; // 0x1070 (0x8)
	struct FFortRespawnLogicData RespawnLogicData; // 0x1078 (0x140)
	struct FScalableFloat NumVillainRespawns; // 0x11b8 (0x28)
	int NumVillainRespawnsRemaining; // 0x11e0 (0x4)
	unsigned char unreflected_11e4[0x4]; // 0x11e4 (0x4) 
	struct FScalableFloat PromoteNextVillainLeaderDelay; // 0x11e8 (0x28)
	struct FScalableFloat VillainsDisplayStoneIcons; // 0x1210 (0x28)
	unsigned char unreflected_1238[0x1c]; // 0x1238 (0x1c) 
	int CachedNumCapturedStones; // 0x1254 (0x4)
	struct FAthenaGameMessageData GameMsgIntroVillain; // 0x1258 (0x50)
	struct FAthenaGameMessageData GameMsgIntroHero; // 0x12a8 (0x50)
	struct FAthenaGameMessageData GameMsgRespawnVillain; // 0x12f8 (0x50)
	struct FAthenaGameMessageData GameMsgRespawnHero; // 0x1348 (0x50)
	struct FAthenaGameMessageData GameMsgHeroFollowMap; // 0x1398 (0x50)
	struct FAthenaGameMessageData GameMsgFirstStoneComingVillain; // 0x13e8 (0x50)
	struct FAthenaGameMessageData GameMsgFirstStoneComingHero; // 0x1438 (0x50)
	struct FAthenaGameMessageData GameMsgStoneComingVillain; // 0x1488 (0x50)
	struct FAthenaGameMessageData GameMsgStoneComingHero; // 0x14d8 (0x50)
	struct FAthenaGameMessageData GameMsgFirstStoneCapturedVillain; // 0x1528 (0x50)
	struct FAthenaGameMessageData GameMsgFirstStoneCapturedHero; // 0x1578 (0x50)
	struct FAthenaGameMessageData GameMsgStoneCapturedVillain; // 0x15c8 (0x50)
	struct FAthenaGameMessageData GameMsgStoneCapturedHero; // 0x1618 (0x50)
	struct FAthenaGameMessageData GameMsgOneStoneLeftVillain; // 0x1668 (0x50)
	struct FAthenaGameMessageData GameMsgOneStoneLeftHero; // 0x16b8 (0x50)
	struct FAthenaGameMessageData GameMsgFinalStoneComingVillain; // 0x1708 (0x50)
	struct FAthenaGameMessageData GameMsgFinalStoneComingHero; // 0x1758 (0x50)
	struct FAthenaGameMessageData GameMsgEliminatedThanosVillain; // 0x17a8 (0x50)
	struct FAthenaGameMessageData GameMsgEliminatedThanosHero; // 0x17f8 (0x50)
	struct FAthenaGameMessageData GameMsgRespawnThanosVillain; // 0x1848 (0x50)
	struct FAthenaGameMessageData GameMsgRespawnThanosHero; // 0x1898 (0x50)
	struct FAthenaGameMessageData GameMsgStonesCompleteVillain; // 0x18e8 (0x50)
	struct FAthenaGameMessageData GameMsgStonesCompleteHero; // 0x1938 (0x50)
	struct FAthenaGameMessageData GameMsgVillainArmyDepletedVillain; // 0x1988 (0x50)
	struct FAthenaGameMessageData GameMsgVillainArmyDepletedHero; // 0x19d8 (0x50)
	struct FAthenaGameMessageData GameMsgNoMoreRespawns; // 0x1a28 (0x50)
	unsigned char padding_1a78[0x8]; // 0x1a78 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.SelectNextVillainLeader (Underlying native function: SelectNextVillainLeader 0x848a614)
	void SelectNextVillainLeader(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnRep_VillainLeaderLocationForSound (Underlying native function: OnRep_VillainLeaderLocationForSound 0x848a2a0)
	void OnRepVillainLeaderLocationForSound(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnRep_VillainLeaderLocationForSnapSound (Underlying native function: OnRep_VillainLeaderLocationForSnapSound 0x848a28c)
	void OnRepVillainLeaderLocationForSnapSound(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnRep_VillainLeaderLocationForDeathSound (Underlying native function: OnRep_VillainLeaderLocationForDeathSound 0x848a228)
	void OnRepVillainLeaderLocationForDeathSound(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnRep_StoneList (Underlying native function: OnRep_StoneList 0x848a16c)
	void OnRepStoneList(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnRep_NumVillainRespawnsRemaining (Underlying native function: OnRep_NumVillainRespawnsRemaining 0x848a100)
	void OnRepNumVillainRespawnsRemaining(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnPlayVillainLeaderSpawnedSound (Has no native function)
	void OnPlayVillainLeaderSpawnedSound(struct FVector& SoundLocation); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnPlayVillainLeaderSnapSound (Has no native function)
	void OnPlayVillainLeaderSnapSound(struct FVector& SoundLocation); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnPlayVillainLeaderDiedSound (Has no native function)
	void OnPlayVillainLeaderDiedSound(struct FVector& SoundLocation); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnPickupSpawnedAndReady (Underlying native function: OnPickupSpawnedAndReady 0x70dc290)
	void OnPickupSpawnedAndReady(class AFortGameModePickup*& PickupObj, class UFortItemDefinition*& PickupItemDef); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnPickupDestroying (Underlying native function: OnPickupDestroying 0x8489e90)
	void OnPickupDestroying(class AFortGameModePickup*& PickupObj, class UFortItemDefinition*& PickupItemDef); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x8489878)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x84895d8)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.GetStoneState (Underlying native function: GetStoneState 0x8488384)
	enum EAshtonStoneStateType GetStoneState(enum EAshtonStoneType& StoneType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_Ashton.GetNumCapturedStones (Underlying native function: GetNumCapturedStones 0x8487f54)
	int GetNumCapturedStones(struct TArray<struct FAshtonStoneState>& TestList); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

