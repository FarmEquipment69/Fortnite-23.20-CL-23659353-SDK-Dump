// ScriptStruct /Script/FortniteGame.FortTheaterMapData
// Size: 0x6e0
struct FFortTheaterMapData
{
	struct FText DisplayName; // 0x0 (0x18)
	struct FString UniqueId; // 0x18 (0x10)
	int TheaterSlot; // 0x28 (0x4)
	bool bIsTestTheater; // 0x2c (0x1)
	bool bHideLikeTestTheater; // 0x2d (0x1)
	unsigned char unreflected_2e[0x2]; // 0x2e (0x2) 
	struct FString RequiredEventFlag; // 0x30 (0x10)
	struct FName MissionRewardNamedWeightsRowName; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FText Description; // 0x48 (0x18)
	struct FText ThreatDisplayName; // 0x60 (0x18)
	unsigned char unreflected_78[0x8]; // 0x78 (0x8) 
	struct FFortTheaterRuntimeData RuntimeInfo; // 0x80 (0x640)
	struct TArray<struct FFortTheaterMapTileData> Tiles; // 0x6c0 (0x10)
	struct TArray<struct FFortTheaterMapRegionData> Regions; // 0x6d0 (0x10)
};

