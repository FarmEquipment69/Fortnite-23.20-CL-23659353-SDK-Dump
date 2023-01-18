// Class /Script/FortniteGame.FortLocalPlayer
// Size: 0x610
class UFortLocalPlayer : public ULocalPlayer
{
	unsigned char unreflected_298[0x30]; // 0x298 (0x30) 
	class UFortOnlineAccount* FortOnlineAccount; // 0x2c8 (0x8)
	unsigned char unreflected_2d0[0x28]; // 0x2d0 (0x28) 
	struct FFortRewardReport CachedRewardReport; // 0x2f8 (0x70)
	struct TArray<struct FFortPlayerScoreReport> CachedScoreReports; // 0x368 (0x10)
	class UFortClientSettingsRecord* ClientSettingsRecord; // 0x378 (0x8)
	class UFortContentControlsManager* ContentControlsManager; // 0x380 (0x8)
	class UFortSupervisedSettingsManager* SupervisedSettingsManager; // 0x388 (0x8)
	bool bUpdatePartyPrivacyIfLeader; // 0x390 (0x1)
	unsigned char unreflected_391[0x19]; // 0x391 (0x19) 
	bool bControllerAttached; // 0x3aa (0x1)
	unsigned char unreflected_3ab[0x165]; // 0x3ab (0x165) 
	struct FUniqueNetIdRepl PlatformUID; // 0x510 (0x30)
	struct FPlayerReportingInfoContainer PlayerReportingInfoContainer; // 0x540 (0x70)
	class UFortPoiTracker* PoiTracker; // 0x5b0 (0x8)
	unsigned char padding_5b8[0x58]; // 0x5b8 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortLocalPlayer.GetSupervisedSettingsManager (Underlying native function: GetSupervisedSettingsManager 0x8d91384)
	class UFortSupervisedSettingsManager* GetSupervisedSettingsManager(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortLocalPlayer.GetLocalSettings (Underlying native function: GetLocalSettings 0x23e443c)
	class UFortGameUserSettings* GetLocalSettings(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortLocalPlayer.GetContentControlsManagerEvenIfUninitialized (Underlying native function: GetContentControlsManagerEvenIfUninitialized 0x8d90ab4)
	class UFortContentControlsManager* GetContentControlsManagerEvenIfUninitialized(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortLocalPlayer.GetContentControlsManager (Underlying native function: GetContentControlsManager 0x8d90a90)
	class UFortContentControlsManager* GetContentControlsManager(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortLocalPlayer.GetClientSettings (Underlying native function: GetClientSettings 0x23c5ce8)
	class UFortClientSettingsRecord* GetClientSettings(); // (Final | 0x00000002 | Native | Public | Const)
};

