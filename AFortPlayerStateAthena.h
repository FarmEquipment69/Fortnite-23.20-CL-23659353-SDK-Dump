// Class /Script/FortniteGame.FortPlayerStateAthena
// Size: 0x1878
class AFortPlayerStateAthena : public AFortPlayerStateZone
{
	unsigned char unreflected_f58[0x14]; // 0xf58 (0x14) 
	int PersonalLobbyAction; // 0xf6c (0x4)
	struct FFortRespawnData RespawnData; // 0xf70 (0x40)
	unsigned char unreflected_fb0[0x18]; // 0xfb0 (0x18) 
	enum ETeamMemberState ReplicatedTeamMemberState; // 0xfc8 (0x1)
	enum ETeamMemberState TeamMemberState; // 0xfc9 (0x1)
	unsigned char unreflected_fca[0x2]; // 0xfca (0x2) 
	float TeamMemberStateRepTime; // 0xfcc (0x4)
	unsigned char unreflected_fd0[0x20]; // 0xfd0 (0x20) 
	struct FMulticastInlineDelegate OnTeamIndexChangedDelegate; // 0xff0 (0x10)
	struct FMulticastInlineDelegate OnSquadIdChangedDelegate; // 0x1000 (0x10)
	unsigned char unreflected_1010[0x48]; // 0x1010 (0x48) 
	bool bHasWonAGame; // 0x1058 (0x1)
	unsigned char unreflected_1059[0x3]; // 0x1059 (0x3) 
	int TeamKillScore; // 0x105c (0x4)
	struct TMap<class UAthenaGadgetItemDefinition*, int> KillsWhileAthenaGadgetEquippedMap; // 0x1060 (0x50)
	struct TMap<struct FString, float> DamageDealtToBigHealthProps; // 0x10b0 (0x50)
	unsigned char TeamIndex; // 0x1100 (0x1)
	unsigned char unreflected_1101[0x3]; // 0x1101 (0x3) 
	int TeamScorePlacement; // 0x1104 (0x4)
	int TeamScore; // 0x1108 (0x4)
	int Place; // 0x110c (0x4)
	int DownScore; // 0x1110 (0x4)
	int KillScore; // 0x1114 (0x4)
	int SeasonLevelUIDisplay; // 0x1118 (0x4)
	unsigned char unreflected_111c[0x4]; // 0x111c (0x4) 
	int HumanKillScore; // 0x1120 (0x4)
	unsigned char unreflected_1124[0x40]; // 0x1124 (0x40) 
	int AIKillCount; // 0x1164 (0x4)
	unsigned char unreflected_1168[0x4]; // 0x1168 (0x4) 
	int NumChestsOpened; // 0x116c (0x4)
	unsigned char unreflected_1170[0x4]; // 0x1170 (0x4) 
	int NumAmmoCansOpened; // 0x1174 (0x4)
	unsigned char unreflected_1178[0x4]; // 0x1178 (0x4) 
	int NumSupplyDropsOpened; // 0x117c (0x4)
	unsigned char unreflected_1180[0x4]; // 0x1180 (0x4) 
	int NumLlamasOpened; // 0x1184 (0x4)
	unsigned char unreflected_1188[0x4]; // 0x1188 (0x4) 
	int NumForagedItemsConsumed; // 0x118c (0x4)
	unsigned char unreflected_1190[0x4]; // 0x1190 (0x4) 
	int NumMinutesAlive; // 0x1194 (0x4)
	unsigned char unreflected_1198[0x4]; // 0x1198 (0x4) 
	int NumBronzeCoinsCollected; // 0x119c (0x4)
	unsigned char unreflected_11a0[0x4]; // 0x11a0 (0x4) 
	int NumSilverCoinsCollected; // 0x11a4 (0x4)
	unsigned char unreflected_11a8[0x4]; // 0x11a8 (0x4) 
	int NumGoldCoinsCollected; // 0x11ac (0x4)
	unsigned char unreflected_11b0[0x4]; // 0x11b0 (0x4) 
	int TotalPlayerScore; // 0x11b4 (0x4)
	struct FMulticastInlineDelegate PointsAddedToScore; // 0x11b8 (0x10)
	struct FMulticastInlineDelegate TeamScoreChanged; // 0x11c8 (0x10)
	struct FMulticastInlineDelegate TeamPlacementChanged; // 0x11d8 (0x10)
	struct FMulticastInlineDelegate PlaceChanged; // 0x11e8 (0x10)
	struct FMulticastInlineDelegate TeamAverageDamageChanged; // 0x11f8 (0x10)
	struct FMulticastInlineDelegate MatchAbandonStateChanged; // 0x1208 (0x10)
	unsigned char unreflected_1218[0x50]; // 0x1218 (0x50) 
	unsigned char StormSurgeEffectCount; // 0x1268 (0x1)
	unsigned char unreflected_1269[0x1]; // 0x1269 (0x1) 
	uint16_t TeamAverageDamageDealt; // 0x126a (0x2)
	unsigned char SquadId; // 0x126c (0x1)
	unsigned char bThankedBusDriver; // 0x126d (0x1)
	unsigned char bDidNotThankBusDriver; // 0x126d (0x1)
	unsigned char bUsingAnonymousMode; // 0x126d (0x1)
	unsigned char bUsingAnonymousCharacterMode; // 0x126d (0x1)
	unsigned char bShowingSeasonLevel; // 0x126d (0x1)
	unsigned char unreflected_126e[0x2]; // 0x126e (0x2) 
	struct FText PlayerNameCustomOverride; // 0x1270 (0x18)
	unsigned char bHidingOtherPlayersNames; // 0x1288 (0x1)
	unsigned char unreflected_1289[0x77]; // 0x1289 (0x77) 
	bool bIsTalking; // 0x1300 (0x1)
	bool bIsMuted; // 0x1301 (0x1)
	unsigned char unreflected_1302[0x216]; // 0x1302 (0x216) 
	struct FMulticastInlineDelegate OnPersistenceErrorTypeChanged; // 0x1518 (0x10)
	unsigned char unreflected_1528[0x20]; // 0x1528 (0x20) 
	struct FDetailedMetricInformation MetricInformation; // 0x1548 (0x10)
	struct FSimpleMetricInformation SimpleMetricInformation; // 0x1558 (0x78)
	int SecondsAlive; // 0x15d0 (0x4)
	int TimeOfPawnCreation; // 0x15d4 (0x4)
	unsigned char unreflected_15d8[0x4]; // 0x15d8 (0x4) 
	bool bIsDisconnected; // 0x15dc (0x1)
	unsigned char unreflected_15dd[0x3b]; // 0x15dd (0x3b) 
	class UTexture2D* GameModeIcon; // 0x1618 (0x8)
	struct FDeathInfo DeathInfo; // 0x1620 (0xa0)
	struct FChangeTeamInfo ChangeTeamInfo; // 0x16c0 (0x28)
	unsigned char unreflected_16e8[0x60]; // 0x16e8 (0x60) 
	struct FFortResurrectionData ResurrectionChipAvailable; // 0x1748 (0x28)
	bool bResurrectingNow; // 0x1770 (0x1)
	bool bRespawningFromRespawnData; // 0x1771 (0x1)
	unsigned char unreflected_1772[0x2]; // 0x1772 (0x2) 
	int RebootCounter; // 0x1774 (0x4)
	struct TWeakObjectPtr<class ABuildingGameplayActorSpawnMachine> InteractingRebootVan; // 0x1778 (0x8)
	unsigned char unreflected_1780[0x4]; // 0x1780 (0x4) 
	enum EMatchAbandonState MatchAbandonState; // 0x1784 (0x1)
	unsigned char unreflected_1785[0x1]; // 0x1785 (0x1) 
	unsigned char bIsAnAthenaGameParticipant; // 0x1786 (0x1)
	unsigned char bIsContributingToOverbudgetHeatmap; // 0x1786 (0x1)
	unsigned char unreflected_1787[0x1]; // 0x1787 (0x1) 
	struct FUniqueNetIdRepl BotUniqueId; // 0x1788 (0x30)
	bool bPreserveSquad; // 0x17b8 (0x1)
	unsigned char unreflected_17b9[0x1f]; // 0x17b9 (0x1f) 
	enum EKeepPlayingTogetherVotingStatus KeepPlayingTogetherVotingStatus; // 0x17d8 (0x1)
	unsigned char unreflected_17d9[0x1f]; // 0x17d9 (0x1f) 
	struct FString KeepPlayingTogetherMatchmakingRegion; // 0x17f8 (0x10)
	unsigned char unreflected_1808[0x18]; // 0x1808 (0x18) 
	unsigned char InitialSquadSize; // 0x1820 (0x1)
	unsigned char SquadSizeIncrements; // 0x1821 (0x1)
	unsigned char SquadSizeDecrements; // 0x1822 (0x1)
	unsigned char unreflected_1823[0x45]; // 0x1823 (0x45) 
	class UFortPlayerStateComponent_AthenaQuests* PlayerStateAthenaQuestsComponent; // 0x1868 (0x8)
	enum ECreativePersistenceErrorTypes PersistenceErrorType; // 0x1870 (0x1)
	unsigned char padding_1871[0x7]; // 0x1871 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStateAthena.ToDeathCause (Underlying native function: ToDeathCause 0x8418a40)
	static enum EDeathCause ToDeathCause(struct FGameplayTagContainer& InTags, bool& bWasDBNO); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateAthena.SetIsContributingToOverbudgetHeatmap (Underlying native function: SetIsContributingToOverbudgetHeatmap 0x8418460)
	void SetIsContributingToOverbudgetHeatmap(bool& bContributingToOverbudget); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ServerSetKeepPlayingTogetherMatchmakingRegion (Underlying native function: ServerSetKeepPlayingTogetherMatchmakingRegion 0x8418110)
	void ServerSetKeepPlayingTogetherMatchmakingRegion(struct FString& NewRegion); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Server_TogglePreserveSquad (Underlying native function: Server_TogglePreserveSquad 0x8418414)
	void ServerTogglePreserveSquad(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Server_SetKeepPlayingTogetherVotingStatus (Underlying native function: Server_SetKeepPlayingTogetherVotingStatus 0x8418378)
	void ServerSetKeepPlayingTogetherVotingStatus(enum EKeepPlayingTogetherVotingStatus& NewStatus); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Server_SetCanEditCreativeIsland (Underlying native function: Server_SetCanEditCreativeIsland 0x8418268)
	void ServerSetCanEditCreativeIsland(bool& bCanEdit, struct TArray<struct FString>& WhiteList); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnSquadSpecificActorSpawned (Underlying native function: OnSquadSpecificActorSpawned 0x5caf5b0)
	static void OnSquadSpecificActorSpawned(unsigned char& AlwaysRelevantForSquadId, class AActor*& SpawnedActor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnSquadSpecificActorDestroyed (Underlying native function: OnSquadSpecificActorDestroyed 0x5caf4b0)
	static void OnSquadSpecificActorDestroyed(unsigned char& AlwaysRelevantForSquadId, class AActor*& DestroyedActor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateAthena.OnSimplePlayerMetricInformationUpdated__DelegateSignature (Has no native function)
	void OnSimplePlayerMetricInformationUpdatedDelegateSignature(class APlayerState*& Client, struct FSimpleMetricInformation& Information); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TotalPlayerScore (Underlying native function: OnRep_TotalPlayerScore 0x8417e64)
	void OnRepTotalPlayerScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ThankedBusDriver (Underlying native function: OnRep_ThankedBusDriver 0x2766a50)
	void OnRepThankedBusDriver(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamScorePlacement (Underlying native function: OnRep_TeamScorePlacement 0x8417e14)
	void OnRepTeamScorePlacement(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamScore (Underlying native function: OnRep_TeamScore 0x8417de0)
	void OnRepTeamScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamKillScore (Underlying native function: OnRep_TeamKillScore 0x241f0b4)
	void OnRepTeamKillScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamIndex (Underlying native function: OnRep_TeamIndex 0x248fb84)
	void OnRepTeamIndex(unsigned char& OldVal); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_TeamAverageDamageDealt (Underlying native function: OnRep_TeamAverageDamageDealt 0x8417d68)
	void OnRepTeamAverageDamageDealt(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_StormSurgeEffectCount (Underlying native function: OnRep_StormSurgeEffectCount 0x8417cfc)
	void OnRepStormSurgeEffectCount(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_SquadId (Underlying native function: OnRep_SquadId 0x47e0e68)
	void OnRepSquadId(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_SimpleMetricInformation (Underlying native function: OnRep_SimpleMetricInformation 0x8417c9c)
	void OnRepSimpleMetricInformation(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_SeasonLevelUIDisplay (Underlying native function: OnRep_SeasonLevelUIDisplay 0x24fe690)
	void OnRepSeasonLevelUIDisplay(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ResurrectionChipReplicated (Underlying native function: OnRep_ResurrectionChipReplicated 0x251a964)
	void OnRepResurrectionChipReplicated(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ResurrectingNow (Underlying native function: OnRep_ResurrectingNow 0x260ba8c)
	void OnRepResurrectingNow(bool& bPreviousResurrectingNow); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ReplicatedTeamMemberState (Underlying native function: OnRep_ReplicatedTeamMemberState 0x275089c)
	void OnRepReplicatedTeamMemberState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_RebootCounter (Underlying native function: OnRep_RebootCounter 0x261defc)
	void OnRepRebootCounter(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_PreserveSquad (Underlying native function: OnRep_PreserveSquad 0x8417c78)
	void OnRepPreserveSquad(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_Place (Underlying native function: OnRep_Place 0x212ae18)
	void OnRepPlace(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_PersistenceErrorType (Underlying native function: OnRep_PersistenceErrorType 0x8417c40)
	void OnRepPersistenceErrorType(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumSupplyDropsOpened (Underlying native function: OnRep_NumSupplyDropsOpened 0x8417c2c)
	void OnRepNumSupplyDropsOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumSilverCoinsCollected (Underlying native function: OnRep_NumSilverCoinsCollected 0x8417c18)
	void OnRepNumSilverCoinsCollected(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumMinutesAlive (Underlying native function: OnRep_NumMinutesAlive 0x8417c04)
	void OnRepNumMinutesAlive(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumLlamasOpened (Underlying native function: OnRep_NumLlamasOpened 0x8417bf0)
	void OnRepNumLlamasOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumGoldCoinsCollected (Underlying native function: OnRep_NumGoldCoinsCollected 0x8417bdc)
	void OnRepNumGoldCoinsCollected(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumForagedItemsConsumed (Underlying native function: OnRep_NumForagedItemsConsumed 0x8417bc8)
	void OnRepNumForagedItemsConsumed(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumChestsOpened (Underlying native function: OnRep_NumChestsOpened 0x8417bb4)
	void OnRepNumChestsOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumBronzeCoinsCollected (Underlying native function: OnRep_NumBronzeCoinsCollected 0x8417ba0)
	void OnRepNumBronzeCoinsCollected(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_NumAmmoCansOpened (Underlying native function: OnRep_NumAmmoCansOpened 0x8417b8c)
	void OnRepNumAmmoCansOpened(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_MetricInformation (Underlying native function: OnRep_MetricInformation 0x8417b64)
	void OnRepMetricInformation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_MatchAbandonState (Underlying native function: OnRep_MatchAbandonState 0x8417acc)
	void OnRepMatchAbandonState(enum EMatchAbandonState& PrevMatchAbandonState); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_Kills (Underlying native function: OnRep_Kills 0x129a260)
	void OnRepKills(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_KeepPlayingTogetherVotingStatus (Underlying native function: OnRep_KeepPlayingTogetherVotingStatus 0x2485cec)
	void OnRepKeepPlayingTogetherVotingStatus(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_KeepPlayingTogetherMatchmakingRegion (Underlying native function: OnRep_KeepPlayingTogetherMatchmakingRegion 0x236b504)
	void OnRepKeepPlayingTogetherMatchmakingRegion(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_IsContributingToOverbudgetHeatmap (Underlying native function: OnRep_IsContributingToOverbudgetHeatmap 0x8417a80)
	void OnRepIsContributingToOverbudgetHeatmap(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_InteractingRebootVan (Underlying native function: OnRep_InteractingRebootVan 0x8417a60)
	void OnRepInteractingRebootVan(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_Downs (Underlying native function: OnRep_Downs 0x26daa0c)
	void OnRepDowns(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_DidNotThankBusDriver (Underlying native function: OnRep_DidNotThankBusDriver 0x8417a4c)
	void OnRepDidNotThankBusDriver(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_DeathInfo (Underlying native function: OnRep_DeathInfo 0x254a924)
	void OnRepDeathInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_ChangeTeamInfo (Underlying native function: OnRep_ChangeTeamInfo 0x8417a04)
	void OnRepChangeTeamInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnRep_AIKills (Underlying native function: OnRep_AIKills 0x84179f0)
	void OnRepAIKills(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateAthena.OnPlayerMetricInformationUpdated__DelegateSignature (Has no native function)
	void OnPlayerMetricInformationUpdatedDelegateSignature(class APlayerState*& Client, struct FDetailedMetricInformation& Information); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerStateAthena.OnInteractionEventOccurred (Underlying native function: OnInteractionEventOccurred 0x8417938)
	void OnInteractionEventOccurred(struct FGameplayTagContainer& InteractionTargetTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateAthena.NetMulticastTriggerCustomFeedMessageWithContext (Underlying native function: NetMulticastTriggerCustomFeedMessageWithContext 0x8417844)
	void NetMulticastTriggerCustomFeedMessageWithContext(struct FGameplayTag& CustomFeedMessageGeneratorID, struct FCustomFeedMessageContext& Context); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.NetMulticastTriggerCustomFeedMessage (Underlying native function: NetMulticastTriggerCustomFeedMessage 0x84177c0)
	void NetMulticastTriggerCustomFeedMessage(struct FGameplayTag& CustomFeedMessageGeneratorID); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsSquadDead (Underlying native function: IsSquadDead 0x8417684)
	bool IsSquadDead(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsResurrectionChipAvailable (Underlying native function: IsResurrectionChipAvailable 0x84175ec)
	bool IsResurrectionChipAvailable(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsResurrectingNow (Underlying native function: IsResurrectingNow 0x84175d4)
	bool IsResurrectingNow(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsRespawningWithRespawnData (Underlying native function: IsRespawningWithRespawnData 0x84175bc)
	bool IsRespawningWithRespawnData(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsInSquad (Underlying native function: IsInSquad 0x84171b4)
	bool IsInSquad(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.IsDisconnected (Underlying native function: IsDisconnected 0x8416cac)
	bool IsDisconnected(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetTransientQuestsComponent (Underlying native function: GetTransientQuestsComponent 0x8415ee0)
	class UFortControllerComponent_TransientQuests* GetTransientQuestsComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetTeam (Underlying native function: GetTeam 0x8415d30)
	unsigned char GetTeam(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetSquadMemberIndex (Underlying native function: GetSquadMemberIndex 0x8415d0c)
	int GetSquadMemberIndex(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetSquadID (Underlying native function: GetSquadID 0x8415cf4)
	unsigned char GetSquadID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetSocialAvatarBrush (Underlying native function: GetSocialAvatarBrush 0x8415b30)
	struct TWeakObjectPtr<class UTexture2D> GetSocialAvatarBrush(bool& bSmallImage); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetResurrectionChipExpirationLength (Underlying native function: GetResurrectionChipExpirationLength 0x8415b18)
	float GetResurrectionChipExpirationLength(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetRemainingResurrectionChipExpirationTime (Underlying native function: GetRemainingResurrectionChipExpirationTime 0x8415ad8)
	float GetRemainingResurrectionChipExpirationTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetPinColorBySquadMemberIndex (Underlying native function: GetPinColorBySquadMemberIndex 0x8415998)
	static struct FLinearColor GetPinColorBySquadMemberIndex(int& SquadIndex); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetPinColor (Underlying native function: GetPinColor 0x8415960)
	struct FLinearColor GetPinColor(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetKillScore (Underlying native function: GetKillScore 0x84155a8)
	int GetKillScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetInventoriesRequiredWithNoPersistence (Underlying native function: GetInventoriesRequiredWithNoPersistence 0x8415574)
	bool GetInventoriesRequiredWithNoPersistence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetInventoriesInNonPersistenceMode (Underlying native function: GetInventoriesInNonPersistenceMode 0x8415558)
	bool GetInventoriesInNonPersistenceMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetInventoriesInLocalOnlyMode (Underlying native function: GetInventoriesInLocalOnlyMode 0x841553c)
	bool GetInventoriesInLocalOnlyMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetDeathInfo (Underlying native function: GetDeathInfo 0x84153e4)
	struct FDeathInfo GetDeathInfo(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.GetCurrentPersistenceErrorType (Underlying native function: GetCurrentPersistenceErrorType 0x84153cc)
	enum ECreativePersistenceErrorTypes GetCurrentPersistenceErrorType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/FortniteGame.FortPlayerStateAthena.DynamicPersistenceErrorChange__DelegateSignature (Has no native function)
	void DynamicPersistenceErrorChangeDelegateSignature(class AFortPlayerStateAthena*& FortPlayerState, enum ECreativePersistenceErrorTypes& NewValue); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportTournamentStatUpdate (Underlying native function: ClientReportTournamentStatUpdate 0x8414c50)
	void ClientReportTournamentStatUpdate(struct FFortTournamentStatInfo& TournamentStatInfo); // (Net | NetReliable | Native | Event | Public | NetClient | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportTeamKill (Underlying native function: ClientReportTeamKill 0x8414bcc)
	void ClientReportTeamKill(int& TeamKills); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportKill (Underlying native function: ClientReportKill 0x8414b48)
	void ClientReportKill(class AFortPlayerStateAthena*& Player); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientReportDBNO (Underlying native function: ClientReportDBNO 0x8414ac4)
	void ClientReportDBNO(class AFortPlayerStateAthena*& Player); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientNotifyMatchEntered (Underlying native function: ClientNotifyMatchEntered 0x84149e0)
	void ClientNotifyMatchEntered(struct FEventTournamentIds& EventIds); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.ClientAddKillFeedErrorMessage (Underlying native function: ClientAddKillFeedErrorMessage 0x8414950)
	void ClientAddKillFeedErrorMessage(struct TArray<struct FFortCreativeMessageDispatcherErrorMessage>& ErrorMessages); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerStateAthena.Client_OnNewLevel (Underlying native function: Client_OnNewLevel 0x8414db0)
	void ClientOnNewLevel(int& NewLevel); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateAthena.CanEditCreativeIsland (Underlying native function: CanEditCreativeIsland 0x8414838)
	bool CanEditCreativeIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateAthena.CanBeResurrected (Underlying native function: CanBeResurrected 0x8414814)
	bool CanBeResurrected(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

