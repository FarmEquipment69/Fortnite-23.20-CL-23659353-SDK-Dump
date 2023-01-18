// ScriptStruct /Script/FortniteGame.McpBanInfo
// Size: 0x40
struct FMcpBanInfo
{
	struct TArray<enum EPlayerBanReasons> BanReasons; // 0x0 (0x10)
	struct FString ExploitProgramName; // 0x10 (0x10)
	struct FString AdditionalInfo; // 0x20 (0x10)
	struct FDateTime* BanStartTimeUtc; // 0x30 (0x8)
	float BanDurationDays; // 0x38 (0x4)
	enum EPlayerCompetitiveBanReasons CompetitiveBanReason; // 0x3c (0x1)
	bool bRequiresUserAck; // 0x3d (0x1)
	bool bBanHasStarted; // 0x3e (0x1)
	unsigned char padding_3f[0x1]; // 0x3f (0x1)
};

