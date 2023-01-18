// ScriptStruct /Script/FortniteGame.FortAvailableTheaterMissions
// Size: 0x28
struct FFortAvailableTheaterMissions
{
	struct FString TheaterId; // 0x0 (0x10)
	struct TArray<struct FFortAvailableMissionData> AvailableMissions; // 0x10 (0x10)
	struct FDateTime* NextRefresh; // 0x20 (0x8)
};

