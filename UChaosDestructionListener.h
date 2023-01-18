// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x550
class UChaosDestructionListener : public USceneComponent
{
	unsigned char bIsCollisionEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char bIsBreakingEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char bIsTrailingEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char bIsRemovalEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x2a4 (0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2bc (0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2d4 (0x18)
	struct FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x2ec (0x10)
	unsigned char unreflected_2fc[0x4]; // 0x2fc (0x4) 
	struct TSet<class AChaosSolverActor*> ChaosSolverActors; // 0x300 (0x50)
	struct TSet<class AGeometryCollectionActor*> GeometryCollectionActors; // 0x350 (0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x3a0 (0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x3b0 (0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x3c0 (0x10)
	struct FMulticastInlineDelegate OnRemovalEvents; // 0x3d0 (0x10)
	unsigned char padding_3e0[0x170]; // 0x3e0 (0x170)

	/* Functions */

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents (Underlying native function: SortTrailingEvents 0x99ce588)
	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum EChaosTrailingSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents (Underlying native function: SortRemovalEvents 0x99ce488)
	void SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, enum EChaosRemovalSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents (Underlying native function: SortCollisionEvents 0x99ce388)
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum EChaosCollisionSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents (Underlying native function: SortBreakingEvents 0x99ce288)
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum EChaosBreakingSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings (Underlying native function: SetTrailingEventRequestSettings 0x99ce1dc)
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled (Underlying native function: SetTrailingEventEnabled 0x99ce148)
	void SetTrailingEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings (Underlying native function: SetRemovalEventRequestSettings 0x99cdd0c)
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled (Underlying native function: SetRemovalEventEnabled 0x99cdc78)
	void SetRemovalEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings (Underlying native function: SetCollisionEventRequestSettings 0x99cda1c)
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled (Underlying native function: SetCollisionEventEnabled 0x99cd98c)
	void SetCollisionEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings (Underlying native function: SetBreakingEventRequestSettings 0x99cd8e0)
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled (Underlying native function: SetBreakingEventEnabled 0x99cd84c)
	void SetBreakingEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor (Underlying native function: RemoveGeometryCollectionActor 0x99cd740)
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor*& GeometryCollectionActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor (Underlying native function: RemoveChaosSolverActor 0x71a663c)
	void RemoveChaosSolverActor(class AChaosSolverActor*& ChaosSolverActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening (Underlying native function: IsEventListening 0x99cd58c)
	bool IsEventListening(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor (Underlying native function: AddGeometryCollectionActor 0x99cc8cc)
	void AddGeometryCollectionActor(class AGeometryCollectionActor*& GeometryCollectionActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor (Underlying native function: AddChaosSolverActor 0x71a663c)
	void AddChaosSolverActor(class AChaosSolverActor*& ChaosSolverActor); // (Final | Native | Public | BlueprintCallable)
};

