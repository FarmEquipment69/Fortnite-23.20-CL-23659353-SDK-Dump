// Class /Script/FortniteGame.FortAthenaMutator_DadBro
// Size: 0x840
class AFortAthenaMutator_DadBro : public AFortAthenaMutator_GameModeBase
{
	class UFortDifficultyEncounterSettings* DadBroEncounter; // 0x450 (0x8)
	struct FVector DadBroSpawnLocation; // 0x458 (0x18)
	class UFortAIEncounterInfo* DadBroEncounterInstance; // 0x470 (0x8)
	class AFortAIPawn* DadBroPawn; // 0x478 (0x8)
	struct FMulticastInlineDelegate OnDadBroSpawnedDelegate; // 0x480 (0x10)
	struct TArray<struct FFortDadbroPickupDespawnData> PendingPickupDespawns; // 0x490 (0x10)
	int MaxPickupsToDespawnAtOnce; // 0x4a0 (0x4)
	float PickupTimeRangeToDespawnAtOnce; // 0x4a4 (0x4)
	enum EDadBroState DadBroCodeState; // 0x4a8 (0x4)
	float ServerTimeDadBroStarted; // 0x4ac (0x4)
	float TimeTakenToDefeatDadBro; // 0x4b0 (0x4)
	unsigned char unreflected_4b4[0xc]; // 0x4b4 (0xc) 
	class AFortPawn* ListeningPawn; // 0x4c0 (0x8)
	struct FGameplayTag InitialLandingCueTag; // 0x4c8 (0x4)
	unsigned char unreflected_4cc[0x4]; // 0x4cc (0x4) 
	struct FFortRespawnLogicData RespawnLogicData; // 0x4d0 (0x140)
	struct FScalableFloat UseLevelsForSizeModes; // 0x610 (0x28)
	struct FScalableFloat OverrideTimeOfDay; // 0x638 (0x28)
	struct FScalableFloat OverriddenTimeOfDay; // 0x660 (0x28)
	struct FScalableFloat OverriddenTimeOfDayRate; // 0x688 (0x28)
	struct FScalableFloat DelayGameOverOnPlayerWin; // 0x6b0 (0x28)
	struct FScalableFloat DelayGameOverOnDadBroWin; // 0x6d8 (0x28)
	struct FScalableFloat DadBroFirstSafeZoneIndex; // 0x700 (0x28)
	struct FScalableFloat HideSafeZoneCircles; // 0x728 (0x28)
	struct FScalableFloat DadBroDelayBeforeSpawning; // 0x750 (0x28)
	struct FScalableFloat DadBroApplySpawnImpulse; // 0x778 (0x28)
	struct FScalableFloat DadBroImpulseForce; // 0x7a0 (0x28)
	struct FScalableFloat DadBroImpulseRadius; // 0x7c8 (0x28)
	struct FScalableFloat DadBroVerticalImpulseOffset; // 0x7f0 (0x28)
	struct FScalableFloat OverridePickUpDespawnTime; // 0x818 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.StartNextSafeZonePhase (Underlying native function: StartNextSafeZonePhase 0x26daa0c)
	void StartNextSafeZonePhase(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.SpawnIdleEffects (Has no native function)
	void SpawnIdleEffects(struct FVector& Location); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.ResetBackToStartSafeZone (Underlying native function: ResetBackToStartSafeZone 0x84a9390)
	void ResetBackToStartSafeZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.OnRep_DadBroPawn (Underlying native function: OnRep_DadBroPawn 0x84a8d38)
	void OnRepDadBroPawn(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.OnRep_DadBroCodeState (Underlying native function: OnRep_DadBroCodeState 0x26daa0c)
	void OnRepDadBroCodeState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.ListenedPawnLanded (Underlying native function: ListenedPawnLanded 0x84a7458)
	void ListenedPawnLanded(struct FHitResult& Hit); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.HandleNewTimeOfDayManager (Underlying native function: HandleNewTimeOfDayManager 0x84a6c60)
	void HandleNewTimeOfDayManager(struct TScriptInterface<class IFortTimeOfDayManagerInterface>& NewTodManager); // (Final | Native | Private | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.HandleAISpawned (Underlying native function: HandleAISpawned 0x84a68a0)
	void HandleAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.HandleAIDied (Underlying native function: HandleAIDied 0x84a67dc)
	void HandleAIDied(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& DyingEnemy); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.GetTimeSinceDadBroStart (Underlying native function: GetTimeSinceDadBroStart 0x84a6724)
	float GetTimeSinceDadBroStart(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.GetDesiredDadBroRotation (Underlying native function: GetDesiredDadBroRotation 0x84a5a84)
	struct FRotator GetDesiredDadBroRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.DoDebugSphereForImpulse (Underlying native function: DoDebugSphereForImpulse 0x84a55dc)
	void DoDebugSphereForImpulse(); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.DespawnPickupsForAoE (Underlying native function: DespawnPickupsForAoE 0x84a54cc)
	void DespawnPickupsForAoE(float& InstantDespawnRange, float& MaxDespawnRange, float& DespawnTravelSpeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_DadBro.DespawnIdleEffects (Has no native function)
	void DespawnIdleEffects(); // (Event | Public | BlueprintEvent)
};

