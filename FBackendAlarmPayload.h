// ScriptStruct /Script/FortniteGame.BackendAlarmPayload
// Size: 0x230
struct FBackendAlarmPayload
{
	struct FString PGSMessage; // 0x0 (0x10)
	struct FString PGSErrorCode; // 0x10 (0x10)
	struct FBackendJobsPayload PGSReceivedJobPayload; // 0x20 (0x48)
	struct FString PGSRenderQueueUrl; // 0x68 (0x10)
	struct FString PGSASGName; // 0x78 (0x10)
	struct FBackendJobCompletePayload PGSJobProgress; // 0x88 (0x138)
	uint32_t PGSSQSRecievedCount; // 0x1c0 (0x4)
	bool PGSbIsVideoManagerFinished; // 0x1c4 (0x1)
	bool PGSbIsShuttingDown; // 0x1c5 (0x1)
	unsigned char unreflected_1c6[0x2]; // 0x1c6 (0x2) 
	int PGSWastedSeconds; // 0x1c8 (0x4)
	unsigned char unreflected_1cc[0x4]; // 0x1cc (0x4) 
	struct FDriverInstanceInfo PGSInstanceInfo; // 0x1d0 (0x60)
};

