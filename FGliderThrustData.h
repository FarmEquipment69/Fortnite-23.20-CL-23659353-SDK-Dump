// ScriptStruct /Script/FortSoundCueTemplates.GliderThrustData
// Size: 0x58
struct FGliderThrustData
{
	struct FName ParameterName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector2D PitchOutput; // 0x8 (0x10)
	struct FVector2D VolumeOutput; // 0x18 (0x10)
	class USoundWave* sound; // 0x28 (0x8)
	struct FFortContinuousModulatorConfig Settings; // 0x30 (0x28)
};

