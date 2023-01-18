// Class /Script/Engine.GameStateBase
// Size: 0x2d8
class AGameStateBase : public AInfo
{
	class UClass* GameModeClass; // 0x288 (0x8)
	class AGameModeBase* AuthorityGameMode; // 0x290 (0x8)
	class UClass* SpectatorClass; // 0x298 (0x8)
	struct TArray<class APlayerState*> PlayerArray; // 0x2a0 (0x10)
	bool bReplicatedHasBegunPlay; // 0x2b0 (0x1)
	unsigned char unreflected_2b1[0x3]; // 0x2b1 (0x3) 
	float ReplicatedWorldTimeSeconds; // 0x2b4 (0x4)
	float ServerWorldTimeSecondsDelta; // 0x2b8 (0x4)
	float ServerWorldTimeSecondsUpdateFrequency; // 0x2bc (0x4)
	unsigned char padding_2c0[0x18]; // 0x2c0 (0x18)

	/* Functions */

	// Function /Script/Engine.GameStateBase.OnRep_SpectatorClass (Underlying native function: OnRep_SpectatorClass 0x10c4ce8)
	void OnRepSpectatorClass(); // (Native | Protected)

	// Function /Script/Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds (Underlying native function: OnRep_ReplicatedWorldTimeSeconds 0x2056f24)
	void OnRepReplicatedWorldTimeSeconds(); // (Native | Protected)

	// Function /Script/Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay (Underlying native function: OnRep_ReplicatedHasBegunPlay 0x2daad1c)
	void OnRepReplicatedHasBegunPlay(); // (Native | Protected)

	// Function /Script/Engine.GameStateBase.OnRep_GameModeClass (Underlying native function: OnRep_GameModeClass 0x10c4d00)
	void OnRepGameModeClass(); // (Native | Protected)

	// Function /Script/Engine.GameStateBase.HasMatchStarted (Underlying native function: HasMatchStarted 0x7a9d4dc)
	bool HasMatchStarted(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameStateBase.HasMatchEnded (Underlying native function: HasMatchEnded 0x720c624)
	bool HasMatchEnded(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameStateBase.HasBegunPlay (Underlying native function: HasBegunPlay 0x9d9d58c)
	bool HasBegunPlay(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameStateBase.GetServerWorldTimeSeconds (Underlying native function: GetServerWorldTimeSeconds 0x2b3f14c)
	float GetServerWorldTimeSeconds(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameStateBase.GetPlayerStartTime (Underlying native function: GetPlayerStartTime 0x9d9c868)
	float GetPlayerStartTime(class AController*& Controller); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.GameStateBase.GetPlayerRespawnDelay (Underlying native function: GetPlayerRespawnDelay 0x9d9c7d4)
	float GetPlayerRespawnDelay(class AController*& Controller); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

