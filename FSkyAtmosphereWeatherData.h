// ScriptStruct /Script/FortniteGame.SkyAtmosphereWeatherData
// Size: 0x38
struct FSkyAtmosphereWeatherData
{
	unsigned char bOverrideMieScatteringScale; // 0x0 (0x1)
	unsigned char bOverrideMieAbsorptionScale; // 0x0 (0x1)
	unsigned char bOverrideHeightFogContribution; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FFortTimeOfDayCurve_Float MieScatteringScale; // 0x8 (0x10)
	struct FFortTimeOfDayCurve_Float MieAbsorptionScale; // 0x18 (0x10)
	struct FFortTimeOfDayCurve_Float HeightFogContribution; // 0x28 (0x10)
};

