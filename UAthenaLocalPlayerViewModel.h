// Class /Script/FortniteUI.AthenaLocalPlayerViewModel
// Size: 0x268
class UAthenaLocalPlayerViewModel : public UAthenaPlayerViewModel
{
	struct TWeakObjectPtr<class AFortPlayerControllerAthena> PlayerController; // 0x248 (0x8)
	class UAthenaIndicatorPlayersCache* IndicatorCache; // 0x250 (0x8)
	struct TArray<struct TWeakObjectPtr<class AFortPlayerPawn>> ListeningForPawnStates; // 0x258 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLocalPlayerViewModel.HandleViewTargetPlayerStateReplicated (Underlying native function: HandleViewTargetPlayerStateReplicated 0xa5d1284)
	void HandleViewTargetPlayerStateReplicated(class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaLocalPlayerViewModel.HandleLocalPlayerChangedTeams (Underlying native function: HandleLocalPlayerChangedTeams 0xa5d0f78)
	void HandleLocalPlayerChangedTeams(); // (Final | Native | Private)
};

