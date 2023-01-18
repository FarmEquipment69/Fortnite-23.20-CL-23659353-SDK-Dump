// Class /Script/OnlineSubsystemEOS.EOSSettings
// Size: 0xa0
class UEOSSettings : public URuntimeOptionsBase
{
	struct FString CacheDir; // 0x38 (0x10)
	struct FString DefaultArtifactName; // 0x48 (0x10)
	int TickBudgetInMilliseconds; // 0x58 (0x4)
	bool bEnableOverlay; // 0x5c (0x1)
	bool bEnableSocialOverlay; // 0x5d (0x1)
	bool bEnableEditorOverlay; // 0x5e (0x1)
	bool bShouldEnforceBeingLaunchedByEGS; // 0x5f (0x1)
	struct TArray<struct FString> TitleStorageTags; // 0x60 (0x10)
	int TitleStorageReadChunkLength; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct TArray<struct FArtifactSettings> Artifacts; // 0x78 (0x10)
	struct TArray<struct FString> AuthScopeFlags; // 0x88 (0x10)
	bool bUseEAS; // 0x98 (0x1)
	bool bUseEOSConnect; // 0x99 (0x1)
	bool bMirrorStatsToEOS; // 0x9a (0x1)
	bool bMirrorAchievementsToEOS; // 0x9b (0x1)
	bool bUseEOSSessions; // 0x9c (0x1)
	bool bMirrorPresenceToEAS; // 0x9d (0x1)
	unsigned char padding_9e[0x2]; // 0x9e (0x2)
};

