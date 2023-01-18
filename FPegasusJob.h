// ScriptStruct /Script/FortniteGame.PegasusJob
// Size: 0x30
struct FPegasusJob
{
	struct FString ReplayId; // 0x0 (0x10)
	bool bExportShotsIndividually; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FClipInfo> ClipsToExport; // 0x18 (0x10)
	bool bGenerateTimelineEventData; // 0x28 (0x1)
	bool bJobAllowsFailure; // 0x29 (0x1)
	unsigned char padding_2a[0x6]; // 0x2a (0x6)
};

