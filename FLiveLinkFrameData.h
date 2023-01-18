// ScriptStruct /Script/LiveLinkInterface.LiveLinkFrameData
// Size: 0x90
struct FLiveLinkFrameData
{
	struct TArray<struct FTransform> Transforms; // 0x0 (0x10)
	struct TArray<struct FLiveLinkCurveElement*> CurveElements; // 0x10 (0x10)
	struct FLiveLinkWorldTime WorldTime; // 0x20 (0x10)
	struct FLiveLinkMetaData MetaData; // 0x30 (0x60)
};

