// Class /Script/FortniteGame.MegaStormManager
// Size: 0x2c0
class AMegaStormManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	float MaxSecondsInMegaStormUpdate; // 0x290 (0x4)
	int NumBuildingActorMegaStormShouldDamagePerFrame; // 0x294 (0x4)
	float SleepTimeAfterDamagingBuildingActors; // 0x298 (0x4)
	float MinDelayTimeBeforeDestruction; // 0x29c (0x4)
	bool bFloorRadiusToGridConversion; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	int GridRadiusCellOffset; // 0x2a4 (0x4)
	float MegaStormStartTime; // 0x2a8 (0x4)
	float SleepTimeRemaining; // 0x2ac (0x4)
	struct TArray<struct FMegaStormCircle> MegaStormCircles; // 0x2b0 (0x10)
};

