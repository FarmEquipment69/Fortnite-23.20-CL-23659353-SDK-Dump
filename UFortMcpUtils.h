// Class /Script/FortniteGame.FortMcpUtils
// Size: 0x2b8
class UFortMcpUtils : public UObject
{
	unsigned char unreflected_28[0x30]; // 0x28 (0x30) 
	struct FString CreateXboxDedicatedServerSessionUrl; // 0x58 (0x10)
	struct FString UnredeemedCodesUrl; // 0x68 (0x10)
	struct FString QueryUserXuidUrl; // 0x78 (0x10)
	struct FString InMatchTimePlayedUrl; // 0x88 (0x10)
	struct FString ProcessPendingRewardsUrl; // 0x98 (0x10)
	bool bShouldSendTimeTracking; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct FString VoiceLoginUrl; // 0xb0 (0x10)
	struct FString VoiceJoinUrl; // 0xc0 (0x10)
	struct FString PrivacySettingsUrl; // 0xd0 (0x10)
	struct FString ReplacePlayerTokensUrl; // 0xe0 (0x10)
	struct FString AllowHomebaseCharactersUrl; // 0xf0 (0x10)
	struct FString InventorySnapshotUrl; // 0x100 (0x10)
	struct FString QuerySwitchEntitlementsUrl; // 0x110 (0x10)
	struct FString ReportPlayerToxicityUrl; // 0x120 (0x10)
	struct FString EventCalendardTestUrl; // 0x130 (0x10)
	struct FString CreativeHistoryBaseUrl; // 0x140 (0x10)
	struct FString QueryCreativeDiscoverySurfacePanelsUrl; // 0x150 (0x10)
	struct FString QueryCreativeDiscoverySurfacePanelPageUrl; // 0x160 (0x10)
	struct FString ResolveWellKnownIslandMetricsUrl; // 0x170 (0x10)
	bool bShouldWriteToDiscoveryService; // 0x180 (0x1)
	bool bShouldWriteDiscoveryToMCP; // 0x181 (0x1)
	bool bShouldReadFromDiscoveryService; // 0x182 (0x1)
	bool bSubmitLogsPreferDeviceId; // 0x183 (0x1)
	unsigned char unreflected_184[0x12c]; // 0x184 (0x12c) 
	int DefaultLogTailLengthKb; // 0x2b0 (0x4)
	unsigned char padding_2b4[0x4]; // 0x2b4 (0x4)
};

