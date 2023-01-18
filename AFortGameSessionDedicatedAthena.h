// Class /Script/FortniteGame.FortGameSessionDedicatedAthena
// Size: 0xaf8
class AFortGameSessionDedicatedAthena : public AFortGameSessionDedicated
{
	unsigned char unreflected_5f8[0x210]; // 0x5f8 (0x210) 
	bool bDownloadEventsAfterHotfixCheck; // 0x808 (0x1)
	unsigned char unreflected_809[0x3]; // 0x809 (0x3) 
	float ReconnectToMMSDelay; // 0x80c (0x4)
	float MaxReconnectToMMSDelay; // 0x810 (0x4)
	unsigned char unreflected_814[0xc]; // 0x814 (0xc) 
	struct FString MMSVersionCompatability; // 0x820 (0x10)
	struct FString MMSTicketURLServer; // 0x830 (0x10)
	float MMSPingInterval; // 0x840 (0x4)
	int QueryUserMode; // 0x844 (0x4)
	bool bAutoConnectToMMS; // 0x848 (0x1)
	unsigned char unreflected_849[0x37]; // 0x849 (0x37) 
	bool bEnableMMSBackfill; // 0x880 (0x1)
	bool bDisableBackfillDuringGracefulShutdown; // 0x881 (0x1)
	unsigned char unreflected_882[0x6]; // 0x882 (0x6) 
	struct TArray<struct FName> DisabledPlaylistsDuringGracefulShutdown; // 0x888 (0x10)
	unsigned char unreflected_898[0x4]; // 0x898 (0x4) 
	float PostBackfillAssignmentUpdateDelay; // 0x89c (0x4)
	unsigned char unreflected_8a0[0x168]; // 0x8a0 (0x168) 
	bool bEnableWaitingForMatchAssignmentTimeout; // 0xa08 (0x1)
	unsigned char unreflected_a09[0x3]; // 0xa09 (0x3) 
	float WaitingForMatchAssignmentRestartDelay; // 0xa0c (0x4)
	unsigned char unreflected_a10[0x20]; // 0xa10 (0x20) 
	float FullMeshRetryDelay; // 0xa30 (0x4)
	float MeshNetworkGCTimerRate; // 0xa34 (0x4)
	float MeshNetworkServerPerfTimerRate; // 0xa38 (0x4)
	unsigned char padding_a3c[0xbc]; // 0xa3c (0xbc)

	/* Functions */

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandlePlaylistLoaded (Underlying native function: HandlePlaylistLoaded 0x8bc25f0)
	void HandlePlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandlePlaylistInitialized (Underlying native function: HandlePlaylistInitialized 0x8bc2570)
	void HandlePlaylistInitialized(class AFortGameModeAthena*& GMA); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandleExitingSpawningStartup (Underlying native function: HandleExitingSpawningStartup 0x8bc255c)
	void HandleExitingSpawningStartup(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandleAllPlaylistLevelsVisible (Underlying native function: HandleAllPlaylistLevelsVisible 0x8bc2548)
	void HandleAllPlaylistLevelsVisible(); // (Final | Native | Protected)
};

