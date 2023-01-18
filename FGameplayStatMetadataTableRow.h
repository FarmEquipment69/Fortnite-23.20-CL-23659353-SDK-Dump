// ScriptStruct /Script/EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
// Size: 0x50
struct FGameplayStatMetadataTableRow : FTableRowBase
{
	struct FString BackendName; // 0x8 (0x10)
	struct FText DisplayName; // 0x18 (0x18)
	struct TArray<enum EEpicLeaderboardTimeWindow> Windows; // 0x30 (0x10)
	enum EEpicLeaderboardUpdateFunction Metric; // 0x40 (0x1)
	enum EEpicLeaderboardDataType DataType; // 0x41 (0x1)
	bool bPublish; // 0x42 (0x1)
	unsigned char unreflected_43[0x1]; // 0x43 (0x1) 
	int WeeklyRefreshInterval; // 0x44 (0x4)
	bool bExportToBackEnd; // 0x48 (0x1)
	bool bShowInFrontEnd; // 0x49 (0x1)
	unsigned char padding_4a[0x6]; // 0x4a (0x6)
};

