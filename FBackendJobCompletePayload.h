// ScriptStruct /Script/FortniteGame.BackendJobCompletePayload
// Size: 0x138
struct FBackendJobCompletePayload
{
	struct FString PGSRenderJobMessageHandle; // 0x0 (0x10)
	struct FString PGSRenderQueueUrl; // 0x10 (0x10)
	struct FString PGSASGName; // 0x20 (0x10)
	struct TArray<struct FBackendExportedClipInfo> PGSExportedVideos; // 0x30 (0x10)
	struct TArray<struct FBackendExportedTimelineEvents> PGSExportedTimelines; // 0x40 (0x10)
	struct FPegasusJobMeta PGSPayloadMeta; // 0x50 (0x38)
	struct TMap<enum EVideoManagerStates, float> PGSVideoManagerStateDurations; // 0x88 (0x50)
	struct FDriverInstanceInfo PGSInstanceInfo; // 0xd8 (0x60)
};

