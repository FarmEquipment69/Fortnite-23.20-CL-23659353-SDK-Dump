// ScriptStruct /Script/FortniteGame.AthenaServerStartAircraftStats
// Size: 0x40
struct FAthenaServerStartAircraftStats
{
	float WarmupDurationSec; // 0x0 (0x4)
	int NumPlayersMissing; // 0x4 (0x4)
	int NumPlayersQuitting; // 0x8 (0x4)
	bool bStartedEarly; // 0xc (0x1)
	enum EAircraftLaunchReason StartReason; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	int ExpectedPlayers; // 0x10 (0x4)
	int PlayersReadied; // 0x14 (0x4)
	int PlayersLoadingScreenDropped; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagContainer GoldenPoisTags; // 0x20 (0x20)
};

