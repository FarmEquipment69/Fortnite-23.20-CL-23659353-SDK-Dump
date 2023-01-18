// ScriptStruct /Script/FortniteGame.FortAvailableMissionAlerts
// Size: 0x28
struct FFortAvailableMissionAlerts
{
	struct FString TheaterId; // 0x0 (0x10)
	struct TArray<struct FFortAvailableMissionAlertData> AvailableMissionAlerts; // 0x10 (0x10)
	struct FDateTime* NextRefresh; // 0x20 (0x8)
};

