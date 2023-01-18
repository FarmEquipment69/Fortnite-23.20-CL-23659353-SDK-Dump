// Class /Script/FortniteGame.FortTrack
// Size: 0x1078
class AFortTrack : public ABuildingProp
{
	struct FMulticastInlineDelegate OnTrackGraphChanged; // 0xee8 (0x10)
	struct FText ToggleSwitchText; // 0xef8 (0x18)
	float ToggleInteractTime; // 0xf10 (0x4)
	unsigned char unreflected_f14[0x4]; // 0xf14 (0x4) 
	class UStaticMesh* TrackPieceMeshesByType[0x5]; // 0xf18 (0x8) (ARRAY) 
	bool bUseFloorMesh; // 0xf40 (0x1)
	unsigned char unreflected_f41[0x7]; // 0xf41 (0x7) 
	class UStaticMesh* TrackFloorMeshesByVerticality[0x3]; // 0xf48 (0x8) (ARRAY) 
	struct TArray<struct FTrackConnectorMeshConfig> ConnectorMeshConfigs; // 0xf60 (0x10)
	class AFortTrack* NeighborsByDirection[0x4]; // 0xf70 (0x8) (ARRAY) 
	int SwitchState; // 0xf90 (0x4)
	int ConfigurationIdx; // 0xf94 (0x4)
	struct FCollisionResponseContainer FloorCollisionResponseContainer; // 0xf98 (0x20)
	class UStaticMeshComponent* TrackMeshComp; // 0xfb8 (0x8)
	class UStaticMeshComponent* TrackFloorMeshComp; // 0xfc0 (0x8)
	class UStaticMeshComponent* ConnectorMeshCompsByDirection[0x4]; // 0xfc8 (0x8) (ARRAY) 
	class UBoxComponent* PlacementCollision1; // 0xfe8 (0x8)
	class UBoxComponent* PlacementCollision2; // 0xff0 (0x8)
	class USplineComponent* SplineComp1; // 0xff8 (0x8)
	class USplineComponent* SplineComp2; // 0x1000 (0x8)
	class USceneComponent* SwitchCompBase; // 0x1008 (0x8)
	class UPrimitiveComponent* SwitchComp; // 0x1010 (0x8)
	unsigned char padding_1018[0x60]; // 0x1018 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.FortTrack.OnSwitchStateChanged (Has no native function)
	void OnSwitchStateChanged(int& NewSwitchState, int& OldSwitchState, int& NumSwitchStates); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrack.OnRep_SwitchState (Underlying native function: OnRep_SwitchState 0x8f7d5f0)
	void OnRepSwitchState(); // (Native | Protected)

	// Function /Script/FortniteGame.FortTrack.OnRep_NeighborsByDirection (Underlying native function: OnRep_NeighborsByDirection 0x8f7d5d8)
	void OnRepNeighborsByDirection(); // (Native | Protected)

	// Function /Script/FortniteGame.FortTrack.OnRep_ConfigurationIdx (Underlying native function: OnRep_ConfigurationIdx 0x862bf00)
	void OnRepConfigurationIdx(); // (Native | Protected)

	// Function /Script/FortniteGame.FortTrack.OnConfigurationChanged (Has no native function)
	void OnConfigurationChanged(int& NewConfigurationIdx, int& OldConfigurationIdx); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrack.IsConnectedToTrackList (Underlying native function: IsConnectedToTrackList 0x8f7d458)
	bool IsConnectedToTrackList(struct TArray<class AFortTrack*>& TargetTracks); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.IsConnectedToTrack (Underlying native function: IsConnectedToTrack 0x8f7d3c8)
	bool IsConnectedToTrack(class AFortTrack*& TargetTrack); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.InitializeTrack (Underlying native function: InitializeTrack 0x8f7d230)
	void InitializeTrack(class UPrimitiveComponent*& InSwitchComp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetSplineFromPositionAndOrientation (Underlying native function: GetSplineFromPositionAndOrientation 0x8f7c528)
	void GetSplineFromPositionAndOrientation(struct FVector& InLocation, struct FRotator& InRotation, class USplineComponent*& OutSpline, float& OutDistanceAlongSpline, bool& OutReverseDirection); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetSplineFromIncomingNeighbor (Underlying native function: GetSplineFromIncomingNeighbor 0x8f7c414)
	void GetSplineFromIncomingNeighbor(class AFortTrack*& InNeighbor, class USplineComponent*& OutSpline, bool& OutReverseDirection); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetPathDistanceToTrack (Underlying native function: GetPathDistanceToTrack 0x8f7c0bc)
	float GetPathDistanceToTrack(class AFortTrack*& TargetTrack, class USplineComponent*& InCurrentSpline, float& CurrentDistanceAlongSpline, bool& InReverseDirection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetOutgoingNeighborFromSpline (Underlying native function: GetOutgoingNeighborFromSpline 0x8f7bfb0)
	void GetOutgoingNeighborFromSpline(class USplineComponent*& InSpline, bool& InReverseDirection, class AFortTrack*& OutNeighbor); // (Native | Public | HasOutParms | BlueprintCallable)
};

