// ScriptStruct /Script/Synthesis.SourceEffectChorusSettings
// Size: 0x258
struct FSourceEffectChorusSettings
{
	float Depth; // 0x0 (0x4)
	float Frequency; // 0x4 (0x4)
	float Feedback; // 0x8 (0x4)
	float WetLevel; // 0xc (0x4)
	float DryLevel; // 0x10 (0x4)
	float Spread; // 0x14 (0x4)
	struct FSoundModulationDestinationSettings DepthModulation; // 0x18 (0x60)
	struct FSoundModulationDestinationSettings FrequencyModulation; // 0x78 (0x60)
	struct FSoundModulationDestinationSettings FeedbackModulation; // 0xd8 (0x60)
	struct FSoundModulationDestinationSettings WetModulation; // 0x138 (0x60)
	struct FSoundModulationDestinationSettings DryModulation; // 0x198 (0x60)
	struct FSoundModulationDestinationSettings SpreadModulation; // 0x1f8 (0x60)
};

