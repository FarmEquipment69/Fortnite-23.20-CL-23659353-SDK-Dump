// Class /Script/Lobby.LobbyBeaconClient
// Size: 0x3a0
class ALobbyBeaconClient : public AOnlineBeaconClient
{
	class ALobbyBeaconState* LobbyState; // 0x318 (0x8)
	class ALobbyBeaconPlayerState* PlayerState; // 0x320 (0x8)
	unsigned char unreflected_328[0x1]; // 0x328 (0x1) 
	enum ELobbyBeaconJoinState LobbyJoinServerState; // 0x329 (0x1)
	unsigned char padding_32a[0x76]; // 0x32a (0x76)

	/* Functions */

	// Function /Script/Lobby.LobbyBeaconClient.ServerSetPartyOwner (Underlying native function: ServerSetPartyOwner 0x6e141a4)
	void ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/Lobby.LobbyBeaconClient.ServerNotifyJoiningServer (Underlying native function: ServerNotifyJoiningServer 0x6e14158)
	void ServerNotifyJoiningServer(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/Lobby.LobbyBeaconClient.ServerLoginPlayer (Underlying native function: ServerLoginPlayer 0x6e13e44)
	void ServerLoginPlayer(struct FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, struct FString& UrlString); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/Lobby.LobbyBeaconClient.ServerKickPlayer (Underlying native function: ServerKickPlayer 0x6e13d04)
	void ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, struct FText& Reason); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/Lobby.LobbyBeaconClient.ServerDisconnectFromLobby (Underlying native function: ServerDisconnectFromLobby 0x6e13cb8)
	void ServerDisconnectFromLobby(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/Lobby.LobbyBeaconClient.ServerCheat (Underlying native function: ServerCheat 0x6e13b3c)
	void ServerCheat(struct FString& Msg); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Lobby.LobbyBeaconClient.ClientWasKicked (Underlying native function: ClientWasKicked 0x6e139a8)
	void ClientWasKicked(struct FText& KickReason); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/Lobby.LobbyBeaconClient.ClientSetInviteFlags (Underlying native function: ClientSetInviteFlags 0x6e13920)
	void ClientSetInviteFlags(struct FJoinabilitySettings& Settings); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerLeft (Underlying native function: ClientPlayerLeft 0x6e13858)
	void ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerJoined (Underlying native function: ClientPlayerJoined 0x6e1374c)
	void ClientPlayerJoined(struct FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/Lobby.LobbyBeaconClient.ClientLoginComplete (Underlying native function: ClientLoginComplete 0x6e1364c)
	void ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool& bWasSuccessful); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/Lobby.LobbyBeaconClient.ClientJoinGame (Underlying native function: ClientJoinGame 0x14bfb28)
	void ClientJoinGame(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Lobby.LobbyBeaconClient.ClientAckJoiningServer (Underlying native function: ClientAckJoiningServer 0x6e13634)
	void ClientAckJoiningServer(); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

