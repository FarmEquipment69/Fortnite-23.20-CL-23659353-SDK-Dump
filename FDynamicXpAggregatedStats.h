// ScriptStruct /Script/FortniteGame.DynamicXpAggregatedStats
// Size: 0x78
struct FDynamicXpAggregatedStats
{
	struct FString UniqueGameId; // 0x0 (0x10)
	int UniqueGameVersion; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FDynamicXpCalibrationResult CalibrationResult; // 0x18 (0x28)
	struct TArray<struct FAccoladeTriggerPerMinute> LilAccoladeTPM; // 0x40 (0x10)
	struct TArray<struct FDynamicXpAggregatedAccoladeStats> Accolades; // 0x50 (0x10)
	double MeanSessionLengthMinutes; // 0x60 (0x8)
	struct TArray<struct FAccoladePublishData> PublishData; // 0x68 (0x10)
};

