// ScriptStruct /Script/FortniteGame.DirectionalLightWeatherData
// Size: 0x58
struct FDirectionalLightWeatherData
{
	unsigned char bOverrideDirectionalLightColor; // 0x0 (0x1)
	unsigned char bOverrideDirectionalLightColorWeight; // 0x0 (0x1)
	unsigned char bOverrideDirectionalLightColorBrightness; // 0x0 (0x1)
	unsigned char bOverrideVolumetricScatteringIntensity; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FFortTimeOfDayCurve_LinearColor DirectionalLightColor; // 0x8 (0x20)
	struct FFortTimeOfDayCurve_Float DirectionalLightColorWeight; // 0x28 (0x10)
	struct FFortTimeOfDayCurve_Float DirectionalLightColorBrightness; // 0x38 (0x10)
	struct FFortTimeOfDayCurve_Float VolumetricScatteringIntensity; // 0x48 (0x10)
};

