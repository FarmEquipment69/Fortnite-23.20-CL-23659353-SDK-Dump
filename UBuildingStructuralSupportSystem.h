// Class /Script/FortniteGame.BuildingStructuralSupportSystem
// Size: 0x438
class UBuildingStructuralSupportSystem : public UObject
{
	unsigned char unreflected_28[0x58]; // 0x28 (0x58) 
	struct TWeakObjectPtr<class AController> BatchedRemovalInstigator; // 0x80 (0x8)
	unsigned char unreflected_88[0x280]; // 0x88 (0x280) 
	struct TArray<class ABuildingLayoutRequirement*> LayoutRequirementActorsToRegister; // 0x308 (0x10)
	unsigned char unreflected_318[0xe8]; // 0x318 (0xe8) 
	class AFortNavigationGraph* NavGraph; // 0x400 (0x8)
	unsigned char padding_408[0x30]; // 0x408 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.WouldBuildingBeStructurallySupportedByNeighbors (Underlying native function: WouldBuildingBeStructurallySupportedByNeighbors 0x8670454)
	bool WouldBuildingBeStructurallySupportedByNeighbors(class ABuildingSMActor*& ActorToCheck, struct FVector& Location, struct FRotator& Rotation, bool& bMirrored); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.StopActorRemovalBatch (Underlying native function: StopActorRemovalBatch 0x2a7e294)
	void StopActorRemovalBatch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.StartActorRemovalBatch (Underlying native function: StartActorRemovalBatch 0x2e3b8d4)
	void StartActorRemovalBatch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetWorldLocFromGridIndices (Underlying native function: K2_GetWorldLocFromGridIndices 0x86702b8)
	bool K2GetWorldLocFromGridIndices(struct FBuildingSupportCellIndex& GridIndices, struct FVector& OutWorldLoc); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetNeighboringBuildingActors (Underlying native function: K2_GetNeighboringBuildingActors 0x86700e0)
	void K2GetNeighboringBuildingActors(struct TEnumAsByte<EFortBuildingType>& BuildingType, struct FVector& WorldLocation, struct FBuildingSupportCellIndex& OutActorGridIndices, struct FBuildingNeighboringActorInfo& OutNeighboringActors); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetNeighboringActorsForWallActor (Underlying native function: K2_GetNeighboringActorsForWallActor 0x866ff34)
	void K2GetNeighboringActorsForWallActor(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& OutActorGridIndices, struct FBuildingNeighboringActorInfo& OutNeighboringActors); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetNeighboringActorsForCenterCellActor (Underlying native function: K2_GetNeighboringActorsForCenterCellActor 0x866fd9c)
	void K2GetNeighboringActorsForCenterCellActor(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& OutActorGridIndices, struct FBuildingNeighboringActorInfo& OutNeighboringActors); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetLogicalBuildingActors (Underlying native function: K2_GetLogicalBuildingActors 0x866fcb8)
	void K2GetLogicalBuildingActors(int& LogicalIdx, struct TArray<class ABuildingSMActor*>& LogicalBuildingActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetGridIndicesFromWorldLoc (Underlying native function: K2_GetGridIndicesFromWorldLoc 0x866fbc0)
	bool K2GetGridIndicesFromWorldLoc(struct FVector& WorldLoc, struct FBuildingSupportCellIndex& OutGridIndices); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetGridBoxFromWorldLoc (Underlying native function: K2_GetGridBoxFromWorldLoc 0x866fb00)
	struct FBox K2GetGridBoxFromWorldLoc(struct FVector& WorldLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetBuildingActorsInGridCells (Underlying native function: K2_GetBuildingActorsInGridCells 0x866f96c)
	bool K2GetBuildingActorsInGridCells(struct TArray<struct FBuildingSupportCellIndex>& CellIndices, struct FBuildingGridActorFilter& Filter, struct FBuildingNeighboringActorInfo& OutActorsInGridCell); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetBuildingActorsInGridCell (Underlying native function: K2_GetBuildingActorsInGridCell 0x866f7ec)
	bool K2GetBuildingActorsInGridCell(struct FVector& WorldLocation, struct FBuildingGridActorFilter& Filter, struct FBuildingNeighboringActorInfo& OutActorsInGridCell); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddWallActorToGrid (Underlying native function: K2_CanAddWallActorToGrid 0x866f4c0)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddWallActorToGrid(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& GridIndices, struct TEnumAsByte<EFortBuildingType>& WallType, enum EStructuralWallPosition& OutWallPosition, int& OutWallIdx, struct TArray<class ABuildingActor*>& OutExistingBuildings, bool& OutbSupportedByWorld, bool& bAllowStaticOverlap, bool& bPerformCollisionChecks); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddFloorActorToGrid (Underlying native function: K2_CanAddFloorActorToGrid 0x866f194)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddFloorActorToGrid(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& GridIndices, struct TEnumAsByte<EFortBuildingType>& FloorType, enum EStructuralFloorPosition& OutFloorPosition, int& OutFloorIdx, struct TArray<class ABuildingActor*>& OutExistingBuildings, bool& OutbSupportedByWorld, bool& bAllowStaticOverlap, bool& bPerformCollisionChecks); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddCenterCellActorToGrid (Underlying native function: K2_CanAddCenterCellActorToGrid 0x866eed4)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddCenterCellActorToGrid(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& GridIndices, struct TEnumAsByte<EFortBuildingType>& CenterCellType, int& OutHorizontalGridIdx, struct TArray<class ABuildingActor*>& OutExistingBuildings, bool& OutbStructurallySupported, bool& bAllowStaticOverlap, bool& bPerformCollisionChecks); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddBuildingActorToGrid (Underlying native function: K2_CanAddBuildingActorToGrid 0x866e7fc)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddBuildingActorToGrid(class UObject*& WorldContextObject, class ABuildingSMActor*& ActorToCheck, struct FVector& Location, struct FRotator& Rotation, bool& bMirrored, struct TArray<class ABuildingActor*>& ExistingBuildings, enum EFortBuildPreviewMarkerOptionalAdjustment& MarkerOptionalAdjustment, bool& bAllowStaticOverlap); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.IsWorldLocValid (Underlying native function: IsWorldLocValid 0x866e768)
	bool IsWorldLocValid(struct FVector& WorldLoc); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.IsBuildingActorValid (Underlying native function: IsBuildingActorValid 0x866e6e8)
	static bool IsBuildingActorValid(class ABuildingSMActor*& ActorToTest); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.IsBuildingActorStructurallySupported (Underlying native function: IsBuildingActorStructurallySupported 0x866e658)
	bool IsBuildingActorStructurallySupported(class ABuildingSMActor*& ActorToCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetWallActor (Underlying native function: GetWallActor 0x866e4bc)
	class ABuildingSMActor* GetWallActor(struct FBuildingSupportCellIndex& GridIndices, enum EStructuralWallPosition& WallPosition); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetLogicalBuildingGroundSupportedActors (Underlying native function: GetLogicalBuildingGroundSupportedActors 0x866e3d8)
	void GetLogicalBuildingGroundSupportedActors(int& LogicalIndex, struct TArray<class ABuildingSMActor*>& LogicalBuildingGroundSupportedActors); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetGridBox (Underlying native function: GetGridBox 0x866e318)
	struct FBox GetGridBox(struct FBuildingSupportCellIndex& CellIndex); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetFloorActor (Underlying native function: GetFloorActor 0x866e238)
	class ABuildingSMActor* GetFloorActor(struct FBuildingSupportCellIndex& GridIndices, enum EStructuralFloorPosition& FloorPosition); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetCenterCellActor (Underlying native function: GetCenterCellActor 0x866e18c)
	class ABuildingSMActor* GetCenterCellActor(struct FBuildingSupportCellIndex& GridIndices); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.CanAddBuildingActorClassToGrid (Underlying native function: CanAddBuildingActorClassToGrid 0x866dde8)
	struct TEnumAsByte<EFortStructuralGridQueryResults> CanAddBuildingActorClassToGrid(class UObject*& WorldContextObject, class UClass*& BuildingSMActorClassToCheck, struct FVector& Location, struct FRotator& Rotation, bool& bMirrored, struct TArray<class ABuildingActor*>& ExistingBuildings, enum EFortBuildPreviewMarkerOptionalAdjustment& MarkerOptionalAdjustment, bool& bAllowStaticOverlap); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.AreNeighborsConnected (Underlying native function: AreNeighborsConnected 0x866d560)
	bool AreNeighborsConnected(class ABuildingSMActor*& NeighborOne, struct FVector& NeighborOneLoc, struct FRotator& NeighborOneRot, bool& bNeighborOneMirrored, class ABuildingSMActor*& NeighborTwo, struct FVector& NeighborTwoLoc, struct FRotator& NeighborTwoRot, bool& bNeighborTwoMirrored); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.AreNeighboringBuildingActorsConnected (Underlying native function: AreNeighboringBuildingActorsConnected 0x866d49c)
	bool AreNeighboringBuildingActorsConnected(class ABuildingSMActor*& NeighborOne, class ABuildingSMActor*& NeighborTwo); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.AreGridIndicesValid (Underlying native function: AreGridIndicesValid 0x866d400)
	bool AreGridIndicesValid(struct FBuildingSupportCellIndex& GridIndices); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

