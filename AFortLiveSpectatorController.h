// Class /Script/FortniteGame.FortLiveSpectatorController
// Size: 0x3b40
class AFortLiveSpectatorController : public AFortPlayerControllerSpectating
{
	class AFortPlayerState* FollowedPlayerState; // 0x3b10 (0x8)
	struct TArray<class AFortBroadcastRemoteClientInfo*> RemoteClientInfos; // 0x3b18 (0x10)
	unsigned char padding_3b28[0x18]; // 0x3b28 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortLiveSpectatorController.ServerSetFollowedPlayer (Underlying native function: ServerSetFollowedPlayer 0x8d96e00)
	void ServerSetFollowedPlayer(class AFortPlayerState*& NewPlayerToFollow, struct FVector& SpectatorLocation, bool& bValidPos); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortLiveSpectatorController.HandlePlayerAdded (Underlying native function: HandlePlayerAdded 0x8d9161c)
	void HandlePlayerAdded(class APlayerController*& AddedPlayer); // (Final | Native | Protected)
};

