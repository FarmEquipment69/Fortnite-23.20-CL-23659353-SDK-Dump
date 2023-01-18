// Class /Script/FortniteUI.AthenaRemotePlayerViewModel
// Size: 0x270
class UAthenaRemotePlayerViewModel : public UAthenaPlayerViewModel
{
	class AFortPlayerControllerSpectating* PlayerController; // 0x248 (0x8)
	struct TArray<class AFortPlayerStateAthena*> SquadList; // 0x250 (0x10)
	struct TArray<class AFortPlayerStateAthena*> NameIndicatedPlayers; // 0x260 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaRemotePlayerViewModel.OnFollowedPlayerChanged (Underlying native function: OnFollowedPlayerChanged 0x241330c)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewModel.HandleActorDestroyed (Underlying native function: HandleActorDestroyed 0x61a8090)
	void HandleActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)
};

