// Class /Script/FortniteGame.FortAthenaMapInfo
// Size: 0x998
class AFortAthenaMapInfo : public AActor
{
	struct FScalableFloat GoldenPoiPercents; // 0x288 (0x28)
	struct FScalableFloat GoldenPoiPercentOfSelectedAtBusPathEnd; // 0x2b0 (0x28)
	struct FScalableFloat GoldenPoiDistanceAroundBusPathEnd; // 0x2d8 (0x28)
	struct FScalableFloat GoldenPoiDistanceMustBeAwayFromBusPath; // 0x300 (0x28)
	struct TArray<struct FFortTreasureChestSpawnInfo> TreasureChestSpawnInfos; // 0x328 (0x10)
	struct TArray<struct FFortAmmoBoxSpawnInfo> AmmoBoxSpawnInfos; // 0x338 (0x10)
	struct TArray<struct FBuildingGameplayActorSpawnDetails> BuildingGameplayActorSpawnDetails; // 0x348 (0x10)
	class UClass* VendingMachineClass; // 0x358 (0x8)
	struct FScalableFloat VendingMachineRarityCount; // 0x360 (0x28)
	class UClass* WeaponUpgradeMachineClass; // 0x388 (0x8)
	struct FScalableFloat WeaponUpgradeMachineSpawnChance; // 0x390 (0x28)
	class UClass* LlamaClass; // 0x3b8 (0x8)
	struct FScalableFloat LlamaQuantityMin; // 0x3c0 (0x28)
	struct FScalableFloat LlamaQuantityMax; // 0x3e8 (0x28)
	struct TArray<class UFortSupplyDropInfo*> SupplyDropInfoList; // 0x410 (0x10)
	struct FScalableFloat SupplyDropMinPlacementHeight; // 0x420 (0x28)
	struct FScalableFloat SupplyDropMaxPlacementHeight; // 0x448 (0x28)
	class UClass* AircraftClass; // 0x470 (0x8)
	struct FBox2D AircraftSpawnZone; // 0x478 (0x28)
	struct FBox2D AircraftDropZone; // 0x4a0 (0x28)
	class AVolume* AircraftDropVolume; // 0x4c8 (0x8)
	struct FScalableFloat SkydivingScanForImpactWorldZ; // 0x4d0 (0x28)
	struct FScalableFloat SkydivingForceDeployParachuteWorldZ; // 0x4f8 (0x28)
	struct TArray<struct FAircraftFlightInfo> FlightInfos; // 0x520 (0x10)
	struct FBoxSphereBounds CachedPlayableBoundsForClients; // 0x530 (0x38)
	struct FScalableFloat AircraftDeviationAngle; // 0x568 (0x28)
	struct FScalableFloat AircraftDistanceFromMidLine; // 0x590 (0x28)
	struct FScalableFloat AircraftHeight; // 0x5b8 (0x28)
	struct FScalableFloat AircraftSpeed; // 0x5e0 (0x28)
	struct FScalableFloat AircraftDesiredDoorOpenTime; // 0x608 (0x28)
	class AVolume* PlayableBoundsVolume; // 0x630 (0x8)
	struct FScalableFloat SafeZoneStartDelay; // 0x638 (0x28)
	struct FScalableFloat SafeZoneStartingRadius; // 0x660 (0x28)
	struct TArray<struct FFortSafeZoneVolumeDefinition> SafeZoneVolumeDefinitions; // 0x688 (0x10)
	int SafeZoneVolumeDefinitionIndexToDraw; // 0x698 (0x4)
	unsigned char unreflected_69c[0x4]; // 0x69c (0x4) 
	struct FFortSafeZoneDefinition SafeZoneDefinition; // 0x6a0 (0x298)
	class AFortSafeZoneStorm* SafeZoneStorm; // 0x938 (0x8)
	struct TWeakObjectPtr<class ABuildingFoundation> WarmupBuildingFoundation; // 0x940 (0x28)
	struct TWeakObjectPtr<class AFortAthenaWarmupActor> WarmupActor; // 0x968 (0x28)
	unsigned char padding_990[0x8]; // 0x990 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMapInfo.TryDynamicStormCircleModification (Has no native function)
	void TryDynamicStormCircleModification(struct FSafeZoneRoundData& RoundData, float& NewSafeZoneWaitTime, float& NewSafeZoneShrinkTime, float& NewSafeZoneRadius, float& OutWaitTime, float& OutShrinkTime, float& OutRadius); // (Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaMapInfo.SetAircraftSpeed (Underlying native function: SetAircraftSpeed 0x82e4a90)
	void SetAircraftSpeed(struct FScalableFloat& InAircraftSpeed); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMapInfo.PickSupplyDropLocation (Underlying native function: PickSupplyDropLocation 0x82e45b8)
	struct FVector PickSupplyDropLocation(struct FVector& CenterLocation, float& MaxRadius, bool& bAvoidWater, float& TraceStartZ, float& TraceEndZ); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMapInfo.PickSafeZoneLocation (Underlying native function: PickSafeZoneLocation 0x82e445c)
	struct FVector PickSafeZoneLocation(struct FSafeZoneLocationParams& Params, struct TArray<struct FVector4>& BlacklistLocations); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMapInfo.HandleStormEffectsPlayerOptionEnabledChanged (Underlying native function: HandleStormEffectsPlayerOptionEnabledChanged 0x82e3984)
	void HandleStormEffectsPlayerOptionEnabledChanged(bool& bInEnabled); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMapInfo.GetMapCenter (Underlying native function: GetMapCenter 0x82e3610)
	struct FVector GetMapCenter(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMapInfo.DrawSafeZoneVolumeDefinitions (Underlying native function: DrawSafeZoneVolumeDefinitions 0x26daa0c)
	void DrawSafeZoneVolumeDefinitions(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMapInfo.ConstructSafeZoneLocationParams (Underlying native function: ConstructSafeZoneLocationParams 0x82e2cd8)
	struct FSafeZoneLocationParams ConstructSafeZoneLocationParams(int& SafeZoneIndex, struct FVector& CenterLocation, struct FVector& NextLocation, bool& bFinalPhase, int& BaseSafeZoneIndex); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMapInfo.CalcAircraftFlightPath (Underlying native function: CalcAircraftFlightPath 0x82e2778)
	struct FAircraftFlightInfo CalcAircraftFlightPath(class AFortGameModeAthena*& GameModeAthena, struct FAircraftFlightConstructionInfo& FlightConstructionInfo, struct FVector2D& PathPoint1, struct FVector2D& PathPoint2, struct FVector2D& RotationAnchorPoint, float& DropZoneHeight, struct FBox2D& SpawnZone, struct FBox2D& DropZone, float& AircraftOffsetFromMidLine, float& AngleOffset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

