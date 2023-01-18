// ScriptStruct /Script/FortniteGame.FortOutpostCoreInfo
// Size: 0x28
struct FFortOutpostCoreInfo
{
	struct TArray<struct FFortPlacedBuilding> PlacedBuildings; // 0x0 (0x10)
	struct TArray<struct FString> AccountsWithEditPermission; // 0x10 (0x10)
	uint32_t HighestEnduranceWaveReached; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

