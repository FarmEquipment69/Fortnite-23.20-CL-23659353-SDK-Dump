// ScriptStruct /Script/LiveLinkInterface.LiveLinkBaseFrameData
// Size: 0xa0
struct FLiveLinkBaseFrameData
{
	struct FLiveLinkWorldTime WorldTime; // 0x0 (0x10)
	struct FLiveLinkMetaData MetaData; // 0x10 (0x60)
	struct TArray<float> PropertyValues; // 0x70 (0x10)
	unsigned char padding_80[0x20]; // 0x80 (0x20)
};

