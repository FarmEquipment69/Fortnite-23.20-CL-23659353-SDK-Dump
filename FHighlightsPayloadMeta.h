// ScriptStruct /Script/FortniteGame.HighlightsPayloadMeta
// Size: 0x88
struct FHighlightsPayloadMeta
{
	struct FString UCRNReplayId; // 0x0 (0x10)
	struct FString UCRNBuildVersion; // 0x10 (0x10)
	struct FString UCRNMcpDeployment; // 0x20 (0x10)
	unsigned char UCRNPayloadVersion; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FDateTime* UCRNGenerationDate; // 0x38 (0x8)
	struct FString UCRNMcpBackendEnvironment; // 0x40 (0x10)
	struct FString UCRNMcpAppName; // 0x50 (0x10)
	struct FString UCRNMcpGameBackendName; // 0x60 (0x10)
	struct FString UCRNPlaylistName; // 0x70 (0x10)
	bool UCRNbIsCustomMatch; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

