// ScriptStruct /Script/FortniteGame.PartyMemberLobbyState
// Size: 0xc
struct FPartyMemberLobbyState
{
	enum EFortPartyMemberReadyCheckStatus InGameReadyCheckStatus; // 0x0 (0x1)
	enum EGameReadiness GameReadiness; // 0x1 (0x1)
	enum ECommonInputType ReadyInputType; // 0x2 (0x1)
	enum ECommonInputType CurrentInputType; // 0x3 (0x1)
	int HiddenMatchmakingDelayMax; // 0x4 (0x4)
	bool HasPreloadedAthena; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

