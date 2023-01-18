// Class /Script/Lobby.LobbyBeaconPlayerState
// Size: 0x358
class ALobbyBeaconPlayerState : public AInfo
{
	struct FText DisplayName; // 0x288 (0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x2a0 (0x30)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x2d0 (0x30)
	bool bInLobby; // 0x300 (0x1)
	unsigned char unreflected_301[0x7]; // 0x301 (0x7) 
	class AOnlineBeaconClient* ClientActor; // 0x308 (0x8)
	unsigned char padding_310[0x48]; // 0x310 (0x48)

	/* Functions */

	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_UniqueId (Underlying native function: OnRep_UniqueId 0x6e13ad8)
	void OnRepUniqueId(); // (Final | Native | Protected)

	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner (Underlying native function: OnRep_PartyOwner 0x6e13aa0)
	void OnRepPartyOwner(); // (Final | Native | Protected)

	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_InLobby (Underlying native function: OnRep_InLobby 0x6e13a3c)
	void OnRepInLobby(); // (Final | Native | Protected)
};

