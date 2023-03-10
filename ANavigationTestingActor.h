// Class /Script/NavigationSystem.NavigationTestingActor
// Size: 0x3a0
class ANavigationTestingActor : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class UCapsuleComponent* CapsuleComponent; // 0x298 (0x8)
	class UNavigationInvokerComponent* InvokerComponent; // 0x2a0 (0x8)
	unsigned char bActAsNavigationInvoker; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	struct FNavAgentProperties NavAgentProps; // 0x2b0 (0x30)
	struct FVector QueryingExtent; // 0x2e0 (0x18)
	class ANavigationData* MyNavData; // 0x2f8 (0x8)
	struct FVector ProjectedLocation; // 0x300 (0x18)
	unsigned char bProjectedLocationValid; // 0x318 (0x1)
	unsigned char bSearchStart; // 0x318 (0x1)
	unsigned char unreflected_319[0x3]; // 0x319 (0x3) 
	float CostLimitFactor; // 0x31c (0x4)
	float MinimumCostLimit; // 0x320 (0x4)
	unsigned char bBacktracking; // 0x324 (0x1)
	unsigned char bUseHierarchicalPathfinding; // 0x324 (0x1)
	unsigned char bGatherDetailedInfo; // 0x324 (0x1)
	unsigned char bDrawDistanceToWall; // 0x324 (0x1)
	unsigned char bShowNodePool; // 0x324 (0x1)
	unsigned char bShowBestPath; // 0x324 (0x1)
	unsigned char bShowDiffWithPreviousStep; // 0x324 (0x1)
	unsigned char bShouldBeVisibleInGame; // 0x324 (0x1)
	unsigned char unreflected_325[0x3]; // 0x325 (0x3) 
	struct TEnumAsByte<ENavCostDisplay> CostDisplayMode; // 0x328 (0x1)
	unsigned char unreflected_329[0x7]; // 0x329 (0x7) 
	struct FVector2D TextCanvasOffset; // 0x330 (0x10)
	unsigned char bPathExist; // 0x340 (0x1)
	unsigned char bPathIsPartial; // 0x340 (0x1)
	unsigned char bPathSearchOutOfNodes; // 0x340 (0x1)
	unsigned char unreflected_341[0x3]; // 0x341 (0x3) 
	float PathfindingTime; // 0x344 (0x4)
	float PathCost; // 0x348 (0x4)
	int PathfindingSteps; // 0x34c (0x4)
	class ANavigationTestingActor* OtherActor; // 0x350 (0x8)
	class UClass* FilterClass; // 0x358 (0x8)
	int ShowStepIndex; // 0x360 (0x4)
	float OffsetFromCornersDistance; // 0x364 (0x4)
	unsigned char padding_368[0x38]; // 0x368 (0x38)
};

