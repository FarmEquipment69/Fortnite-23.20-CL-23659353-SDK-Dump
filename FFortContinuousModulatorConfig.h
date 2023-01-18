// ScriptStruct /Script/FortSoundCueTemplates.FortContinuousModulatorConfig
// Size: 0x28
struct FFortContinuousModulatorConfig
{
	struct FVector2D VolumeRange; // 0x0 (0x10)
	struct FVector2D PitchRange; // 0x10 (0x10)
	struct TEnumAsByte<ModulationParamMode> VolumeMode; // 0x20 (0x1)
	struct TEnumAsByte<ModulationParamMode> PitchMode; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

