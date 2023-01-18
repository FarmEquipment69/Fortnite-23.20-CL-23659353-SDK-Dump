// Class /Script/Engine.GameMode
// Size: 0x370
class AGameMode : public AGameModeBase
{
	struct FName MatchState; // 0x328 (0x4)
	unsigned char bDelayedStart; // 0x32c (0x1)
	unsigned char unreflected_32d[0x3]; // 0x32d (0x3) 
	int NumSpectators; // 0x330 (0x4)
	int NumPlayers; // 0x334 (0x4)
	int NumBots; // 0x338 (0x4)
	float MinRespawnDelay; // 0x33c (0x4)
	int NumTravellingPlayers; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	class UClass* EngineMessageClass; // 0x348 (0x8)
	struct TArray<class APlayerState*> InactivePlayerArray; // 0x350 (0x10)
	float InactivePlayerStateLifeSpan; // 0x360 (0x4)
	int MaxInactivePlayers; // 0x364 (0x4)
	bool bHandleDedicatedServerReplays; // 0x368 (0x1)
	unsigned char padding_369[0x7]; // 0x369 (0x7)

	/* Functions */

	// Function /Script/Engine.GameMode.StartMatch (Underlying native function: StartMatch 0x2fd2d04)
	void StartMatch(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameMode.Say (Underlying native function: Say 0x9da062c)
	void Say(struct FString& Msg); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameMode.RestartGame (Underlying native function: RestartGame 0x2444858)
	void RestartGame(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameMode.ReadyToStartMatch (Underlying native function: ReadyToStartMatch 0x209bf8c)
	bool ReadyToStartMatch(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/Engine.GameMode.ReadyToEndMatch (Underlying native function: ReadyToEndMatch 0x2345d00)
	bool ReadyToEndMatch(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/Engine.GameMode.K2_OnSetMatchState (Has no native function)
	void K2OnSetMatchState(struct FName& NewState); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.GameMode.IsMatchInProgress (Underlying native function: IsMatchInProgress 0x9d9da90)
	bool IsMatchInProgress(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameMode.GetMatchState (Underlying native function: GetMatchState 0x2d0112c)
	struct FName GetMatchState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameMode.EndMatch (Underlying native function: EndMatch 0x2d7a1e0)
	void EndMatch(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.GameMode.AbortMatch (Underlying native function: AbortMatch 0x9d96e3c)
	void AbortMatch(); // (Native | Public | BlueprintCallable)
};

