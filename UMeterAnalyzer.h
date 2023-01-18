// Class /Script/AudioSynesthesia.MeterAnalyzer
// Size: 0x138
class UMeterAnalyzer : public UAudioAnalyzer
{
	class UMeterSettings* Settings; // 0x90 (0x8)
	struct FMulticastInlineDelegate OnOverallMeterResults; // 0x98 (0x10)
	unsigned char unreflected_a8[0x18]; // 0xa8 (0x18) 
	struct FMulticastInlineDelegate OnPerChannelMeterResults; // 0xc0 (0x10)
	unsigned char unreflected_d0[0x18]; // 0xd0 (0x18) 
	struct FMulticastInlineDelegate OnLatestOverallMeterResults; // 0xe8 (0x10)
	unsigned char unreflected_f8[0x18]; // 0xf8 (0x18) 
	struct FMulticastInlineDelegate OnLatestPerChannelMeterResults; // 0x110 (0x10)
	unsigned char padding_120[0x18]; // 0x120 (0x18)
};

