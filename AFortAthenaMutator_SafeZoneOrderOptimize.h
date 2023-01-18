// Class /Script/FortniteGame.FortAthenaMutator_SafeZoneOrderOptimize
// Size: 0x438
class AFortAthenaMutator_SafeZoneOrderOptimize : public AFortAthenaMutator
{
	struct FScalableFloat NumRouteOrdersToChooseFrom; // 0x330 (0x28)
	struct FScalableFloat NumRouteOrdersPerFrame; // 0x358 (0x28)
	struct FScalableFloat MaxPercentDeviationFromBestRoute; // 0x380 (0x28)
	bool bInitialized; // 0x3a8 (0x1)
	bool bPaused; // 0x3a9 (0x1)
	unsigned char unreflected_3aa[0x6]; // 0x3aa (0x6) 
	struct TArray<struct FSafeZoneOrderOptimizeMutatorRouteDefinition> Routes; // 0x3b0 (0x10)
	int MaxRoutesPerOrder; // 0x3c0 (0x4)
	unsigned char unreflected_3c4[0x14]; // 0x3c4 (0x14) 
	struct TArray<int> LockedInRouteIDs; // 0x3d8 (0x10)
	unsigned char unreflected_3e8[0x10]; // 0x3e8 (0x10) 
	struct FSafeZoneOrderOptimizeMutatorRouteOrder ChosenRouteOrder; // 0x3f8 (0x18)
	float MapUILineThickness; // 0x410 (0x4)
	unsigned char unreflected_414[0x4]; // 0x414 (0x4) 
	struct FSafeZoneOrderOptimizeMutatorRouteOrder DebugShortestRouteOrder; // 0x418 (0x18)
	unsigned char padding_430[0x8]; // 0x430 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_SafeZoneOrderOptimize.OnRep_ChosenRouteOrder (Underlying native function: OnRep_ChosenRouteOrder 0x8505d84)
	void OnRepChosenRouteOrder(); // (Final | Native | Public)
};

