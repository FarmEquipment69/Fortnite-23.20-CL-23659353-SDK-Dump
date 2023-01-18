// Class /Script/LiveLinkInterface.LiveLinkVirtualSubject
// Size: 0x158
class ULiveLinkVirtualSubject : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class UClass* Role; // 0x30 (0x8)
	struct TArray<struct FLiveLinkSubjectName> Subjects; // 0x38 (0x10)
	struct TArray<class ULiveLinkFrameTranslator*> FrameTranslators; // 0x48 (0x10)
	bool bRebroadcastSubject; // 0x58 (0x1)
	unsigned char padding_59[0xff]; // 0x59 (0xff)
};

