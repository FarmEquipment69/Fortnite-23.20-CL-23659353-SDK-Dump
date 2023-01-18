// Class /Script/TimeSynth.TimeSynthClip
// Size: 0x78
class UTimeSynthClip : public UObject
{
	struct TArray<struct FTimeSynthClipSound> Sounds; // 0x28 (0x10)
	struct FVector2D VolumeScaleDb; // 0x38 (0x10)
	struct FVector2D PitchScaleSemitones; // 0x48 (0x10)
	struct FTimeSynthTimeDef* FadeInTime; // 0x58 (0x8)
	bool bApplyFadeOut; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	struct FTimeSynthTimeDef* FadeOutTime; // 0x64 (0x8)
	struct FTimeSynthTimeDef* ClipDuration; // 0x6c (0x8)
	enum ETimeSynthEventClipQuantization ClipQuantization; // 0x74 (0x1)
	unsigned char padding_75[0x3]; // 0x75 (0x3)
};

