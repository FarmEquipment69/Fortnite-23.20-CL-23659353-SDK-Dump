// Class /Script/FortniteGame.FortControllerComponent_Telemetry
// Size: 0x1d8
class UFortControllerComponent_Telemetry : public UFortControllerComponent
{
	struct TArray<struct FFortBotTeleportInfo> Teleports; // 0xa0 (0x10)
	int TotalTeleports; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct TArray<struct FFortBotNavLinkTimeoutInfo> NavLinkTimeouts; // 0xb8 (0x10)
	int TotalNavLinkTimeouts; // 0xc8 (0x4)
	int TotalAmmoCheats; // 0xcc (0x4)
	float SpawnTime; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct FPlayerFishingTelemetryData PlayerFishingTelemetryData; // 0xd8 (0x30)
	struct TArray<struct FFortItemsConsumedInfo> ItemsConsumed; // 0x108 (0x10)
	int TotalItemsConsumed; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	struct TArray<struct FFortRevivedInfo> Revived; // 0x120 (0x10)
	int TotalTimesRevived; // 0x130 (0x4)
	unsigned char unreflected_134[0xc]; // 0x134 (0xc) 
	bool bHasLandedFromSkyDiving; // 0x140 (0x1)
	unsigned char unreflected_141[0x7]; // 0x141 (0x7) 
	struct FVector SkyDiveJumpLocation; // 0x148 (0x18)
	struct FVector SkyDiveLandLocation; // 0x160 (0x18)
	int SkyDiveLandAsyncQueue; // 0x178 (0x4)
	unsigned char unreflected_17c[0x4]; // 0x17c (0x4) 
	struct FString SkyDiveLandPOITags; // 0x180 (0x10)
	struct FGameplayTagContainer IgnoreTelemetryCapForConsumedItems; // 0x190 (0x20)
	struct TArray<struct FPawnConvertedInfos> PawnsConverted; // 0x1b0 (0x10)
	struct FContentOnDemandTelemetryInfo ContentOnDemandRequestInfo; // 0x1c0 (0x18)
};

