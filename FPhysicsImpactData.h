// ScriptStruct /Script/FortSoundCueTemplates.PhysicsImpactData
// Size: 0x58
struct FPhysicsImpactData
{
	struct FVector2D VolumeOutput; // 0x0 (0x10)
	struct FVector2D PitchOutput; // 0x10 (0x10)
	struct FFortContinuousModulatorConfig Settings; // 0x20 (0x28)
	struct TArray<class USoundWave*> Variations; // 0x48 (0x10)
};

