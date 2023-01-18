// Class /Script/Water.BuoyancyComponent
// Size: 0x208
class UBuoyancyComponent : public UActorComponent
{
	struct TArray<struct FSphericalPontoon> Pontoons; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnExitedWaterDelegate; // 0xc0 (0x10)
	struct FBuoyancyData BuoyancyData; // 0xd0 (0x90)
	struct TArray<class UWaterBodyComponent*> CurrentWaterBodyComponents; // 0x160 (0x10)
	class UPrimitiveComponent* SimulatingComponent; // 0x170 (0x8)
	unsigned char padding_178[0x90]; // 0x178 (0x90)

	/* Functions */

	// Function /Script/Water.BuoyancyComponent.OnPontoonExitedWater (Underlying native function: OnPontoonExitedWater 0x7120de4)
	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Water.BuoyancyComponent.OnPontoonEnteredWater (Underlying native function: OnPontoonEnteredWater 0x7120ce8)
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Water.BuoyancyComponent.IsOverlappingWaterBody (Underlying native function: IsOverlappingWaterBody 0x2e39ab0)
	bool IsOverlappingWaterBody(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.BuoyancyComponent.IsInWaterBody (Underlying native function: IsInWaterBody 0x7120c90)
	bool IsInWaterBody(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Water.BuoyancyComponent.GetLastWaterSurfaceInfo (Underlying native function: GetLastWaterSurfaceInfo 0x71202e0)
	void GetLastWaterSurfaceInfo(struct FVector& OutWaterPlaneLocation, struct FVector& OutWaterPlaneNormal, struct FVector& OutWaterSurfacePosition, float& OutWaterDepth, int& OutWaterBodyIdx, struct FVector& OutWaterVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Water.BuoyancyComponent.GetCurrentWaterBodyComponents (Underlying native function: GetCurrentWaterBodyComponents 0x7120030)
	struct TArray<class UWaterBodyComponent*> GetCurrentWaterBodyComponents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

