// Class /Script/FortniteUI.AthenaSpectatorUIContext
// Size: 0x1a0
class UAthenaSpectatorUIContext : public UBlueprintContextBase
{
	struct TMap<struct FUniqueNetIdRepl, class UAthenaRemotePlayerViewData*> PlayerDataMap; // 0x30 (0x50)
	struct TMap<unsigned char, class UAthenaRemoteSquadViewData*> SquadDataMap; // 0x80 (0x50)
	class AFortPlayerControllerSpectating* SpectatingPC; // 0xd0 (0x8)
	struct FUniqueNetIdRepl FollowedPlayerUID; // 0xd8 (0x30)
	struct FUniqueNetIdRepl ReplayRelevancyPlayerUID; // 0x108 (0x30)
	unsigned char padding_138[0x68]; // 0x138 (0x68)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnPlayerStateAdded (Underlying native function: OnPlayerStateAdded 0x1bb8e58)
	void OnPlayerStateAdded(class AFortPlayerStateAthena*& FPSA); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnPlayerControllerSet (Underlying native function: OnPlayerControllerSet 0xa6213f4)
	void OnPlayerControllerSet(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnPlayerBecameRelevant (Underlying native function: OnPlayerBecameRelevant 0x1bb853c)
	void OnPlayerBecameRelevant(class AFortPlayerState*& FPS); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnPlayerBecameIrrelevant (Underlying native function: OnPlayerBecameIrrelevant 0x1bb8400)
	void OnPlayerBecameIrrelevant(class AFortPlayerState*& FPS); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnPawnForReplayRelevancyChanged (Underlying native function: OnPawnForReplayRelevancyChanged 0xa621374)
	void OnPawnForReplayRelevancyChanged(class AFortPawn*& InPawnForReplayRelevancy); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnGameStateSet (Underlying native function: OnGameStateSet 0xa6212f4)
	void OnGameStateSet(class AFortGameState*& InGameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnFollowedPlayerChanged (Underlying native function: OnFollowedPlayerChanged 0x1bb8078)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.OnEventScoreTableChanged (Underlying native function: OnEventScoreTableChanged 0xa621274)
	void OnEventScoreTableChanged(int& InNewScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.GetPlayerData (Underlying native function: GetPlayerData 0xa61e97c)
	class UAthenaRemotePlayerViewData* GetPlayerData(struct FUniqueNetIdRepl& PlayerUID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.GetPipMode (Underlying native function: GetPipMode 0xa61e918)
	bool GetPipMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectatorUIContext.GetFollowedPlayerData (Underlying native function: GetFollowedPlayerData 0xa61dc7c)
	class UAthenaRemotePlayerViewData* GetFollowedPlayerData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

