// ScriptStruct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
// Size: 0x28
struct FSourceEffectDynamicsProcessorSettings
{
	enum ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0 (0x1)
	enum ESourceEffectDynamicsPeakMode PeakMode; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float LookAheadMsec; // 0x4 (0x4)
	float AttackTimeMsec; // 0x8 (0x4)
	float ReleaseTimeMsec; // 0xc (0x4)
	float ThresholdDb; // 0x10 (0x4)
	float Ratio; // 0x14 (0x4)
	float KneeBandwidthDb; // 0x18 (0x4)
	float InputGainDb; // 0x1c (0x4)
	float OutputGainDb; // 0x20 (0x4)
	unsigned char bStereoLinked; // 0x24 (0x1)
	unsigned char bAnalogMode; // 0x24 (0x1)
	unsigned char padding_25[0x3]; // 0x25 (0x3)
};

