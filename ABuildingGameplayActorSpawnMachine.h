// Class /Script/FortniteGame.BuildingGameplayActorSpawnMachine
// Size: 0xb98
class ABuildingGameplayActorSpawnMachine : public ABuildingGameplayActor
{
	class AFortPlayerStart* ResurrectLocation; // 0x9d8 (0x8)
	struct TArray<struct FUniqueNetIdRepl> PlayerIdsForResurrection; // 0x9e0 (0x10)
	struct TWeakObjectPtr<class AFortPlayerControllerAthena> InstigatorPC; // 0x9f0 (0x8)
	bool bIsLocallyBeingInteractedWith; // 0x9f8 (0x1)
	unsigned char ActiveTeam; // 0x9f9 (0x1)
	enum ESpawnMachineState SpawnMachineState; // 0x9fa (0x1)
	unsigned char unreflected_9fb[0x5]; // 0x9fb (0x5) 
	struct FScalableFloat ResurrectionHeightOffset; // 0xa00 (0x28)
	struct FScalableFloat ResurrectionStartDelay; // 0xa28 (0x28)
	struct FScalableFloat ResurrectionNextPlayerDelay; // 0xa50 (0x28)
	class USoundCue* InteractSoundCueLoop; // 0xa78 (0x8)
	struct FScalableFloat CooldownLengthRow; // 0xa80 (0x28)
	struct FText InteractNoCardsSubText; // 0xaa8 (0x18)
	struct FText InteractVanInUseSubText; // 0xac0 (0x18)
	struct FText InteractTeamStartedRebootSubText; // 0xad8 (0x18)
	struct FText InteractNotEnabledForPlayerSubText; // 0xaf0 (0x18)
	struct FText RebootResourceStatusFormatSubText; // 0xb08 (0x18)
	struct FLinearColor InteractSubTextFailedColor; // 0xb20 (0x10)
	struct FLinearColor InteractSubTextSuccessColor; // 0xb30 (0x10)
	enum ESpawnMachineSubTextState SpawnMachineSubTextState; // 0xb40 (0x1)
	unsigned char unreflected_b41[0x3]; // 0xb41 (0x3) 
	int HandleIntoGameState; // 0xb44 (0x4)
	struct FScalableFloat RebootResourceCost; // 0xb48 (0x28)
	class AFortPlayerControllerAthena* InitiatingPlayer; // 0xb70 (0x8)
	struct FMulticastInlineDelegate OnSpawnMachineLinkedToRebootComponent; // 0xb78 (0x10)
	unsigned char padding_b88[0x10]; // 0xb88 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.SetSpawnMachineState (Underlying native function: SetSpawnMachineState 0x85e106c)
	void SetSpawnMachineState(enum ESpawnMachineState& NewState); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.RebootPlayersInAir (Underlying native function: RebootPlayersInAir 0x85e0874)
	bool RebootPlayersInAir(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnSpawnMachineStateChanged (Underlying native function: OnSpawnMachineStateChanged 0x8288df4)
	void OnSpawnMachineStateChanged(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnResurrectionStarted (Underlying native function: OnResurrectionStarted 0x8288ddc)
	void OnResurrectionStarted(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnResurrectionCompleted (Underlying native function: OnResurrectionCompleted 0x8288e0c)
	void OnResurrectionCompleted(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnRep_SpawnMachineState (Underlying native function: OnRep_SpawnMachineState 0x85e0138)
	void OnRepSpawnMachineState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x5cda7f0)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnPlayerPawnResurrected (Underlying native function: OnPlayerPawnResurrected 0x85df834)
	void OnPlayerPawnResurrected(class AFortPlayerPawn*& PlayerPawn); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnInterruptLongUse (Underlying native function: OnInterruptLongUse 0x85bc5ec)
	void OnInterruptLongUse(class AFortPlayerControllerAthena*& AthenaPC); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.OnBeginLongUse (Underlying native function: OnBeginLongUse 0x85df8b8)
	void OnBeginLongUse(class AFortPlayerControllerAthena*& AthenaPC); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.GetSpawnMachineState (Underlying native function: GetSpawnMachineState 0x85dea6c)
	enum ESpawnMachineState GetSpawnMachineState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.GetCooldownLength (Underlying native function: GetCooldownLength 0x85de69c)
	float GetCooldownLength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnMachine.CanPlayerSquadInteract (Underlying native function: CanPlayerSquadInteract 0x85ddeec)
	bool CanPlayerSquadInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<TInteractionType>& InteractionType); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

