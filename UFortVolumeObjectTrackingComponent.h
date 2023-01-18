// Class /Script/FortniteGame.FortVolumeObjectTrackingComponent
// Size: 0x660
class UFortVolumeObjectTrackingComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	class AFortVolume* ParentVolume; // 0xd0 (0x8)
	struct FVolumePerformanceMetrics VolumePerformanceMetrics; // 0xd8 (0x34)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct FMulticastInlineDelegate OnVolumePerformanceMetricsUpdatedEvent; // 0x110 (0x10)
	struct FFortCreativeClassInstanceTracker TransientTracker; // 0x120 (0xc0)
	struct FFortCreativeBudgetTracker BudgetTracker; // 0x1e0 (0x2c0)
	struct FFortCreativeClassInstanceTracker ClassTracker; // 0x4a0 (0xc0)
	bool bHeatmapEnabled; // 0x560 (0x1)
	bool bHeatmapIsDirty; // 0x561 (0x1)
	unsigned char unreflected_562[0x2]; // 0x562 (0x2) 
	int ObjectTrackingHeatmapSize; // 0x564 (0x4)
	struct TArray<unsigned char> ObjectTrackingHeatmapHighPrecision; // 0x568 (0x10)
	struct TArray<unsigned char> ObjectTrackingOverBudgetHeatmap; // 0x578 (0x10)
	unsigned char unreflected_588[0x4]; // 0x588 (0x4) 
	float TargetUpdateTime; // 0x58c (0x4)
	float CreativeHeatmapThermometerInfluenceDistanceMultiplier; // 0x590 (0x4)
	struct FFortCreativeGridCellBudget CreativeHeatmapThermometerBudget; // 0x594 (0xc)
	float CreativeHeatmapThermometerCellSize; // 0x5a0 (0x4)
	unsigned char unreflected_5a4[0xac]; // 0x5a4 (0xac) 
	struct TArray<struct FCreativeMultiSelectedActorsInfo> MultiSelectedActors; // 0x650 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.UseBudgetGridThermometer (Underlying native function: UseBudgetGridThermometer 0x8b67650)
	bool UseBudgetGridThermometer(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.UpdatePreviewLocation (Underlying native function: UpdatePreviewLocation 0x82b4b18)
	void UpdatePreviewLocation(class AFortCreativeHeatmapThermometerPreview*& PreviewActor, struct FVector& Location); // (Final | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.UpdateActor (Underlying native function: UpdateActor 0x82b4b18)
	void UpdateActor(class AActor*& Actor, struct FVector& Location); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.RemoveActorWithInterface (Underlying native function: RemoveActorWithInterface 0x8b65d40)
	void RemoveActorWithInterface(class AActor*& Actor, struct TScriptInterface<class IFortSpatialGameplayInterface>& GameplayInterface); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.RemoveActorFromSelectionPreview (Underlying native function: RemoveActorFromSelectionPreview 0x81210cc)
	void RemoveActorFromSelectionPreview(class AActor*& Actor, int& PlayerId); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.RemoveActor (Underlying native function: RemoveActor 0x8b66cb4)
	void RemoveActor(class AActor*& Actor, class UActorComponent*& ActorComponent, class APawn*& InstigatorPawn, class AFortVolume*& Volume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.OnVolumePerformanceMetricsReplicated (Underlying native function: OnVolumePerformanceMetricsReplicated 0x8b66bd0)
	void OnVolumePerformanceMetricsReplicated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.OnRep_HeatmapSize (Underlying native function: OnRep_HeatmapSize 0x8b66b2c)
	void OnRepHeatmapSize(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.OnRep_HeatmapEnabled (Underlying native function: OnRep_HeatmapEnabled 0x8b66b00)
	void OnRepHeatmapEnabled(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.OnRep_BudgetTracker (Underlying native function: OnRep_BudgetTracker 0x8b66ad0)
	void OnRepBudgetTracker(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.On_RepObjectTrackingHeatmap (Underlying native function: On_RepObjectTrackingHeatmap 0x8b66c54)
	void OnRepObjectTrackingHeatmap(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.IsHeatmapEnabled (Underlying native function: IsHeatmapEnabled 0x8b666f0)
	bool IsHeatmapEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.DisplayMaxMemoryValueThermometer (Underlying native function: DisplayMaxMemoryValueThermometer 0x8b66118)
	bool DisplayMaxMemoryValueThermometer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.CalculateHeatmap (Underlying native function: CalculateHeatmap 0x26daa0c)
	void CalculateHeatmap(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.AddActorToSelectionPreview (Underlying native function: AddActorToSelectionPreview 0x81210cc)
	void AddActorToSelectionPreview(class AActor*& Actor, int& PlayerId); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeObjectTrackingComponent.AddActorAtLocation (Underlying native function: AddActorAtLocation 0x82b4b18)
	void AddActorAtLocation(class AActor*& Actor, struct FVector& Location); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults)
};

