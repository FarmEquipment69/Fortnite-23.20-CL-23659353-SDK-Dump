// Class /Script/NavigationSystem.NavigationSystemV1
// Size: 0x1528
class UNavigationSystemV1 : public UNavigationSystemBase
{
	class ANavigationData* MainNavData; // 0x28 (0x8)
	class ANavigationData* AbstractNavData; // 0x30 (0x8)
	struct FName DefaultAgentName; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TWeakObjectPtr<class UClass> CrowdManagerClass; // 0x40 (0x28)
	unsigned char bAutoCreateNavigationData; // 0x68 (0x1)
	unsigned char bSpawnNavDataInNavBoundsLevel; // 0x68 (0x1)
	unsigned char bAllowClientSideNavigation; // 0x68 (0x1)
	unsigned char bShouldDiscardSubLevelNavData; // 0x68 (0x1)
	unsigned char bTickWhilePaused; // 0x68 (0x1)
	unsigned char bSupportRebuilding; // 0x68 (0x1)
	unsigned char bInitialBuildingLocked; // 0x68 (0x1)
	unsigned char bSkipAgentHeightCheckWhenPickingNavData; // 0x69 (0x1)
	unsigned char unreflected_6a[0x2]; // 0x6a (0x2) 
	int GeometryExportVertexCountWarningThreshold; // 0x6c (0x4)
	unsigned char bGenerateNavigationOnlyAroundNavigationInvokers; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	float ActiveTilesUpdateInterval; // 0x74 (0x4)
	enum ENavDataGatheringModeConfig DataGatheringMode; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	float DirtyAreaWarningSizeThreshold; // 0x7c (0x4)
	float GatheringNavModifiersWarningLimitTime; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x88 (0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct FBox BuildBounds; // 0xa0 (0x38)
	struct TArray<class ANavigationData*> NavDataSet; // 0xd8 (0x10)
	struct TArray<class ANavigationData*> NavDataRegistrationQueue; // 0xe8 (0x10)
	unsigned char unreflected_f8[0x10]; // 0xf8 (0x10) 
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0x118 (0x10)
	unsigned char unreflected_128[0xdc]; // 0x128 (0xdc) 
	enum FNavigationSystemRunMode OperationMode; // 0x204 (0x1)
	unsigned char padding_205[0x1323]; // 0x205 (0x1323)

	/* Functions */

	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker (Underlying native function: UnregisterNavigationInvoker 0xa085fd8)
	void UnregisterNavigationInvoker(class AActor*& Invoker); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount (Underlying native function: SetMaxSimultaneousTileGenerationJobsCount 0xa085f10)
	void SetMaxSimultaneousTileGenerationJobsCount(int& MaxNumberOfJobs); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode (Underlying native function: SetGeometryGatheringMode 0xa085e90)
	void SetGeometryGatheringMode(enum ENavDataGatheringModeConfig& NewMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount (Underlying native function: ResetMaxSimultaneousTileGenerationJobsCount 0xa085e10)
	void ResetMaxSimultaneousTileGenerationJobsCount(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker (Underlying native function: RegisterNavigationInvoker 0xa085d04)
	void RegisterNavigationInvoker(class AActor*& Invoker, float& TileGenerationRadius, float& TileRemovalRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated (Underlying native function: OnNavigationBoundsUpdated 0xa085bf4)
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume*& NavVolume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast (Underlying native function: NavigationRaycast 0xa085a04)
	static bool NavigationRaycast(class UObject*& WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, class UClass*& FilterClass, class AController*& Querier); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData (Underlying native function: K2_ReplaceAreaInOctreeData 0xa0858e0)
	bool K2ReplaceAreaInOctreeData(class UObject*& Object, class UClass*& OldArea, class UClass*& NewArea); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation (Underlying native function: K2_ProjectPointToNavigation 0xa0856e4)
	static bool K2ProjectPointToNavigation(class UObject*& WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, class ANavigationData*& NavData, class UClass*& FilterClass, struct FVector& QueryExtent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius (Underlying native function: K2_GetRandomReachablePointInRadius 0xa0854fc)
	static bool K2GetRandomReachablePointInRadius(class UObject*& WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float& Radius, class ANavigationData*& NavData, class UClass*& FilterClass); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius (Underlying native function: K2_GetRandomPointInNavigableRadius 0xa085314)
	static bool K2GetRandomPointInNavigableRadius(class UObject*& WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float& Radius, class ANavigationData*& NavData, class UClass*& FilterClass); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius (Underlying native function: K2_GetRandomLocationInNavigableRadius 0xa085314)
	static bool K2GetRandomLocationInNavigableRadius(class UObject*& WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float& Radius, class ANavigationData*& NavData, class UClass*& FilterClass); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked (Underlying native function: IsNavigationBeingBuiltOrLocked 0xa085250)
	static bool IsNavigationBeingBuiltOrLocked(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt (Underlying native function: IsNavigationBeingBuilt 0xa0851d0)
	static bool IsNavigationBeingBuilt(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength (Underlying native function: GetPathLength 0xa084fdc)
	static struct TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject*& WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, class ANavigationData*& NavData, class UClass*& FilterClass); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost (Underlying native function: GetPathCost 0xa084dc0)
	static struct TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject*& WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, class ANavigationData*& NavData, class UClass*& FilterClass); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem (Underlying native function: GetNavigationSystem 0xa084ce4)
	static class UNavigationSystemV1* GetNavigationSystem(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously (Underlying native function: FindPathToLocationSynchronously 0xa084ad0)
	static class UNavigationPath* FindPathToLocationSynchronously(class UObject*& WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, class AActor*& PathfindingContext, class UClass*& FilterClass); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously (Underlying native function: FindPathToActorSynchronously 0xa0847e0)
	static class UNavigationPath* FindPathToActorSynchronously(class UObject*& WorldContextObject, struct FVector& PathStart, class AActor*& GoalActor, float& TetherDistance, class AActor*& PathfindingContext, class UClass*& FilterClass); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

