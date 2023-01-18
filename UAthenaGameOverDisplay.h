// Class /Script/FortniteUI.AthenaGameOverDisplay
// Size: 0x5f8
class UAthenaGameOverDisplay : public UFortActivatablePanel
{
	class UClass* MatchStatsClass; // 0x518 (0x8)
	unsigned char unreflected_520[0x20]; // 0x520 (0x20) 
	struct FDataTableRowHandle InputReturnToLobby; // 0x540 (0x10)
	struct FDataTableRowHandle InputNextTeammate; // 0x550 (0x10)
	struct FDataTableRowHandle InputPreviousTeammate; // 0x560 (0x10)
	struct FDataTableRowHandle InputNextPlayer; // 0x570 (0x10)
	struct FDataTableRowHandle InputPreviousPlayer; // 0x580 (0x10)
	struct FDataTableRowHandle InputReportPlayer; // 0x590 (0x10)
	struct FDataTableRowHandle InputToggleBattleMap; // 0x5a0 (0x10)
	struct FDataTableRowHandle InputForceStartPostGame; // 0x5b0 (0x10)
	class UEliminatedOverlay* EliminatedOverlay; // 0x5c0 (0x8)
	class UCommonButtonLegacy* ButtonHighlights; // 0x5c8 (0x8)
	struct FScalableFloat bAllowSpectateAllPlayers; // 0x5d0 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnWinningScoreDetermined (Underlying native function: OnWinningScoreDetermined 0xa50b3b4)
	void OnWinningScoreDetermined(int& Score); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnWinnerAnnounced (Underlying native function: OnWinnerAnnounced 0xa50b254)
	void OnWinnerAnnounced(struct FString& Winner); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnViewTargetChanged (Underlying native function: OnViewTargetChanged 0xa50b238)
	void OnViewTargetChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnToggleFullscreenMap (Underlying native function: OnToggleFullscreenMap 0xa50b01c)
	void OnToggleFullscreenMap(bool& bFullscreenMapVisible); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnSpectatorStreamingChanged (Underlying native function: OnSpectatorStreamingChanged 0xa50b01c)
	void OnSpectatorStreamingChanged(bool& bSpectatorStreaming); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnSpecialActorListChanged (Underlying native function: OnSpecialActorListChanged 0xa50b188)
	void OnSpecialActorListChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnRessurectingNowDelegate (Underlying native function: OnRessurectingNowDelegate 0xa50b01c)
	void OnRessurectingNowDelegate(bool& bRessurectingNow); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPlayerOrTeamWon (Underlying native function: OnPlayerOrTeamWon 0xa50b008)
	void OnPlayerOrTeamWon(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPlayerLost (Underlying native function: OnPlayerLost 0xa50af74)
	void OnPlayerLost(enum EEndOfMatchReason& LostReason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPlaceChanged (Underlying native function: OnPlaceChanged 0xa50ae84)
	void OnPlaceChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnPawnDied (Underlying native function: OnPawnDied 0xa50ad28)
	void OnPawnDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.OnKillFeedUpdated (Underlying native function: OnKillFeedUpdated 0xa50ad14)
	void OnKillFeedUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.InGameMatchmakingComplete (Underlying native function: InGameMatchmakingComplete 0xa50a5b4)
	void InGameMatchmakingComplete(bool& bSuccess); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.HighlightCountChanged (Underlying native function: HighlightCountChanged 0xa50a534)
	void HighlightCountChanged(int& HighlightCount); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGameOverDisplay.HandleToggledBattleMapLive (Underlying native function: HandleToggledBattleMapLive 0xa50a49c)
	void HandleToggledBattleMapLive(class ABattleMapPawnLive*& NewSpectatorPawn); // (Final | Native | Protected)
};

