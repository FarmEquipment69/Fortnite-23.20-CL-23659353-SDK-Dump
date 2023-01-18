// ScriptStruct /Script/Engine.QuartzTimeSignature
// Size: 0x18
struct FQuartzTimeSignature
{
	int NumBeats; // 0x0 (0x4)
	enum EQuartzTimeSignatureQuantization BeatType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FQuartzPulseOverrideStep*> OptionalPulseOverride; // 0x8 (0x10)
};

