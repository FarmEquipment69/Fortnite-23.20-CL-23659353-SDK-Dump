// Class /Script/FortniteGame.FortLobbyBeaconClientRM
// Size: 0x3c8
class AFortLobbyBeaconClientRM : public AFortLobbyBeaconClient
{
	struct FMulticastInlineDelegate LocalReadiedUpStatusChanged; // 0x3a0 (0x10)
	struct FMulticastInlineDelegate OnUpdateLobbyPlayerPadTop; // 0x3b0 (0x10)
	unsigned char padding_3c0[0x8]; // 0x3c0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortLobbyBeaconClientRM.UpdateNewlyJoinedPlayer (Underlying native function: UpdateNewlyJoinedPlayer 0x8efe898)
	void UpdateNewlyJoinedPlayer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortLobbyBeaconClientRM.SetLocalReadyStatus (Underlying native function: SetLocalReadyStatus 0x8efe260)
	void SetLocalReadyStatus(bool& bIsReady); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLobbyBeaconClientRM.ServerUpdateReadyStatus (Underlying native function: ServerUpdateReadyStatus 0x8efde90)
	void ServerUpdateReadyStatus(bool& bIsReady); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClientRM.ServerUpdateNewlyJoinedPlayerInternal (Underlying native function: ServerUpdateNewlyJoinedPlayerInternal 0x8efde44)
	void ServerUpdateNewlyJoinedPlayerInternal(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClientRM.ClientBroadcastLobbyPlayerPadTop (Underlying native function: ClientBroadcastLobbyPlayerPadTop 0x8efa0d4)
	void ClientBroadcastLobbyPlayerPadTop(struct FUniqueNetIdRepl& ReadiedPlayer, bool& bIsReadiedUp); // (Net | NetReliable | Native | Event | Protected | NetClient | Const)
};

