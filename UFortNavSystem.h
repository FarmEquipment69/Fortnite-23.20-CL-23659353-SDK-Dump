// Class /Script/FortniteAI.FortNavSystem
// Size: 0x1788
class UFortNavSystem : public UNavigationSystemV1
{
	unsigned char unreflected_1528[0x10]; // 0x1528 (0x10) 
	struct TWeakObjectPtr<class UClass> DefaultSmashableArea; // 0x1538 (0x28)
	struct TWeakObjectPtr<class UClass> JumpDownArea; // 0x1560 (0x28)
	unsigned char unreflected_1588[0x28]; // 0x1588 (0x28) 
	struct TWeakObjectPtr<class UClass> JumpDownSmashableArea2; // 0x15b0 (0x28)
	struct TWeakObjectPtr<class UClass> JumpDownSmashableArea3; // 0x15d8 (0x28)
	struct TArray<class UFortCustomNavLinkGlobalProxy*> LinkGlobalProxies; // 0x1600 (0x10)
	struct TArray<class ARecastNavMesh*> NamedNavmeshes; // 0x1610 (0x10)
	struct TArray<class UFortNavLinkBlockerComponent*> NavLinkBlockers; // 0x1620 (0x10)
	unsigned char unreflected_1630[0x10]; // 0x1630 (0x10) 
	struct TArray<class UFortPathCostEstimator*> PathEstimators; // 0x1640 (0x10)
	struct TArray<class UFortInescapableZoneTracker*> InescapableZones; // 0x1650 (0x10)
	unsigned char bAllowAutoRebuild; // 0x1660 (0x1)
	unsigned char bRebuildOnInitialUnlock; // 0x1660 (0x1)
	unsigned char bUsesStreamedInNavLevel; // 0x1660 (0x1)
	unsigned char bUseStaticMeshLinks; // 0x1660 (0x1)
	unsigned char bUseStaticWorldLinksDown; // 0x1660 (0x1)
	unsigned char bUseStaticWorldLinksUp; // 0x1660 (0x1)
	unsigned char bUseJumpLinkActors; // 0x1660 (0x1)
	unsigned char bGenerateWallClimbLinks; // 0x1660 (0x1)
	unsigned char bGenerateClamberLinks; // 0x1661 (0x1)
	unsigned char unreflected_1662[0x2]; // 0x1662 (0x2) 
	float DirtyAreasUpdateFreqInactive; // 0x1664 (0x4)
	unsigned char unreflected_1668[0xd8]; // 0x1668 (0xd8) 
	class AFortNavigationGraph* NavGraphData; // 0x1740 (0x8)
	struct TArray<struct TWeakObjectPtr<class AActor>> CompositePathGoals; // 0x1748 (0x10)
	struct TArray<struct FBox> AtlasCells; // 0x1758 (0x10)
	unsigned char unreflected_1768[0x10]; // 0x1768 (0x10) 
	struct TArray<struct FMetaNavCachedEntry> MetaNavCachedAreas; // 0x1778 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortNavSystem.OnNavDataRegistered (Underlying native function: OnNavDataRegistered 0xa2e7710)
	void OnNavDataRegistered(class ANavigationData*& NavData); // (Final | Native | Protected)

	// Function /Script/FortniteAI.FortNavSystem.IsNavmeshInRadiusInitialized (Underlying native function: IsNavmeshInRadiusInitialized 0xa2e75fc)
	static bool IsNavmeshInRadiusInitialized(class UObject*& WorldContext, struct FVector& TestLocation, float& TestRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)
};

