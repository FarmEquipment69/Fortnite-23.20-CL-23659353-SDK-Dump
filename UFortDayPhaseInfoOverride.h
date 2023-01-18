// Class /Script/FortniteGame.FortDayPhaseInfoOverride
// Size: 0x268
class UFortDayPhaseInfoOverride : public UObject
{
	struct FDayPhaseInfo DayPhaseInfo; // 0x28 (0x210)
	bool bUseAltitudeAdjustmentsOverride; // 0x238 (0x1)
	unsigned char unreflected_239[0x7]; // 0x239 (0x7) 
	struct TArray<struct FCameraAltitudeAdjustments> AltitudeAdjustments; // 0x240 (0x10)
	bool bUseAltitudeAdjustmentsForSecondFogOverride; // 0x250 (0x1)
	unsigned char unreflected_251[0x7]; // 0x251 (0x7) 
	struct TArray<struct FCameraAltitudeAdjustments> AltitudeAdjustmentsForSecondFog; // 0x258 (0x10)
};

