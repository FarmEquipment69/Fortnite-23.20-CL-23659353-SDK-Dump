// ScriptStruct /Script/Lobby.LobbyPlayerStateInfoArray
// Size: 0x120
struct FLobbyPlayerStateInfoArray : FFastArraySerializer
{
	struct TArray<struct FLobbyPlayerStateActorInfo> Players; // 0x108 (0x10)
	class ALobbyBeaconState* ParentState; // 0x118 (0x8)
};

