// BlueprintGeneratedClass /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C
// Size: 0x338
class ALandscapeWaterInfo_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x290 (0x8)
	double FloodWaterLevel; // 0x298 (0x8)
	class UTexture2D* GameTextureWaterVelocityandHeight; // 0x2a0 (0x8)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	struct FTransform LSTransform; // 0x2b0 (0x60)
	struct FIntPoint* LSRTRes; // 0x310 (0x8)
	struct FVector2D QuadSize; // 0x318 (0x10)
	bool UseTerrainVelocityandHeightTexture; // 0x328 (0x1)
	unsigned char unreflected_329[0x7]; // 0x329 (0x7) 
	class UMaterialInstanceDynamic* ExternalWaterMIDToUpdate; // 0x330 (0x8)

	/* Functions */

	// Function /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level (Has no native function)
	void SetFloodWaterLevel(); // (BlueprintCallable | BlueprintEvent)

	// Function /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo (Has no native function)
	void ExecuteUbergraphLandscapeWaterInfo(int& EntryPoint, class UWaterSubsystem*& CallFuncGetWorldSubsystemReturnValue, float& CallFuncSetOceanFloodHeightInFloodHeightImplicitCast); // (Final | 0x00008000)
};

