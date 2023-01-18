// Class /Script/FortniteGame.FortGameModeZone
// Size: 0xb90
class AFortGameModeZone : public AFortGameMode_InGame
{
	unsigned char unreflected_758[0x28]; // 0x758 (0x28) 
	struct FMulticastInlineDelegate OnPlayerLogin; // 0x780 (0x10)
	unsigned char bSpawnAllStuff; // 0x790 (0x1)
	unsigned char bDisableAI; // 0x790 (0x1)
	unsigned char bInitBeaconAtInitGame; // 0x790 (0x1)
	unsigned char unreflected_791[0x3]; // 0x791 (0x3) 
	int OverrideAIDirectorIndex; // 0x794 (0x4)
	class ABuildingSMActor* ActiveSpawnPad; // 0x798 (0x8)
	unsigned char unreflected_7a0[0x28]; // 0x7a0 (0x28) 
	bool bDisableVoiceChat; // 0x7c8 (0x1)
	unsigned char unreflected_7c9[0x7]; // 0x7c9 (0x7) 
	struct FString ReplayStreamerOverride; // 0x7d0 (0x10)
	unsigned char unreflected_7e0[0x8]; // 0x7e0 (0x8) 
	class AFortAIDirector* AIDirector; // 0x7e8 (0x8)
	class AFortAIGoalManager* AIGoalManager; // 0x7f0 (0x8)
	int EndOfZoneRemainTime; // 0x7f8 (0x4)
	unsigned char unreflected_7fc[0x4]; // 0x7fc (0x4) 
	class UFortTaggedActorsManager* TaggedActorsManager; // 0x800 (0x8)
	class UFortBuildingOctreeManager* BuildingOctreeManager; // 0x808 (0x8)
	bool bUseAllSocketsInSpawnPad; // 0x810 (0x1)
	bool bAllowSpectateAfterDeath; // 0x811 (0x1)
	bool bForceSpectateAfterDeathRegardlessOfRespawnTime; // 0x812 (0x1)
	unsigned char unreflected_813[0x5]; // 0x813 (0x5) 
	struct FScalableFloat SpectateAfterDeathDelayFirst; // 0x818 (0x28)
	float SpectateAfterDeathDelayRepeating; // 0x840 (0x4)
	unsigned char unreflected_844[0x4]; // 0x844 (0x4) 
	struct TArray<struct FHotfixVolumePlacement> HotfixBehaviorVolumes; // 0x848 (0x10)
	bool bCriticalMissionEligible; // 0x858 (0x1)
	unsigned char unreflected_859[0x37]; // 0x859 (0x37) 
	struct TMap<struct FName, float> ZoneLootNamedWeightsMapOverride; // 0x890 (0x50)
	class UFortPetManager* PetManager; // 0x8e0 (0x8)
	struct TArray<struct FItemAndCount> StartingItems; // 0x8e8 (0x10)
	unsigned char bAllowEnemyAIWorldItemLootDrops; // 0x8f8 (0x1)
	unsigned char bAllowEnemyAIItemCacheLootDrops; // 0x8f8 (0x1)
	unsigned char bAllowContainerItemCacheLootDrops; // 0x8f8 (0x1)
	unsigned char unreflected_8f9[0x7]; // 0x8f9 (0x7) 
	struct FMulticastInlineDelegate OnHandleZonePeriodicReport; // 0x900 (0x10)
	struct FMulticastInlineDelegate OnHandleMatchHasStarted; // 0x910 (0x10)
	bool bTrustXboxPlatformId; // 0x920 (0x1)
	enum ESubGame AssociatedSubGame; // 0x921 (0x1)
	unsigned char unreflected_922[0xe]; // 0x922 (0xe) 
	struct FSlateBrush BluGloMiniMapIconBrushOverride; // 0x930 (0xc0)
	unsigned char unreflected_9f0[0xc8]; // 0x9f0 (0xc8) 
	bool bTryToSpawnWithinStormShield; // 0xab8 (0x1)
	bool bSupportOneHitBuildingActorRecycling; // 0xab9 (0x1)
	bool bOneHitResourcesGoToOwner; // 0xaba (0x1)
	unsigned char unreflected_abb[0x1]; // 0xabb (0x1) 
	float StormWindInactiveMagnitudeScalar; // 0xabc (0x4)
	float StormWindActiveMagnitudeScalar; // 0xac0 (0x4)
	unsigned char unreflected_ac4[0x4]; // 0xac4 (0x4) 
	struct TArray<struct FVector> PlayerStartLocationOverrides; // 0xac8 (0x10)
	unsigned char unreflected_ad8[0x68]; // 0xad8 (0x68) 
	bool bEnableLongRangeAutoPickup; // 0xb40 (0x1)
	unsigned char unreflected_b41[0x3]; // 0xb41 (0x3) 
	float LongRangeAutoPickupInterval; // 0xb44 (0x4)
	float LongRangeAutoPickupRadius; // 0xb48 (0x4)
	unsigned char padding_b4c[0x44]; // 0xb4c (0x44)

	/* Functions */

	// Function /Script/FortniteGame.FortGameModeZone.SetZoneLootNamedWeightsMapOverride (Underlying native function: SetZoneLootNamedWeightsMapOverride 0x88fc238)
	void SetZoneLootNamedWeightsMapOverride(struct TMap<struct FName, float>& NewOverrideMap); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModeZone.SetSpawnWithinStormShield (Underlying native function: SetSpawnWithinStormShield 0x88fc13c)
	void SetSpawnWithinStormShield(bool& bSpawnInStormShield); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModeZone.SetPlayerStartLocationOverrides (Underlying native function: SetPlayerStartLocationOverrides 0x88fc064)
	void SetPlayerStartLocationOverrides(struct TArray<struct FVector>& InPlayerStarts, class AFortMission*& InMission); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModeZone.SetJoinability (Underlying native function: SetJoinability 0x88fbe20)
	void SetJoinability(bool& bMatchJoinable); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModeZone.SetEnemyAIItemCacheLootDrops (Underlying native function: SetEnemyAIItemCacheLootDrops 0x88fbd14)
	void SetEnemyAIItemCacheLootDrops(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModeZone.SetActiveSpawnPad (Underlying native function: SetActiveSpawnPad 0x88fbb30)
	void SetActiveSpawnPad(class ABuildingSMActor*& InActiveSpawnPad); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModeZone.ReplicateHealthAndShield (Underlying native function: ReplicateHealthAndShield 0x88fb454)
	void ReplicateHealthAndShield(); // (Native | Public)

	// Function /Script/FortniteGame.FortGameModeZone.OnMorningReached (Underlying native function: OnMorningReached 0x88fab64)
	void OnMorningReached(); // (Native | Public)

	// Function /Script/FortniteGame.FortGameModeZone.OnEveningReached (Underlying native function: OnEveningReached 0x88fab24)
	void OnEveningReached(); // (Native | Public)

	// Function /Script/FortniteGame.FortGameModeZone.IsSpectatingAllowedAfterDeath (Underlying native function: IsSpectatingAllowedAfterDeath 0x88fa884)
	bool IsSpectatingAllowedAfterDeath(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameModeZone.IsGameReadyToSelectLoot (Underlying native function: IsGameReadyToSelectLoot 0x88fa5fc)
	bool IsGameReadyToSelectLoot(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortGameModeZone.GetTeammateReviveGameplayEffectOverride (Underlying native function: GetTeammateReviveGameplayEffectOverride 0x88f9c68)
	class UClass* GetTeammateReviveGameplayEffectOverride(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameModeZone.GetPlayerStartupController (Underlying native function: GetPlayerStartupController 0x88f9b64)
	class AFortPlayerStartupController* GetPlayerStartupController(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameModeZone.ClearPlayerStartLocationOverrides (Underlying native function: ClearPlayerStartLocationOverrides 0x26daa0c)
	void ClearPlayerStartLocationOverrides(); // (Final | Native | Protected | BlueprintCallable)
};

