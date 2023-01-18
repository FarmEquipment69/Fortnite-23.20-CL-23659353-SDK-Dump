// Class /Script/FortniteGame.FortPlayerZoneSettingsComponent
// Size: 0x288
class UFortPlayerZoneSettingsComponent : public UFortPlayerSettingsComponentBase
{
	enum EAthenaTimeOfDayOverride TimeOfDayOverride; // 0x278 (0x1)
	enum EAthenaTODPostProcessOverride CameraFilter; // 0x279 (0x1)
	unsigned char unreflected_27a[0x2]; // 0x27a (0x2) 
	int PostProcessOverride; // 0x27c (0x4)
	enum EAthenaLightIntensityOverride LightIntensityOverride; // 0x280 (0x1)
	enum EAthenaTODColor LightColorOverride; // 0x281 (0x1)
	enum EAthenaFogDensityOverride FogDensityOverride; // 0x282 (0x1)
	enum EAthenaTODColor FogColorOverride; // 0x283 (0x1)
	unsigned char padding_284[0x4]; // 0x284 (0x4)
};

