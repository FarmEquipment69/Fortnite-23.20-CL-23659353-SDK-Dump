// Class /Script/LiveLink.LiveLinkTimecodeProvider
// Size: 0xc0
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
	struct FLiveLinkSubjectKey SubjectKey; // 0x30 (0x14)
	enum ELiveLinkTimecodeProviderEvaluationType Evaluation; // 0x44 (0x4)
	bool bOverrideFrameRate; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FFrameRate* OverrideFrameRate; // 0x4c (0x8)
	int BufferSize; // 0x54 (0x4)
	unsigned char padding_58[0x68]; // 0x58 (0x68)
};

