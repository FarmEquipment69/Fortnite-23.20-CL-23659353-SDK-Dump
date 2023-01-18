// ScriptStruct /Script/FortniteGame.PlayerToxicityReportRequest
// Size: 0x100
struct FPlayerToxicityReportRequest
{
	struct FString Reason; // 0x0 (0x10)
	struct FString Details; // 0x10 (0x10)
	struct FString ReporterGameSessionId; // 0x20 (0x10)
	struct FString ReportOrigin; // 0x30 (0x10)
	struct FString ProfileOrigin; // 0x40 (0x10)
	struct FString VoiceChatChannelStatus; // 0x50 (0x10)
	struct FString GameSessionId; // 0x60 (0x10)
	struct FString Token; // 0x70 (0x10)
	struct FString CreativeIslandSharingLink; // 0x80 (0x10)
	struct FString CreativeIslandGuid; // 0x90 (0x10)
	struct FString CreativeIslandOwnerAccountId; // 0xa0 (0x10)
	struct FString SubGameName; // 0xb0 (0x10)
	struct FString PlaylistName; // 0xc0 (0x10)
	bool bIsCompetitiveEvent; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	struct FString ReporterPlatform; // 0xd8 (0x10)
	struct FString OffenderPlatform; // 0xe8 (0x10)
	bool bBlockUserRequested; // 0xf8 (0x1)
	bool bUserMarkedAsKnown; // 0xf9 (0x1)
	unsigned char padding_fa[0x6]; // 0xfa (0x6)
};

