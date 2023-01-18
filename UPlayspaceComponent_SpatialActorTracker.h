// Class /Script/FortniteGame.PlayspaceComponent_SpatialActorTracker
// Size: 0x178
class UPlayspaceComponent_SpatialActorTracker : public UFortPlayspaceComponent
{
	bool bAlwaysBroadcastPerActorAdded; // 0xf8 (0x1)
	bool bCheckOverlapsOnStartup; // 0xf9 (0x1)
	bool bSceneQueryOnStartup; // 0xfa (0x1)
	enum ESceneQueryShape SceneQueryShape; // 0xfb (0x1)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> SceneQueryObjectTypes; // 0x100 (0x10)
	bool bEnableReScanTimer; // 0x110 (0x1)
	unsigned char unreflected_111[0x3]; // 0x111 (0x3) 
	float ReScanFrequencyInSeconds; // 0x114 (0x4)
	struct TSet<class AActor*> TrackedActors; // 0x118 (0x50)
	unsigned char padding_168[0x10]; // 0x168 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_SpatialActorTracker.HandleTrackedActorEndPlay (Underlying native function: HandleTrackedActorEndPlay 0x8dfde00)
	void HandleTrackedActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)

	// Function /Script/FortniteGame.PlayspaceComponent_SpatialActorTracker.GetTrackedActors (Underlying native function: GetTrackedActors 0x8dfd7f4)
	struct TSet<class AActor*> GetTrackedActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlayspaceComponent_SpatialActorTracker.GetNumTrackedActors (Underlying native function: GetNumTrackedActors 0x8dfd1d8)
	int GetNumTrackedActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlayspaceComponent_SpatialActorTracker.ActorExitVolume (Underlying native function: ActorExitVolume 0x8dfbf64)
	void ActorExitVolume(class AActor*& OverlapingVolume, class AActor*& LeavingActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.PlayspaceComponent_SpatialActorTracker.ActorEnteredVolume (Underlying native function: ActorEnteredVolume 0x8dfbea0)
	void ActorEnteredVolume(class AActor*& OverlapingVolume, class AActor*& EnteringActor); // (Final | 0x00000002 | Native | Public)
};

