// ScriptStruct /Script/FortniteGame.LightOverrideSettings
// Size: 0x1c
struct FLightOverrideSettings
{
	enum FLightOverrideLevel OverrideLevel; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Intensity; // 0x4 (0x4)
	float AttenuationRadius; // 0x8 (0x4)
	bool CastsShadows; // 0xc (0x1)
	bool UseInverseSquaredFalloff; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	float LightFalloffExponent; // 0x10 (0x4)
	float ShadowResolutionScale; // 0x14 (0x4)
	float ShadowBias; // 0x18 (0x4)
};

