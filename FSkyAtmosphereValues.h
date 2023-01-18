// ScriptStruct /Script/FortniteGame.SkyAtmosphereValues
// Size: 0x74
struct FSkyAtmosphereValues
{
	float RayleighScatteringScale; // 0x0 (0x4)
	struct FLinearColor RayleighScattering; // 0x4 (0x10)
	float RayleighExponentialDistribution; // 0x14 (0x4)
	float MieScatteringScale; // 0x18 (0x4)
	struct FLinearColor MieScattering; // 0x1c (0x10)
	float MieAbsorptionScale; // 0x2c (0x4)
	struct FLinearColor MieAbsorption; // 0x30 (0x10)
	float MieAnisotropy; // 0x40 (0x4)
	float MieExponentialDistribution; // 0x44 (0x4)
	float OtherAbsorptionScale; // 0x48 (0x4)
	struct FLinearColor OtherAbsorption; // 0x4c (0x10)
	struct FLinearColor SkyLuminanceFactor; // 0x5c (0x10)
	float AerialPespectiveViewDistanceScale; // 0x6c (0x4)
	float HeightFogContribution; // 0x70 (0x4)
};

