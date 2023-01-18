// ScriptStruct /Script/FortniteGame.FortUserCloudRequestQueue
// Size: 0x28
struct FFortUserCloudRequestQueue
{
	unsigned char bFreezeIncomingRequests; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FFortUserCloudRequestHandle* FirstFrozenHandle; // 0x8 (0x8)
	struct FTimerHandle* ProcessingTimerHandle; // 0x10 (0x8)
	struct TArray<struct FFortUserCloudRequest> RequestQueue; // 0x18 (0x10)
};

