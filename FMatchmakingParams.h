// ScriptStruct /Script/FortniteGame.MatchmakingParams
// Size: 0xb8
struct FMatchmakingParams
{
	int ControllerId; // 0x0 (0x4)
	int PartySize; // 0x4 (0x4)
	struct FString DatacenterId; // 0x8 (0x10)
	int PlaylistId; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	int MatchmakingLevel; // 0x20 (0x4)
	int MissionDifficultyMin; // 0x24 (0x4)
	int MissionDifficultyMax; // 0x28 (0x4)
	enum EStormShieldDefense StormShieldDefenseType; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FString TheaterId; // 0x30 (0x10)
	struct FString ZoneInstanceId; // 0x40 (0x10)
	struct FString WUID; // 0x50 (0x10)
	struct FUniqueNetIdRepl WorldOwnerId; // 0x60 (0x30)
	struct FString SessionId; // 0x90 (0x10)
	enum EMatchmakingStartLocation StartWith; // 0xa0 (0x1)
	enum EMatchmakingFlags Flags; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x2]; // 0xa2 (0x2) 
	float ChanceToHostOverride; // 0xa4 (0x4)
	float ChanceToHostIncrease; // 0xa8 (0x4)
	int NumAttempts; // 0xac (0x4)
	int MaxSearchResultsOverride; // 0xb0 (0x4)
	int MaxProcessedSearchResults; // 0xb4 (0x4)
};

