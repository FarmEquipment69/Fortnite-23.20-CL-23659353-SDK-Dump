// Class /Script/FortniteGame.FortMissionStormShield
// Size: 0x560
class AFortMissionStormShield : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class USceneComponent* Root; // 0x290 (0x8)
	class UStaticMeshComponent* ShieldRing; // 0x298 (0x8)
	struct TArray<class UClass*> SafeFromStormPlayerEffects; // 0x2a0 (0x10)
	struct TArray<class UClass*> InStormPlayerEffects; // 0x2b0 (0x10)
	struct TArray<class UClass*> SafeFromStormEnemyEffects; // 0x2c0 (0x10)
	struct TArray<class UClass*> InStormEnemyEffects; // 0x2d0 (0x10)
	float MapWorldScale; // 0x2e0 (0x4)
	float ReplicatedRadius; // 0x2e4 (0x4)
	struct FStormShieldRadiusGrowthData RadiusGrowthData; // 0x2e8 (0x18)
	struct FStormShieldMoveData MoveData; // 0x300 (0x40)
	bool UseGrowthRateDirectly; // 0x340 (0x1)
	bool bAntiStormShield; // 0x341 (0x1)
	unsigned char unreflected_342[0x2]; // 0x342 (0x2) 
	float RadiusToWorldScaleConversion; // 0x344 (0x4)
	struct FMulticastInlineDelegate OnStormShieldReachedRadius; // 0x348 (0x10)
	struct FMulticastInlineDelegate OnStormShieldReachedLocation; // 0x358 (0x10)
	class UClass* SafeAreaTemplate; // 0x368 (0x8)
	class UEnvQuery* StormShieldQuery; // 0x370 (0x8)
	float CurrentLocalRadius; // 0x378 (0x4)
	unsigned char unreflected_37c[0x4]; // 0x37c (0x4) 
	class UMaterialInterface* StormMiniMapMaterial; // 0x380 (0x8)
	class UMaterialInstanceDynamic* StormMiniMapMaterialMID; // 0x388 (0x8)
	struct FSlateBrush StormMiniMapMaterialBrush; // 0x390 (0xc0)
	class UMaterialInterface* StormMainMapMaterial; // 0x450 (0x8)
	class UMaterialInstanceDynamic* StormMainMapMaterialMID; // 0x458 (0x8)
	struct FSlateBrush StormMainMapMaterialBrush; // 0x460 (0xc0)
	unsigned char unreflected_520[0x8]; // 0x520 (0x8) 
	struct TArray<class AFortMissionStormSafeZone*> SafeAreas; // 0x528 (0x10)
	struct TArray<class UFortStormShieldComponent*> StormShieldComponents; // 0x538 (0x10)
	unsigned char unreflected_548[0x8]; // 0x548 (0x8) 
	bool bRegisterWithGameState; // 0x550 (0x1)
	unsigned char unreflected_551[0x3]; // 0x551 (0x3) 
	int Level; // 0x554 (0x4)
	float AutoHideRadius; // 0x558 (0x4)
	unsigned char padding_55c[0x4]; // 0x55c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionStormShield.UpdateRadiusVisuals (Underlying native function: UpdateRadiusVisuals 0x23eff98)
	void UpdateRadiusVisuals(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMissionStormShield.SpawnSafeAreaAtLocation (Underlying native function: SpawnSafeAreaAtLocation 0x8b308d8)
	class AFortMissionStormSafeZone* SpawnSafeAreaAtLocation(struct FVector& InLocation, float& InRadius); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormShield.SetTargetRadiusSizeChangeOverGrowthRate (Underlying native function: SetTargetRadiusSizeChangeOverGrowthRate 0x8b2faa8)
	void SetTargetRadiusSizeChangeOverGrowthRate(float& InTargetRadius, float& InGrowthRate, bool& bUseGrowthRateDirectly); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormShield.SetTargetLocationToMoveTo (Underlying native function: SetTargetLocationToMoveTo 0x8b2f9cc)
	void SetTargetLocationToMoveTo(struct FVector& InTargetLocation, float& InMoveRate); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormShield.SetRadiusOfShield (Underlying native function: SetRadiusOfShield 0x8b2f92c)
	void SetRadiusOfShield(float& InRadius); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormShield.RemoveAndDestroySafeArea (Underlying native function: RemoveAndDestroySafeArea 0x723ba10)
	bool RemoveAndDestroySafeArea(class AFortMissionStormSafeZone*& AreaToRemove); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormShield.PauseStormShield (Underlying native function: PauseStormShield 0x8546790)
	void PauseStormShield(); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormShield.OnRep_ReplicatedRadius (Underlying native function: OnRep_ReplicatedRadius 0x8b2da90)
	void OnRepReplicatedRadius(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionStormShield.OnRep_RadiusGrowthData (Underlying native function: OnRep_RadiusGrowthData 0x8b2da7c)
	void OnRepRadiusGrowthData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionStormShield.IsInStormShield (Underlying native function: IsInStormShield 0x8b2d23c)
	bool IsInStormShield(struct FVector& TestLocation); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionStormShield.InitializeRadiusValue (Underlying native function: InitializeRadiusValue 0x8b2d1a0)
	void InitializeRadiusValue(float& InRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormShield.GetSafeZones (Underlying native function: GetSafeZones 0x8b2b818)
	void GetSafeZones(struct TArray<class AFortMissionStormSafeZone*>& OutSafeZones); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMissionStormShield.DestroyStormShield (Underlying native function: DestroyStormShield 0x8b2a0c0)
	void DestroyStormShield(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

