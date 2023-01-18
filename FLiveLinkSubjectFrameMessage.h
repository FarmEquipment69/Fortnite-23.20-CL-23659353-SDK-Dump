// ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// Size: 0x90
struct FLiveLinkSubjectFrameMessage
{
	struct FName SubjectName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FTransform> Transforms; // 0x8 (0x10)
	struct TArray<struct FLiveLinkCurveElement*> Curves; // 0x18 (0x10)
	struct FLiveLinkMetaData MetaData; // 0x28 (0x60)
	double Time; // 0x88 (0x8)
};

