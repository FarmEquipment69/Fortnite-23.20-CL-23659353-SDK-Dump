// ScriptStruct /Script/FortniteGame.FortPartyCampaignInfo
// Size: 0x18
struct FFortPartyCampaignInfo
{
	bool LobbyConnectionStarted; // 0x0 (0x1)
	enum EMatchmakingCompleteResult MatchmakingResult; // 0x1 (0x1)
	struct TEnumAsByte<EMatchmakingState> MatchmakingState; // 0x2 (0x1)
	bool SessionIsCriticalMission; // 0x3 (0x1)
	int ZoneTileIndex; // 0x4 (0x4)
	struct FString TheaterId; // 0x8 (0x10)
};

