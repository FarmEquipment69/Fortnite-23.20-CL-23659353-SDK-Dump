// Class /Script/Engine.StreamingSettings
// Size: 0x68
class UStreamingSettings : public UDeveloperSettings
{
	unsigned char AsyncLoadingThreadEnabled; // 0x30 (0x1)
	unsigned char WarnIfTimeLimitExceeded; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float TimeLimitExceededMultiplier; // 0x34 (0x4)
	float TimeLimitExceededMinTime; // 0x38 (0x4)
	int MinBulkDataSizeForAsyncLoading; // 0x3c (0x4)
	unsigned char UseBackgroundLevelStreaming; // 0x40 (0x1)
	unsigned char AsyncLoadingUseFullTimeLimit; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float AsyncLoadingTimeLimit; // 0x44 (0x4)
	float PriorityAsyncLoadingExtraTime; // 0x48 (0x4)
	float LevelStreamingActorsUpdateTimeLimit; // 0x4c (0x4)
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x50 (0x4)
	int LevelStreamingComponentsRegistrationGranularity; // 0x54 (0x4)
	int LevelStreamingAddPrimitiveGranularity; // 0x58 (0x4)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x5c (0x4)
	int LevelStreamingComponentsUnregistrationGranularity; // 0x60 (0x4)
	unsigned char FlushStreamingOnExit; // 0x64 (0x1)
	unsigned char EventDrivenLoaderEnabled; // 0x64 (0x1)
	unsigned char padding_65[0x3]; // 0x65 (0x3)
};

