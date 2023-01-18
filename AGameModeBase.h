// Class /Script/Engine.GameModeBase
// Size: 0x328
class AGameModeBase : public AInfo
{
	struct FString OptionsString; // 0x288 (0x10)
	class UClass* GameSessionClass; // 0x298 (0x8)
	class UClass* GameStateClass; // 0x2a0 (0x8)
	class UClass* PlayerControllerClass; // 0x2a8 (0x8)
	class UClass* PlayerStateClass; // 0x2b0 (0x8)
	class UClass* HUDClass; // 0x2b8 (0x8)
	class UClass* DefaultPawnClass; // 0x2c0 (0x8)
	class UClass* SpectatorClass; // 0x2c8 (0x8)
	class UClass* ReplaySpectatorPlayerControllerClass; // 0x2d0 (0x8)
	class UClass* ServerStatReplicatorClass; // 0x2d8 (0x8)
	class AGameSession* GameSession; // 0x2e0 (0x8)
	class AGameStateBase* GameState; // 0x2e8 (0x8)
	class AServerStatReplicator* ServerStatReplicator; // 0x2f0 (0x8)
	struct FText DefaultPlayerName; // 0x2f8 (0x18)
	unsigned char bUseSeamlessTravel; // 0x310 (0x1)
	unsigned char bStartPlayersAsSpectators; // 0x310 (0x1)
	unsigned char bPauseable; // 0x310 (0x1)
	unsigned char padding_311[0x17]; // 0x311 (0x17)

	/* Functions */

	// Function /Script/Engine.GameModeBase.StartPlay (Underlying native function: StartPlay 0x2056f24)
	void StartPlay(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.SpawnDefaultPawnFor (Underlying native function: SpawnDefaultPawnFor 0x9da2a88)
	class APawn* SpawnDefaultPawnFor(class AController*& NewPlayer, class AActor*& StartSpot); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.SpawnDefaultPawnAtTransform (Underlying native function: SpawnDefaultPawnAtTransform 0x832fa0c)
	class APawn* SpawnDefaultPawnAtTransform(class AController*& NewPlayer, struct FTransform& SpawnTransform); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.ShouldReset (Underlying native function: ShouldReset 0x9da2588)
	bool ShouldReset(class AActor*& ActorToReset); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.ReturnToMainMenuHost (Underlying native function: ReturnToMainMenuHost 0x8b0cd08)
	void ReturnToMainMenuHost(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.RestartPlayerAtTransform (Underlying native function: RestartPlayerAtTransform 0x9da0200)
	void RestartPlayerAtTransform(class AController*& NewPlayer, struct FTransform& SpawnTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.RestartPlayerAtPlayerStart (Underlying native function: RestartPlayerAtPlayerStart 0x9da0138)
	void RestartPlayerAtPlayerStart(class AController*& NewPlayer, class AActor*& StartSpot); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.RestartPlayer (Underlying native function: RestartPlayer 0x9da00b4)
	void RestartPlayer(class AController*& NewPlayer); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.ResetLevel (Underlying native function: ResetLevel 0x2fd2cec)
	void ResetLevel(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.PlayerCanRestart (Underlying native function: PlayerCanRestart 0x29155d0)
	bool PlayerCanRestart(class APlayerController*& Player); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.MustSpectate (Underlying native function: MustSpectate 0x273b2e4)
	bool MustSpectate(class APlayerController*& NewPlayerController); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/Engine.GameModeBase.K2_PostLogin (Has no native function)
	void K2PostLogin(class APlayerController*& NewPlayer); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.K2_OnSwapPlayerControllers (Has no native function)
	void K2OnSwapPlayerControllers(class APlayerController*& OldPC, class APlayerController*& NewPC); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.K2_OnRestartPlayer (Has no native function)
	void K2OnRestartPlayer(class AController*& NewPlayer); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.K2_OnLogout (Has no native function)
	void K2OnLogout(class AController*& ExitingController); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.K2_OnChangeName (Has no native function)
	void K2OnChangeName(class AController*& Other, struct FString& NewName, bool& bNameChange); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.K2_FindPlayerStart (Underlying native function: K2_FindPlayerStart 0x9d9db9c)
	class AActor* K2FindPlayerStart(class AController*& Player, struct FString& IncomingName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameModeBase.InitStartSpot (Underlying native function: InitStartSpot 0x90408ec)
	void InitStartSpot(class AActor*& StartSpot, class AController*& NewPlayer); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.InitializeHUDForPlayer (Underlying native function: InitializeHUDForPlayer 0x29a4fb4)
	void InitializeHUDForPlayer(class APlayerController*& NewPlayer); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.HasMatchStarted (Underlying native function: HasMatchStarted 0x2f58484)
	bool HasMatchStarted(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameModeBase.HasMatchEnded (Underlying native function: HasMatchEnded 0x89e8c3c)
	bool HasMatchEnded(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameModeBase.HandleStartingNewPlayer (Underlying native function: HandleStartingNewPlayer 0x2a3b0a8)
	void HandleStartingNewPlayer(class APlayerController*& NewPlayer); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.GetNumSpectators (Underlying native function: GetNumSpectators 0x9d9c448)
	int GetNumSpectators(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.GetNumPlayers (Underlying native function: GetNumPlayers 0x285664c)
	int GetNumPlayers(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.GetDefaultPawnClassForController (Underlying native function: GetDefaultPawnClassForController 0x9d9b8e0)
	class UClass* GetDefaultPawnClassForController(class AController*& InController); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.FindPlayerStart (Underlying native function: FindPlayerStart 0x2956770)
	class AActor* FindPlayerStart(class AController*& Player, struct FString& IncomingName); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.ChoosePlayerStart (Underlying native function: ChoosePlayerStart 0x294d9a4)
	class AActor* ChoosePlayerStart(class AController*& Player); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameModeBase.ChangeName (Underlying native function: ChangeName 0x9d992c4)
	void ChangeName(class AController*& Controller, struct FString& NewName, bool& bNameChange); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameModeBase.CanSpectate (Underlying native function: CanSpectate 0x9d991e4)
	bool CanSpectate(class APlayerController*& Viewer, class APlayerState*& ViewTarget); // (Native | Event | Public | BlueprintEvent)
};

