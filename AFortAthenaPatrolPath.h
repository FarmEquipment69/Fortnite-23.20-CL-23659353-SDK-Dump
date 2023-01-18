// Class /Script/FortniteAI.FortAthenaPatrolPath
// Size: 0x450
class AFortAthenaPatrolPath : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	enum EPatrollingMode Mode; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct TArray<class AFortAthenaPatrolPoint*> PatrolPoints; // 0x2a8 (0x10)
	bool bUseRandomStartupPatrolPoint; // 0x2b8 (0x1)
	bool bUseRandomStartupDirection; // 0x2b9 (0x1)
	unsigned char unreflected_2ba[0x6]; // 0x2ba (0x6) 
	struct FGameplayTagContainer GameplayTags; // 0x2c0 (0x20)
	class AActor* RadialLeashLocationActorOverride; // 0x2e0 (0x8)
	float RadialLeashInnerRadiusOverride; // 0x2e8 (0x4)
	float RadialLeashOuterRadiusOverride; // 0x2ec (0x4)
	struct TArray<struct FPatrolPathLeash> PathLeashArray; // 0x2f0 (0x10)
	struct FScalableFloat WaterLevelIndexMax; // 0x300 (0x28)
	struct FScalableFloat WaterLevelIndexMin; // 0x328 (0x28)
	struct FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnPatrolPointReached; // 0x360 (0x10)
	struct FMulticastInlineDelegate OnPatrolPathStarted; // 0x370 (0x10)
	struct FMulticastInlineDelegate OnPatrolPathStopped; // 0x380 (0x10)
	struct FMulticastInlineDelegate OnPatrolPathActivationStatusChanged; // 0x390 (0x10)
	struct FScalableFloat MaxConcurrentUsage; // 0x3a0 (0x28)
	int CurrentConcurrentUsage; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	struct FScalableFloat MaxLifetimeUsage; // 0x3d0 (0x28)
	float DebugLinkWidthSelected; // 0x3f8 (0x4)
	float DebugLinkWidthNotSelected; // 0x3fc (0x4)
	struct FLinearColor DebugNotSelectedColor; // 0x400 (0x10)
	unsigned char bIsPatrolPathEnabled; // 0x410 (0x1)
	unsigned char padding_411[0x3f]; // 0x411 (0x3f)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaPatrolPath.SetPatrolPathEnabled (Underlying native function: SetPatrolPathEnabled 0xa3e48b0)
	void SetPatrolPathEnabled(bool& bIsEnabled); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaPatrolPath.PatrolPointReached (Underlying native function: PatrolPointReached 0x615c3a0)
	void PatrolPointReached(class AFortAthenaPatrolPoint*& PathPoint, class AAIController*& AIInstigator); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteAI.FortAthenaPatrolPath.PatrolPointFailedToReach (Underlying native function: PatrolPointFailedToReach 0x615c290)
	void PatrolPointFailedToReach(class AFortAthenaPatrolPoint*& PathPoint, class AAIController*& AIInstigator); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteAI.FortAthenaPatrolPath.PatrolPathStopped (Underlying native function: PatrolPathStopped 0x615c1e0)
	void PatrolPathStopped(class AAIController*& AIInstigator); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteAI.FortAthenaPatrolPath.PatrolPathStarted (Underlying native function: PatrolPathStarted 0x615c130)
	void PatrolPathStarted(class AAIController*& AIInstigator); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteAI.FortAthenaPatrolPath.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0xa3e34f0)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteAI.FortAthenaPatrolPath.GetPatrolPoints (Underlying native function: GetPatrolPoints 0xa3e2530)
	void GetPatrolPoints(struct TArray<class AFortAthenaPatrolPoint*>& OutPatrolPoints); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaPatrolPath.CanBeUsed (Underlying native function: CanBeUsed 0xa3e1f58)
	bool CanBeUsed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

