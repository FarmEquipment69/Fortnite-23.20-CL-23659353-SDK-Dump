// ScriptStruct /Script/Engine.ReverbSettings
// Size: 0x20
struct FReverbSettings
{
	bool bApplyReverb; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UReverbEffect* ReverbEffect; // 0x8 (0x8)
	class USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10 (0x8)
	float Volume; // 0x18 (0x4)
	float FadeTime; // 0x1c (0x4)
};

