// ScriptStruct /Script/FortniteGame.FortReplayMetadata
// Size: 0x380
struct FFortReplayMetadata
{
	struct FString ReplayName; // 0x0 (0x10)
	struct FString PlaylistName; // 0x10 (0x10)
	float ReplayLength; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FUniqueNetIdRepl RecordingPlayer; // 0x28 (0x30)
	struct TMap<float, struct FUniqueNetIdRepl> RelevancyList; // 0x58 (0x50)
	struct TMap<struct FUniqueNetIdRepl, struct FString> PlayerIds; // 0xa8 (0x50)
	struct TMap<struct FString, struct FString> PlayerMatchReportToName; // 0xf8 (0x50)
	struct TMap<struct FUniqueNetIdRepl, struct FString> PlayerIdToMatchReport; // 0x148 (0x50)
	struct TMap<struct FUniqueNetIdRepl, int> PlayerIdToWorldIdentifier; // 0x198 (0x50)
	struct TArray<struct FReplayKillSummary> KillSummaries; // 0x1e8 (0x10)
	struct TMap<struct FUniqueNetIdRepl, int> PlayerFinalRankings; // 0x1f8 (0x50)
	struct FGameStateInformation GameInformation; // 0x248 (0x128)
	struct TArray<struct FAthenaTravelLogEntry> WorldLogEntries; // 0x370 (0x10)
};

