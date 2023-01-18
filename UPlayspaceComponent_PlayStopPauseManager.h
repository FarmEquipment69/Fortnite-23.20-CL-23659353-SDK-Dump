// Class /Script/FortniteGame.PlayspaceComponent_PlayStopPauseManager
// Size: 0x170
class UPlayspaceComponent_PlayStopPauseManager : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x48]; // 0xf8 (0x48) 
	bool bCachedPlaying; // 0x140 (0x1)
	unsigned char unreflected_141[0x7]; // 0x141 (0x7) 
	struct TArray<struct TWeakObjectPtr<class AActor>> ServerPlayPauseStopActors; // 0x148 (0x10)
	struct FReplicatedPlayPauseStopActors ReplicatedPlayPauseStopActors; // 0x158 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_PlayStopPauseManager.OnRep_ReplicatedPlayPauseStopActors (Underlying native function: OnRep_ReplicatedPlayPauseStopActors 0x8dff534)
	void OnRepReplicatedPlayPauseStopActors(); // (Final | Native | Private)
};

