// Class /Script/LiveLinkInterface.LiveLinkSubjectSettings
// Size: 0x68
class ULiveLinkSubjectSettings : public UObject
{
	struct TArray<class ULiveLinkFramePreProcessor*> PreProcessors; // 0x28 (0x10)
	class ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38 (0x8)
	struct TArray<class ULiveLinkFrameTranslator*> Translators; // 0x40 (0x10)
	class UClass* Role; // 0x50 (0x8)
	struct FFrameRate* FrameRate; // 0x58 (0x8)
	bool bRebroadcastSubject; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

