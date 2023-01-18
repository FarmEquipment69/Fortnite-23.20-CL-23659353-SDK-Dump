// Class /Script/Engine.HapticFeedbackEffect_Buffer
// Size: 0x40
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
	struct TArray<unsigned char> Amplitudes; // 0x28 (0x10)
	int SampleRate; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

