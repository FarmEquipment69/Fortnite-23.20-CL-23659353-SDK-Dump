// Class /Script/Water.WaterBodyComponent
// Size: 0x1520
class UWaterBodyComponent : public UPrimitiveComponent
{
	class UPhysicalMaterial* PhysicalMaterial; // 0x540 (0x8)
	float TargetWaveMaskDepth; // 0x548 (0x4)
	float MaxWaveHeightOffset; // 0x54c (0x4)
	struct FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x550 (0x700)
	struct FWaterCurveSettings CurveSettings; // 0xc50 (0x20)
	class UMaterialInterface* WaterMaterial; // 0xc70 (0x8)
	class UMaterialInterface* WaterHLODMaterial; // 0xc78 (0x8)
	class UMaterialInterface* WaterLODMaterial; // 0xc80 (0x8)
	class UMaterialInterface* UnderwaterPostProcessMaterial; // 0xc88 (0x8)
	class UMaterialInterface* WaterInfoMaterial; // 0xc90 (0x8)
	struct FWaterBodyHeightmapSettings WaterHeightmapSettings; // 0xc98 (0x80)
	float ShapeDilation; // 0xd18 (0x4)
	float CollisionHeightOffset; // 0xd1c (0x4)
	bool bAffectsLandscape; // 0xd20 (0x1)
	unsigned char unreflected_d21[0x3]; // 0xd21 (0x3) 
	int WaterBodyIndex; // 0xd24 (0x4)
	class UStaticMesh* WaterMeshOverride; // 0xd28 (0x8)
	bool bAlwaysGenerateWaterMeshTiles; // 0xd30 (0x1)
	unsigned char unreflected_d31[0x3]; // 0xd31 (0x3) 
	int OverlapMaterialPriority; // 0xd34 (0x4)
	class UWaterSplineMetadata* WaterSplineMetadata; // 0xd38 (0x8)
	class UMaterialInstanceDynamic* WaterMID; // 0xd40 (0x8)
	class UMaterialInstanceDynamic* WaterLODMID; // 0xd48 (0x8)
	class UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0xd50 (0x8)
	class UMaterialInstanceDynamic* WaterInfoMID; // 0xd58 (0x8)
	struct TArray<struct TWeakObjectPtr<class AWaterBodyIsland>> WaterBodyIslands; // 0xd60 (0x10)
	struct TArray<struct TWeakObjectPtr<class AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes; // 0xd70 (0x10)
	struct TWeakObjectPtr<class ALandscapeProxy> Landscape; // 0xd80 (0x8)
	struct TWeakObjectPtr<class AWaterZone> OwningWaterZone; // 0xd88 (0x28)
	struct TWeakObjectPtr<class AWaterZone> WaterZoneOverride; // 0xdb0 (0x28)
	unsigned char unreflected_dd8[0x8]; // 0xdd8 (0x8) 
	struct FPostProcessSettings CurrentPostProcessSettings; // 0xde0 (0x6e0)
	class UClass* WaterNavAreaClass; // 0x14c0 (0x8)
	unsigned char unreflected_14c8[0x50]; // 0x14c8 (0x50) 
	double FixedWaterDepth; // 0x1518 (0x8)

	/* Functions */

	// Function /Script/Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial (Underlying native function: SetWaterAndUnderWaterPostProcessMaterial 0x7121174)
	void SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface*& InWaterMaterial, class UMaterialInterface*& InUnderWaterPostProcessMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.OnWaterBodyChanged (Underlying native function: OnWaterBodyChanged 0x712102c)
	void OnWaterBodyChanged(bool& bShapeOrPositionChanged, bool& bWeightmapSettingsChanged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.GetWaterWaves (Underlying native function: GetWaterWaves 0x7120c50)
	class UWaterWavesBase* GetWaterWaves(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey (Underlying native function: GetWaterVelocityAtSplineInputKey 0x7120b08)
	float GetWaterVelocityAtSplineInputKey(float& InKey); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation (Underlying native function: GetWaterSurfaceInfoAtLocation 0x7120824)
	void GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector& OutWaterSurfaceLocation, struct FVector& OutWaterSurfaceNormal, struct FVector& OutWaterVelocity, float& OutWaterDepth, bool& bIncludeDepth); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetWaterSpline (Underlying native function: GetWaterSpline 0x71207fc)
	class UWaterSplineComponent* GetWaterSpline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetWaterMaterialInstance (Underlying native function: GetWaterMaterialInstance 0x290cf6c)
	class UMaterialInstanceDynamic* GetWaterMaterialInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.GetWaterMaterial (Underlying native function: GetWaterMaterial 0x7120788)
	class UMaterialInterface* GetWaterMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetWaterLODMaterialInstance (Underlying native function: GetWaterLODMaterialInstance 0x7120750)
	class UMaterialInstanceDynamic* GetWaterLODMaterialInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.GetWaterInfoMaterialInstance (Underlying native function: GetWaterInfoMaterialInstance 0x7120718)
	class UMaterialInstanceDynamic* GetWaterInfoMaterialInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.GetWaterBodyActor (Underlying native function: GetWaterBodyActor 0x212bd78)
	class AWaterBody* GetWaterBodyActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance (Underlying native function: GetUnderwaterPostProcessMaterialInstance 0x71206b8)
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.GetStandardRenderableComponents (Underlying native function: GetStandardRenderableComponents 0x7120640)
	struct TArray<class UPrimitiveComponent*> GetStandardRenderableComponents(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance (Underlying native function: GetRiverToOceanTransitionMaterialInstance 0x1a3f358)
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // (Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance (Underlying native function: GetRiverToLakeTransitionMaterialInstance 0x1a3f330)
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // (Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBodyComponent.GetMaxWaveHeight (Underlying native function: GetMaxWaveHeight 0x712050c)
	float GetMaxWaveHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetIslands (Underlying native function: GetIslands 0x712026c)
	struct TArray<class AWaterBodyIsland*> GetIslands(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetExclusionVolumes (Underlying native function: GetExclusionVolumes 0x71200bc)
	struct TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBodyComponent.GetCollisionComponents (Underlying native function: GetCollisionComponents 0x711ff5c)
	struct TArray<class UPrimitiveComponent*> GetCollisionComponents(bool& bInOnlyEnabledComponents); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

