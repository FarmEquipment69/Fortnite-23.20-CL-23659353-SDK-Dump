// Class /Script/Lobby.LobbyBeaconState
// Size: 0x430
class ALobbyBeaconState : public AInfo
{
	int MaxPlayers; // 0x288 (0x4)
	unsigned char unreflected_28c[0x4]; // 0x28c (0x4) 
	class UClass* LobbyBeaconPlayerStateClass; // 0x290 (0x8)
	unsigned char unreflected_298[0x8]; // 0x298 (0x8) 
	bool bLobbyStarted; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	float WaitForPlayersTimeRemaining; // 0x2a4 (0x4)
	struct FLobbyPlayerStateInfoArray Players; // 0x2a8 (0x120)
	unsigned char padding_3c8[0x68]; // 0x3c8 (0x68)

	/* Functions */

	// Function /Script/Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining (Underlying native function: OnRep_WaitForPlayersTimeRemaining 0x6e13b10)
	void OnRepWaitForPlayersTimeRemaining(); // (Final | Native | Protected)

	// Function /Script/Lobby.LobbyBeaconState.OnRep_LobbyStarted (Underlying native function: OnRep_LobbyStarted 0x6e13a74)
	void OnRepLobbyStarted(); // (Final | Native | Protected)
};

