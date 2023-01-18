// Class /Script/Water.WaterSubsystem
// Size: 0x110
class UWaterSubsystem : public UTickableWorldSubsystem
{
	unsigned char unreflected_40[0x38]; // 0x40 (0x38) 
	class ABuoyancyManager* BuoyancyManager; // 0x78 (0x8)
	struct FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x90 (0x10)
	class UStaticMesh* DefaultRiverMesh; // 0xa0 (0x8)
	class UStaticMesh* DefaultLakeMesh; // 0xa8 (0x8)
	unsigned char unreflected_b0[0x28]; // 0xb0 (0x28) 
	class UMaterialParameterCollection* MaterialParameterCollection; // 0xd8 (0x8)
	unsigned char padding_e0[0x30]; // 0xe0 (0x30)

	/* Functions */

	// Function /Script/Water.WaterSubsystem.SetOceanFloodHeight (Underlying native function: SetOceanFloodHeight 0x71210f0)
	void SetOceanFloodHeight(float& InFloodHeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterSubsystem.PrintToWaterLog (Underlying native function: PrintToWaterLog 0x2ab865c)
	void PrintToWaterLog(struct FString& message, bool& bWarning); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Water.WaterSubsystem.IsWaterRenderingEnabled (Underlying native function: IsWaterRenderingEnabled 0x7120cc8)
	bool IsWaterRenderingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.IsUnderwaterPostProcessEnabled (Underlying native function: IsUnderwaterPostProcessEnabled 0x7120cac)
	bool IsUnderwaterPostProcessEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.IsShallowWaterSimulationEnabled (Underlying native function: IsShallowWaterSimulationEnabled 0x2e39584)
	bool IsShallowWaterSimulationEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.GetWaterTimeSeconds (Underlying native function: GetWaterTimeSeconds 0x7120a44)
	float GetWaterTimeSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.GetSmoothedWorldTimeSeconds (Underlying native function: GetSmoothedWorldTimeSeconds 0x7120610)
	float GetSmoothedWorldTimeSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize (Underlying native function: GetShallowWaterSimulationRenderTargetSize 0x47a9730)
	static int GetShallowWaterSimulationRenderTargetSize(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxImpulseForces (Underlying native function: GetShallowWaterMaxImpulseForces 0x2dcc58c)
	static int GetShallowWaterMaxImpulseForces(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxDynamicForces (Underlying native function: GetShallowWaterMaxDynamicForces 0x280c65c)
	static int GetShallowWaterMaxDynamicForces(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Water.WaterSubsystem.GetOceanTotalHeight (Underlying native function: GetOceanTotalHeight 0x7120574)
	float GetOceanTotalHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.GetOceanFloodHeight (Underlying native function: GetOceanFloodHeight 0x712055c)
	float GetOceanFloodHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.GetOceanBaseHeight (Underlying native function: GetOceanBaseHeight 0x7120534)
	float GetOceanBaseHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.WaterSubsystem.GetCameraUnderwaterDepth (Underlying native function: GetCameraUnderwaterDepth 0x711ff44)
	float GetCameraUnderwaterDepth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

