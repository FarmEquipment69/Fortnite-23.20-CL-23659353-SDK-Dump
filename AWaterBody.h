// Class /Script/Water.WaterBody
// Size: 0x2b8
class AWaterBody : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UWaterSplineComponent* SplineComp; // 0x290 (0x8)
	class UWaterSplineMetadata* WaterSplineMetadata; // 0x298 (0x8)
	class UWaterBodyComponent* WaterBodyComponent; // 0x2a0 (0x8)
	int WaterBodyIndex; // 0x2a8 (0x4)
	enum EWaterBodyType WaterBodyType; // 0x2ac (0x1)
	unsigned char unreflected_2ad[0x3]; // 0x2ad (0x3) 
	class UWaterWavesBase* WaterWaves; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/Water.WaterBody.SetWaterWaves (Underlying native function: SetWaterWaves 0x7121668)
	void SetWaterWaves(class UWaterWavesBase*& InWaterWaves); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBody.SetWaterMaterial (Underlying native function: SetWaterMaterial 0x71215d8)
	void SetWaterMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBody.OnWaterBodyChanged (Underlying native function: OnWaterBodyChanged 0x7120ee0)
	void OnWaterBodyChanged(bool& bShapeOrPositionChanged, bool& bWeightmapSettingsChanged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey (Underlying native function: GetWaterVelocityVectorAtSplineInputKey 0x7120ba4)
	struct FVector GetWaterVelocityVectorAtSplineInputKey(float& InKey); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBody.GetWaterVelocityAtSplineInputKey (Underlying native function: GetWaterVelocityAtSplineInputKey 0x7120a6c)
	float GetWaterVelocityAtSplineInputKey(float& InKey); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBody.GetWaterSpline (Underlying native function: GetWaterSpline 0x71207e4)
	class UWaterSplineComponent* GetWaterSpline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBody.GetWaterMaterialInstance (Underlying native function: GetWaterMaterialInstance 0x71207a0)
	class UMaterialInstanceDynamic* GetWaterMaterialInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBody.GetWaterBodyType (Underlying native function: GetWaterBodyType 0x71206f0)
	enum EWaterBodyType GetWaterBodyType(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBody.GetWaterBodyComponent (Underlying native function: GetWaterBodyComponent 0x27fec44)
	class UWaterBodyComponent* GetWaterBodyComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBody.GetRiverToOceanTransitionMaterialInstance (Underlying native function: GetRiverToOceanTransitionMaterialInstance 0x71205e0)
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBody.GetRiverToLakeTransitionMaterialInstance (Underlying native function: GetRiverToLakeTransitionMaterialInstance 0x71205b0)
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterBody.GetIslands (Underlying native function: GetIslands 0x7120130)
	struct TArray<class AWaterBodyIsland*> GetIslands(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBody.GetExclusionVolumes (Underlying native function: GetExclusionVolumes 0x712004c)
	struct TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterBody.GetAudioIntensityAtSplineInputKey (Underlying native function: GetAudioIntensityAtSplineInputKey 0x711fda8)
	float GetAudioIntensityAtSplineInputKey(float& InKey); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

