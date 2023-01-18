// ScriptStruct /Script/FortniteGame.WindWeatherData
// Size: 0x40
struct FWindWeatherData
{
	unsigned char bOverrideWindDirection; // 0x0 (0x1)
	unsigned char bOverrideWindStrength; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FFortTimeOfDayCurve_Vector WindDirection; // 0x8 (0x28)
	struct FFortTimeOfDayCurve_Float WindStrength; // 0x30 (0x10)
};

