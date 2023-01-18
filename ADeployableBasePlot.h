// Class /Script/FortniteGame.DeployableBasePlot
// Size: 0xc70
class ADeployableBasePlot : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x8]; // 0x9d8 (0x8) 
	struct FUniqueNetIdRepl OccupantNetID; // 0x9e0 (0x30)
	struct FFortCloudSaveInfo OccupantNextCloudSaveInfo; // 0xa10 (0x18)
	class UFortDeployableBaseRecord* OccupantDeployableBaseRecord; // 0xa28 (0x8)
	class UBoxComponent* BuildableSpaceComponent; // 0xa30 (0x8)
	class UBoxComponent* SavableSpaceComponent; // 0xa38 (0x8)
	class UBoxComponent* EntirePlotSpaceComponent; // 0xa40 (0x8)
	class USceneComponent* SpawnOffsetComponent; // 0xa48 (0x8)
	class UBoxComponent* BuildableAreasArray[0x3]; // 0xa50 (0x8) (ARRAY) 
	struct TWeakObjectPtr<class UClass> DeployableBaseCoreClass; // 0xa68 (0x28)
	class ADeployableBaseCore* DeployableBaseCore; // 0xa90 (0x8)
	unsigned char bDirty; // 0xa98 (0x1)
	unsigned char bDirtiedSinceLastWriteToBuffer; // 0xa98 (0x1)
	unsigned char bCloudFileSavedSinceLastCloudItemUpdate; // 0xa98 (0x1)
	unsigned char unreflected_a99[0x3]; // 0xa99 (0x3) 
	enum EDeployableBaseBuildingState CurrentBuildingState; // 0xa9c (0x1)
	enum EDeployableBaseBuildingState GoalBuildingState; // 0xa9d (0x1)
	unsigned char unreflected_a9e[0x12]; // 0xa9e (0x12) 
	struct FMulticastInlineDelegate OnOccupantIdChanged; // 0xab0 (0x10)
	struct FMulticastInlineDelegate OnDeployableBaseCoreCreated; // 0xac0 (0x10)
	struct FMulticastInlineDelegate OnDeployableBaseCoreDestroyed; // 0xad0 (0x10)
	struct FMulticastInlineDelegate OnDeployableBasePlotSpacesChanged; // 0xae0 (0x10)
	struct TArray<class AFortDeployableBasePickup*> OutstandingAssociatedPickups; // 0xaf0 (0x10)
	class AFortInventory* PlotInventory; // 0xb00 (0x8)
	unsigned char unreflected_b08[0x18]; // 0xb08 (0x18) 
	int DeferredActorIdxToResumeAt; // 0xb20 (0x4)
	int NumActorsFromRecordDestroyed; // 0xb24 (0x4)
	struct FIntVector BuildableSpaceExpansionVector; // 0xb28 (0xc)
	int MaxActorsToCreatePerBuildingCall; // 0xb34 (0x4)
	int MaxActorsToDestroyPerDestroyCall; // 0xb38 (0x4)
	float DelayBetweenActorRecordBuilding; // 0xb3c (0x4)
	float DelayBetweenActorRecordDestroying; // 0xb40 (0x4)
	unsigned char unreflected_b44[0x4]; // 0xb44 (0x4) 
	class AFortPlayerStart* PlayerStart; // 0xb48 (0x8)
	class UClass* ConstructionTimeEffect; // 0xb50 (0x8)
	struct TArray<struct FDeferredActorData> DeferredConstructionActors; // 0xb58 (0x10)
	unsigned char unreflected_b68[0x8]; // 0xb68 (0x8) 
	struct FBox BuildableAreasStructuralSupportBoxesArray[0x3]; // 0xb70 (0x38) (ARRAY) 
	unsigned char padding_c18[0x58]; // 0xc18 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.DeployableBasePlot.SetContextComponent (Underlying native function: SetContextComponent 0x862eb70)
	void SetContextComponent(class UPrimitiveComponent*& ContextComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.DeployableBasePlot.OnRep_OccupantNetID (Underlying native function: OnRep_OccupantNetID 0x862e074)
	void OnRepOccupantNetID(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.DeployableBasePlot.OnRep_CurrentBuildingState (Underlying native function: OnRep_CurrentBuildingState 0x862dd30)
	void OnRepCurrentBuildingState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.DeployableBasePlot.OnRep_BuildableSpaceExpansionVector (Underlying native function: OnRep_BuildableSpaceExpansionVector 0x862dd1c)
	void OnRepBuildableSpaceExpansionVector(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.DeployableBasePlot.OnCurrentBuildingStateSet (Underlying native function: OnCurrentBuildingStateSet 0x862d5e4)
	void OnCurrentBuildingStateSet(enum EDeployableBaseBuildingState& InCurrentBuildingState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.DeployableBasePlot.OnBuildingStateTransition (Underlying native function: OnBuildingStateTransition 0x862d51c)
	void OnBuildingStateTransition(enum EDeployableBaseBuildingState& InPreviousState, enum EDeployableBaseBuildingState& InCurrentState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.DeployableBasePlot.IsOccupied (Underlying native function: IsOccupied 0x862d114)
	bool IsOccupied(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DeployableBasePlot.IsOccupant (Underlying native function: IsOccupant 0x862d024)
	bool IsOccupant(struct FUniqueNetIdRepl& UserId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DeployableBasePlot.IsBuildingActorWithinBuildableSpace (Underlying native function: IsBuildingActorWithinBuildableSpace 0x862ce7c)
	bool IsBuildingActorWithinBuildableSpace(class ABuildingActor*& ActorToCheck, struct FVector& GridLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DeployableBasePlot.HandleBuildingStateTransition (Underlying native function: HandleBuildingStateTransition 0x862ca9c)
	void HandleBuildingStateTransition(enum EDeployableBaseBuildingState& InPreviousState, enum EDeployableBaseBuildingState& InCurrentState); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.DeployableBasePlot.GetPlayerStart (Underlying native function: GetPlayerStart 0x862c724)
	class AFortPlayerStart* GetPlayerStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.DeployableBasePlot.GetOccupantNetID (Underlying native function: GetOccupantNetID 0x862c708)
	struct FUniqueNetIdRepl GetOccupantNetID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DeployableBasePlot.GetNumOfItemsInPlot (Underlying native function: GetNumOfItemsInPlot 0x862c68c)
	int GetNumOfItemsInPlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

