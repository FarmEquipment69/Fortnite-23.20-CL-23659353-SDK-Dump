// Class /Script/FortniteGame.FortWaterInteractionComponent
// Size: 0x270
class UFortWaterInteractionComponent : public UActorComponent
{
	unsigned char bIsEnabled; // 0xa0 (0x1)
	unsigned char bTickComponentForces; // 0xa0 (0x1)
	unsigned char bIncludeWaves; // 0xa0 (0x1)
	unsigned char bAllowCachedDataInLargeBodies; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	float WaterVelocityForceMultiplier; // 0xa4 (0x4)
	float WaterVelocityShallowDepth; // 0xa8 (0x4)
	float WaterVelocityShallowMultiplier; // 0xac (0x4)
	float WaterVelocityShoreBias; // 0xb0 (0x4)
	float BuoyancyFactor; // 0xb4 (0x4)
	float UpBuoyancyDrag; // 0xb8 (0x4)
	float UpBuoyancyDrag2; // 0xbc (0x4)
	float DownBuoyancyDrag; // 0xc0 (0x4)
	float DownBuoyancyDrag2; // 0xc4 (0x4)
	float HorizontalDrag; // 0xc8 (0x4)
	float HorizontalDrag2; // 0xcc (0x4)
	struct FMulticastInlineDelegate OnEnterWaterEvent; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnExitWaterEvent; // 0xe0 (0x10)
	unsigned char padding_f0[0x180]; // 0xf0 (0x180)

	/* Functions */

	// Function /Script/FortniteGame.FortWaterInteractionComponent.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterInteractionComponent.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterInteractionComponent.IsInWater (Underlying native function: IsInWater 0x24c62c0)
	bool IsInWater(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterInteractionComponent.IsEnabled (Underlying native function: IsEnabled 0x8862778)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterInteractionComponent.GetLastWaterSurfaceInfo (Underlying native function: GetLastWaterSurfaceInfo 0x19811c8)
	void GetLastWaterSurfaceInfo(struct FVector& WaterPlaneLocation, struct FVector& WaterPlaneNormal, struct FVector& WaterSurfacePosition, float& WaterDepth, int& WaterBodyIdx, struct FVector& WaterVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWaterInteractionComponent.GetCurrentWaterBody (Underlying native function: GetCurrentWaterBody 0x871a794)
	class AFortWaterBodyActor* GetCurrentWaterBody(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

