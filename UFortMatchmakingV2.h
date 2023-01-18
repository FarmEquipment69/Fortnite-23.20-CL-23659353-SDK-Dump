// Class /Script/FortniteGame.FortMatchmakingV2
// Size: 0xf50
class UFortMatchmakingV2 : public UObject
{
	struct FString MMSVersionCompatability; // 0x28 (0x10)
	struct FString MMSTicketURLClient; // 0x38 (0x10)
	float MMSPingInterval; // 0x48 (0x4)
	bool bCustomKeyEnabled; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	float UpdateCheckInterval; // 0x50 (0x4)
	bool bEnablePrivateMatchUpdateCheck; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	float MatchmakingRetryInterval; // 0x58 (0x4)
	uint32_t MaxMatchmakingRetries; // 0x5c (0x4)
	struct TArray<struct FMMSAltDomainRecord> AltDomainRecords; // 0x60 (0x10)
	unsigned char unreflected_70[0x10]; // 0x70 (0x10) 
	float LogSubmitChance; // 0x80 (0x4)
	bool bSubmitSecondaryLogs; // 0x84 (0x1)
	unsigned char unreflected_85[0x3]; // 0x85 (0x3) 
	int LogTailKb; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct TArray<struct FString> DisabledMatchmakingRegions; // 0x90 (0x10)
	struct TArray<struct FName> WhitelistedPlaylistsForActiveCheck; // 0xa0 (0x10)
	bool bUseHotfixVersionForPlaylistRevision; // 0xb0 (0x1)
	unsigned char padding_b1[0xe9f]; // 0xb1 (0xe9f)

	/* Functions */

	// Function /Script/FortniteGame.FortMatchmakingV2.GetMatchmakingAttemptThrottleTime (Underlying native function: GetMatchmakingAttemptThrottleTime 0x8c1d374)
	static float GetMatchmakingAttemptThrottleTime(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

