// ScriptStruct /Script/FortniteGame.DayPhaseInfo
// Size: 0x210
struct FDayPhaseInfo
{
	struct FString PhaseStartAnnouncement; // 0x0 (0x10)
	float TimePhaseBegins; // 0x10 (0x4)
	float PhaseLengthInHours; // 0x14 (0x4)
	float PercentageTransitionIn; // 0x18 (0x4)
	float TransitionInTimeInMinutes; // 0x1c (0x4)
	float PercentageTransitionOut; // 0x20 (0x4)
	float TransitionOutTimeInMinutes; // 0x24 (0x4)
	struct FSkyLightValues SkyLightValues; // 0x28 (0x38)
	struct FThreatCloudValues ThreatCloudValues; // 0x60 (0xa0)
	struct FElementalCharValues ElementalCharValues; // 0x100 (0x14)
	struct FDirectionalLightValues DirectionalLightValues; // 0x114 (0xc)
	struct FExponentialHeightFogValues ExpHeightFogValues; // 0x120 (0x60)
	struct FSkyAtmosphereValues SkyAtmosphereValues; // 0x180 (0x74)
	unsigned char unreflected_1f4[0x4]; // 0x1f4 (0x4) 
	class UPostProcessComponent* LowPriPostProcessComponent; // 0x1f8 (0x8)
	class UMaterialInstance* SkyMaterialInstance; // 0x200 (0x8)
	class UMaterialInstance* StarMapMaterialInstance; // 0x208 (0x8)
};

