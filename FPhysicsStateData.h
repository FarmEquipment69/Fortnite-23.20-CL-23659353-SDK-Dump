// ScriptStruct /Script/FortSoundCueTemplates.PhysicsStateData
// Size: 0x90
struct FPhysicsStateData
{
	struct FName ParameterName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector2D VolumeOutput; // 0x8 (0x10)
	struct FVector2D PitchOutput; // 0x18 (0x10)
	struct FFortContinuousModulatorConfig Settings; // 0x28 (0x28)
	struct FDistanceDatum CrossfadeInputSlow; // 0x50 (0x14)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	class USoundWave* SlowLoop; // 0x68 (0x8)
	struct FDistanceDatum CrossfadeInputFast; // 0x70 (0x14)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	class USoundWave* FastLoop; // 0x88 (0x8)
};

