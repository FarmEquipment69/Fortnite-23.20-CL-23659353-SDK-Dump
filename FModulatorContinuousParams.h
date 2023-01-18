// ScriptStruct /Script/Engine.ModulatorContinuousParams
// Size: 0x1c
struct FModulatorContinuousParams
{
	struct FName ParameterName; // 0x0 (0x4)
	float Default; // 0x4 (0x4)
	float MinInput; // 0x8 (0x4)
	float MaxInput; // 0xc (0x4)
	float MinOutput; // 0x10 (0x4)
	float MaxOutput; // 0x14 (0x4)
	struct TEnumAsByte<ModulationParamMode> ParamMode; // 0x18 (0x1)
	unsigned char padding_19[0x3]; // 0x19 (0x3)
};

