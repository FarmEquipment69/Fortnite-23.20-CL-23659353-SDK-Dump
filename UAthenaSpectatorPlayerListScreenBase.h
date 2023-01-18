// Class /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase
// Size: 0x2a0
class UAthenaSpectatorPlayerListScreenBase : public UCommonUserWidget
{
	struct TArray<class UAthenaSpectatorPlayerListRowData*> RowDataArray; // 0x290 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.UpdateListUI (Has no native function)
	void UpdateListUI(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnPlayerDied (Underlying native function: OnPlayerDied 0xa88f3a4)
	void OnPlayerDied(class AFortPlayerState*& NewlyDeadPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnPlayerBecameRelevant (Underlying native function: OnPlayerBecameRelevant 0xa88f318)
	void OnPlayerBecameRelevant(class AFortPlayerState*& NewlyRelevantPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnPlayerBecameIrrelevant (Underlying native function: OnPlayerBecameIrrelevant 0xa88f298)
	void OnPlayerBecameIrrelevant(class AFortPlayerState*& NewlyIrrelevantPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.OnFollowedPlayerChanged (Underlying native function: OnFollowedPlayerChanged 0xa88f0d8)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerListScreenBase.ClearPlayers (Underlying native function: ClearPlayers 0xa88cef8)
	void ClearPlayers(); // (Final | Native | Private)
};

