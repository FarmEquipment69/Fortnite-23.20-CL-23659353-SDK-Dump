// Class /Script/AIPatrolPath.AIPatrolPathComponent
// Size: 0x348
class UAIPatrolPathComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	struct TWeakObjectPtr<class UClass> DefaultAIPawn; // 0xc0 (0x28)
	class UClass* PathRendererClass; // 0xe8 (0x8)
	bool bAllowPartialPaths; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x7]; // 0xf1 (0x7) 
	struct FGameplayTagContainer UnableToPlaceNewDeviceTags; // 0xf8 (0x20)
	struct FNavAgentProperties CachedAIAgentProperties; // 0x118 (0x30)
	class UNavigationSystemV1* CachedNavSystem; // 0x148 (0x8)
	class ANavigationData* CachedNavData; // 0x150 (0x8)
	class UClass* CachedFilterClass; // 0x158 (0x8)
	unsigned char unreflected_160[0x10]; // 0x160 (0x10) 
	struct FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x170 (0x10)
	struct FMulticastInlineDelegate OnPatrolPointReached; // 0x180 (0x10)
	struct FMulticastInlineDelegate OnPatrolPathStarted; // 0x190 (0x10)
	struct FMulticastInlineDelegate OnPatrolPathStopped; // 0x1a0 (0x10)
	unsigned char unreflected_1b0[0x8]; // 0x1b0 (0x8) 
	struct TArray<class UAIPatrolPathComponent*> PatrolPath; // 0x1b8 (0x10)
	struct FPatrolPathSegmentDetails PathSegmentDetails; // 0x1c8 (0x108)
	unsigned char unreflected_2d0[0x10]; // 0x2d0 (0x10) 
	class UAIPatrolPathComponent* CopiedFrom; // 0x2e0 (0x8)
	unsigned char unreflected_2e8[0x8]; // 0x2e8 (0x8) 
	class UAIPatrolPathComponent* CopiedFromCut; // 0x2f0 (0x8)
	class AFortCreativePatrolPath* PatrolPathActor; // 0x2f8 (0x8)
	class AFortAthenaPatrolPoint* PatrolPointActor; // 0x300 (0x8)
	struct TArray<class UAIPatrolPathComponent*> MultiSelectActorToEnterList; // 0x308 (0x10)
	unsigned char padding_318[0x30]; // 0x318 (0x30)

	/* Functions */

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SyncSharedUserOptions (Underlying native function: SyncSharedUserOptions 0x7349c54)
	bool SyncSharedUserOptions(class UAIPatrolPathComponent*& CopyToAIPatrolPathComp, struct TMap<struct FString, struct FString>& UserOptionValues); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.ShouldRenderPath (Has no native function)
	bool ShouldRenderPath(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetRenderPath (Underlying native function: SetRenderPath 0x7349bd4)
	void SetRenderPath(bool& bRenderPath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathGroup (Underlying native function: SetPatrolPathGroup 0x7349ac4)
	void SetPatrolPathGroup(enum EFortCreativePatrolPathGroup& PatrolPathGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathEnabled (Underlying native function: SetPatrolPathEnabled 0x7349a40)
	void SetPatrolPathEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrollingMode (Underlying native function: SetPatrollingMode 0x7349b44)
	void SetPatrollingMode(enum EPatrollingMode& NewMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RequestRenderPath (Underlying native function: RequestRenderPath 0x73499cc)
	void RequestRenderPath(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextPoint (Underlying native function: RenderToNextPoint 0x73499b8)
	void RenderToNextPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextAndPreviousPoint (Underlying native function: RenderToNextAndPreviousPoint 0x7349964)
	void RenderToNextAndPreviousPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RemovePoint (Underlying native function: RemovePoint 0x7349940)
	bool RemovePoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointReached (Underlying native function: PatrolPointReached 0x734987c)
	void PatrolPointReached(class AFortAthenaPatrolPoint*& PathPoint, class AAIController*& Instigator); // (Final | Native | Private)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointFailedToReach (Underlying native function: PatrolPointFailedToReach 0x73497b8)
	void PatrolPointFailedToReach(class AFortAthenaPatrolPoint*& PathPoint, class AAIController*& Instigator); // (Final | Native | Private)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStopped (Underlying native function: PatrolPathStopped 0x7349738)
	void PatrolPathStopped(class AAIController*& Instigator); // (Final | Native | Private)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStarted (Underlying native function: PatrolPathStarted 0x73496a8)
	void PatrolPathStarted(class AAIController*& Instigator); // (Final | Native | Private)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPatrolPathGroupsMerged (Has no native function)
	void OnPatrolPathGroupsMerged(); // (Event | Public | BlueprintEvent)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPatrolPathActorAssigned (Has no native function)
	void OnPatrolPathActorAssigned(); // (Event | Public | BlueprintEvent)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPathExtremitiesChanged (Has no native function)
	void OnPathExtremitiesChanged(bool& bIsStart, bool& bIsEnd); // (Event | Public | BlueprintEvent)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.HasValidPatrolPath (Underlying native function: HasValidPatrolPath 0x734967c)
	bool HasValidPatrolPath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndex (Underlying native function: GetPatrolPathPointIndex 0x7349664)
	int GetPatrolPathPointIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPoint (Underlying native function: GetPatrolPathPoint 0x73495a4)
	class UAIPatrolPathComponent* GetPatrolPathPoint(int& InPatrolPathIndex, int& InPatrolPathPointIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndex (Underlying native function: GetPatrolPathIndex 0x734958c)
	int GetPatrolPathIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolFilterOptions (Has no native function)
	class UClass* GetPatrolFilterOptions(); // (Event | Public | BlueprintEvent)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetNextAvailablePatrolPathIndex (Underlying native function: GetNextAvailablePatrolPathIndex 0x73494f4)
	bool GetNextAvailablePatrolPathIndex(int& NextAvailableIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetLinkedPatrolPoints (Underlying native function: GetLinkedPatrolPoints 0x734937c)
	struct TArray<class UAIPatrolPathComponent*> GetLinkedPatrolPoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GeneratePathPoints (Underlying native function: GeneratePathPoints 0x73492fc)
	void GeneratePathPoints(enum EFortCreativePatrolPathGroup& PatrolPathGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIPatrolPath.AIPatrolPathComponent.CanNextPointBeReached (Underlying native function: CanNextPointBeReached 0x73492dc)
	bool CanNextPointBeReached(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

