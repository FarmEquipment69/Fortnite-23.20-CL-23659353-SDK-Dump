// ScriptStruct /Script/FortniteGame.PegasusJobMeta
// Size: 0x38
struct FPegasusJobMeta
{
	struct FString PGSVideoJobId; // 0x0 (0x10)
	struct TArray<struct FString> PGSAdditionalTags; // 0x10 (0x10)
	struct FString PGSRenderJobId; // 0x20 (0x10)
	int PGSRenderJobCreationEpoch; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

