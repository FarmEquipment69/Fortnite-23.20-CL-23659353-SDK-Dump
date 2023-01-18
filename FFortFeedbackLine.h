// ScriptStruct /Script/FortniteGame.FortFeedbackLine
// Size: 0x98
struct FFortFeedbackLine
{
	struct TWeakObjectPtr<class USoundBase> Audio; // 0x0 (0x28)
	struct TWeakObjectPtr<class UAnimSequence> AnimSequence; // 0x28 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> AnimMontage; // 0x50 (0x28)
	struct TEnumAsByte<EFortFeedbackAddressee> Addressee; // 0x78 (0x1)
	struct TEnumAsByte<EFortFeedbackContext> Context; // 0x79 (0x1)
	unsigned char unreflected_7a[0x6]; // 0x7a (0x6) 
	struct TArray<struct FFortFeedbackResponse> ResponseEvents; // 0x80 (0x10)
	bool bInterruptCurrentLine; // 0x90 (0x1)
	bool bCanBeInterrupted; // 0x91 (0x1)
	bool bCanQue; // 0x92 (0x1)
	unsigned char padding_93[0x5]; // 0x93 (0x5)
};

