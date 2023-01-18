// ScriptStruct /Script/FortniteGame.FortSpokenLine
// Size: 0x30
struct FFortSpokenLine
{
	class USoundBase* Audio; // 0x0 (0x8)
	class UAnimMontage* AnimMontage; // 0x8 (0x8)
	class UAnimSequence* AnimSequence; // 0x10 (0x8)
	class AFortPawn* Addressee; // 0x18 (0x8)
	struct TEnumAsByte<EFortFeedbackBroadcastFilter> BroadcastFilter; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float Delay; // 0x24 (0x4)
	bool bInterruptCurrentLine; // 0x28 (0x1)
	bool bCanBeInterrupted; // 0x29 (0x1)
	bool bCanQue; // 0x2a (0x1)
	unsigned char padding_2b[0x5]; // 0x2b (0x5)
};

