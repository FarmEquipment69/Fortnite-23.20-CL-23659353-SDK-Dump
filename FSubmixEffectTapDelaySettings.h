// ScriptStruct /Script/Synthesis.SubmixEffectTapDelaySettings
// Size: 0x18
struct FSubmixEffectTapDelaySettings
{
	float MaximumDelayLength; // 0x0 (0x4)
	float InterpolationTime; // 0x4 (0x4)
	struct TArray<struct FTapDelayInfo> Taps; // 0x8 (0x10)
};

