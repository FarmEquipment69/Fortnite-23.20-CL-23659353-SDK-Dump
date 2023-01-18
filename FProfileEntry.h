// ScriptStruct /Script/McpProfileSys.ProfileEntry
// Size: 0x20
struct FProfileEntry
{
	struct FString ProfileId; // 0x0 (0x10)
	class UMcpProfile* ProfileObject; // 0x10 (0x8)
	bool bWaitingForRefreshAllProfilesResponse; // 0x18 (0x1)
	bool bForwardUpdatesToClient; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

