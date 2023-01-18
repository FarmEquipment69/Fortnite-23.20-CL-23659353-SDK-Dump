// ScriptStruct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x60
struct FSubmixEffectDynamicsProcessorSettings
{
	enum ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0 (0x1)
	enum ESubmixEffectDynamicsPeakMode PeakMode; // 0x1 (0x1)
	enum ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	float InputGainDb; // 0x4 (0x4)
	float ThresholdDb; // 0x8 (0x4)
	float Ratio; // 0xc (0x4)
	float KneeBandwidthDb; // 0x10 (0x4)
	float LookAheadMsec; // 0x14 (0x4)
	float AttackTimeMsec; // 0x18 (0x4)
	float ReleaseTimeMsec; // 0x1c (0x4)
	enum ESubmixEffectDynamicsKeySource KeySource; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	class UAudioBus* ExternalAudioBus; // 0x28 (0x8)
	class USoundSubmix* ExternalSubmix; // 0x30 (0x8)
	unsigned char bChannelLinked; // 0x38 (0x1)
	unsigned char bAnalogMode; // 0x38 (0x1)
	unsigned char bBypass; // 0x38 (0x1)
	unsigned char bKeyAudition; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float KeyGainDb; // 0x3c (0x4)
	float OutputGainDb; // 0x40 (0x4)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x44 (0xc)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x50 (0xc)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

