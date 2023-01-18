// ScriptStruct /Script/TimeSynth.TimeSynthEnvelopeFollowerSettings
// Size: 0xc
struct FTimeSynthEnvelopeFollowerSettings
{
	float AttackTime; // 0x0 (0x4)
	float ReleaseTime; // 0x4 (0x4)
	enum ETimeSynthEnvelopeFollowerPeakMode PeakMode; // 0x8 (0x1)
	bool bIsAnalogMode; // 0x9 (0x1)
	unsigned char padding_a[0x2]; // 0xa (0x2)
};

