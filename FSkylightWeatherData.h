// ScriptStruct /Script/FortniteGame.SkylightWeatherData
// Size: 0x38
struct FSkylightWeatherData
{
	unsigned char bOverrideSkyLightColor; // 0x0 (0x1)
	unsigned char bOverrideSkyLightColorWeight; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FFortTimeOfDayCurve_LinearColor SkyLightColor; // 0x8 (0x20)
	struct FFortTimeOfDayCurve_Float SkyLightColorWeight; // 0x28 (0x10)
};

