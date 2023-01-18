// ScriptStruct /Script/ChaosCaching.ParticleTransformTrack
// Size: 0x48
struct FParticleTransformTrack
{
	struct FRawAnimSequenceTrack RawTransformTrack; // 0x0 (0x30)
	float BeginOffset; // 0x30 (0x4)
	bool bDeactivateOnEnd; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct TArray<float> KeyTimestamps; // 0x38 (0x10)
};

