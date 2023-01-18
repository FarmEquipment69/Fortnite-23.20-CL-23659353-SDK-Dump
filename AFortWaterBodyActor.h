// Class /Script/FortniteGame.FortWaterBodyActor
// Size: 0x3a8
class AFortWaterBodyActor : public AWaterBody
{
	unsigned char unreflected_2b8[0x10]; // 0x2b8 (0x10) 
	struct TArray<class AFortAthenaVehicle*> OverlappingVehicles; // 0x2c8 (0x10)
	struct TArray<class AFortPlayerPawn*> OverlappingPlayers; // 0x2d8 (0x10)
	struct FMulticastInlineDelegate OnPawnEnterFortWaterBodyDelegate; // 0x2e8 (0x10)
	struct FMulticastInlineDelegate OnPawnExitFortWaterBodyDelegate; // 0x2f8 (0x10)
	struct FMulticastInlineDelegate OnVehicleEnterFortWaterBodyDelegate; // 0x308 (0x10)
	struct FMulticastInlineDelegate OnVehicleExitFortWaterBodyDelegate; // 0x318 (0x10)
	struct FScalableFloat WaterOverrideMaxCharacterForce; // 0x328 (0x28)
	int WaterPriority; // 0x350 (0x4)
	unsigned char padding_354[0x54]; // 0x354 (0x54)

	/* Functions */

	// Function /Script/FortniteGame.FortWaterBodyActor.SetWaterBodyType (Underlying native function: SetWaterBodyType 0x8865d20)
	void SetWaterBodyType(enum EWaterBodyType& InType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyActor.SetSwampLocationAndRadius (Underlying native function: SetSwampLocationAndRadius 0x8865668)
	void SetSwampLocationAndRadius(struct FVector& InPosition, float& InRadius); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyActor.OnVehicleExitedWaterBody (Has no native function)
	void OnVehicleExitedWaterBody(class AFortAthenaVehicle*& Vehicle); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyActor.OnVehicleEnteredWaterBody (Has no native function)
	void OnVehicleEnteredWaterBody(class AFortAthenaVehicle*& Vehicle); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyActor.OnReceivedBulletImpact (Has no native function)
	void OnReceivedBulletImpact(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyActor.OnPlayerExitedWaterBody (Has no native function)
	void OnPlayerExitedWaterBody(class AFortPlayerPawn*& Player, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyActor.OnPlayerEnteredWaterBody (Has no native function)
	void OnPlayerEnteredWaterBody(class AFortPlayerPawn*& Player, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyActor.GetWaterSurfaceInfoStruct (Underlying native function: GetWaterSurfaceInfoStruct 0x22c0968)
	void GetWaterSurfaceInfoStruct(struct FWaterSurfaceInfo& OutWaterSurfaceInfo, struct FVector& QueryLocation, bool& bIncludeDepth, bool& bIncludeWaves, bool& bSimpleWaves); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortWaterBodyActor.GetWaterSurfaceInfo (Underlying native function: GetWaterSurfaceInfo 0x886235c)
	void GetWaterSurfaceInfo(struct FVector& QueryLocation, struct FVector& WaterPlaneLocation, struct FVector& WaterPlaneNormal, struct FVector& WaterSurfacePosition, float& WaterDepth, int& WaterBodyIdx, struct FVector& WaterVelocity, bool& bIncludeDepth, bool& bIncludeWaves, bool& bSimpleWaves); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

