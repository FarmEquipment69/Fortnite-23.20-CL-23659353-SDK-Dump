// Class /Script/FortniteGame.FortVehiclePontoonsComponent
// Size: 0x2c0
class UFortVehiclePontoonsComponent : public UBuoyancyComponent
{
	struct TArray<struct FVehicleEffectsPontoonParamSet> WaterEffectsPontoonParameters; // 0x208 (0x10)
	struct TArray<float> OverridePontoonRadiuses; // 0x218 (0x10)
	struct TArray<int> PushForcePontoons; // 0x228 (0x10)
	struct TArray<int> LeftTurnPontoons; // 0x238 (0x10)
	struct TArray<int> RightTurnPontoons; // 0x248 (0x10)
	class AFortAthenaVehicle* OwnerVehicle; // 0x258 (0x8)
	int WaterLineStartPontoonIndex; // 0x260 (0x4)
	int WaterLineEndPontoonIndex; // 0x264 (0x4)
	unsigned char unreflected_268[0x8]; // 0x268 (0x8) 
	struct TMap<struct FName, struct FVehiclePontoonBuoyancyDataExtended> ExtraBuoyancyData; // 0x270 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortVehiclePontoonsComponent.OnRep_PontoonRadius (Underlying native function: OnRep_PontoonRadius 0x233218c)
	void OnRepPontoonRadius(struct TArray<float>& PrevPontoonRadiuses); // (Final | Native | Public | HasOutParms)
};

