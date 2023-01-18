// Class /Script/FortniteGame.FortPerfReport
// Size: 0x58
class UFortPerfReport : public UObject
{
	struct TArray<struct FFortBadMatchTrigger> BadMatchTriggers; // 0x28 (0x10)
	struct TArray<struct FString> PhasesToInclude; // 0x38 (0x10)
	double ReportProbability; // 0x48 (0x8)
	bool bEnabled; // 0x50 (0x1)
	bool bEnableCsvProfile; // 0x51 (0x1)
	bool bUploadAllCsvs; // 0x52 (0x1)
	unsigned char padding_53[0x5]; // 0x53 (0x5)
};

