// Class /Script/FortniteGame.FortAthenaFerretVehicle
// Size: 0x2250
class AFortAthenaFerretVehicle : public AFortAthenaDoghouseVehicle
{
	float BoostParam; // 0x2120 (0x4)
	float MovementParam; // 0x2124 (0x4)
	float RumbleIntensity; // 0x2128 (0x4)
	bool bBoostCameraActive; // 0x212c (0x1)
	bool bLocalPlayerADS; // 0x212d (0x1)
	unsigned char unreflected_212e[0x2]; // 0x212e (0x2) 
	class ULegacyCameraShake* DriverCameraShake; // 0x2130 (0x8)
	class ULegacyCameraShake* PassengerCameraShake; // 0x2138 (0x8)
	class AFortPlayerPawn* LocalPlayerPawn; // 0x2140 (0x8)
	float CurrentMaxSpringCompression; // 0x2148 (0x4)
	float SpringCompressionRefireTime; // 0x214c (0x4)
	float SparksRightParam; // 0x2150 (0x4)
	float MovementAmountParam; // 0x2154 (0x4)
	float MinPropSpeedWhenShooting; // 0x2158 (0x4)
	unsigned char unreflected_215c[0xc]; // 0x215c (0xc) 
	class UParticleSystem* PSTrailTop; // 0x2168 (0x8)
	class UParticleSystem* PSTrailBottom; // 0x2170 (0x8)
	class UParticleSystemComponent* PSCTrailTopLeft; // 0x2178 (0x8)
	class UParticleSystemComponent* PSCTrailTopRight; // 0x2180 (0x8)
	class UParticleSystemComponent* PSCTrailBottomLeft; // 0x2188 (0x8)
	class UParticleSystemComponent* PSCTrailBottomRight; // 0x2190 (0x8)
	class UStaticMeshComponent* BoostMeterSM; // 0x2198 (0x8)
	class UStaticMeshComponent* PropellerSM; // 0x21a0 (0x8)
	class UMaterialInstanceDynamic* BoostMID; // 0x21a8 (0x8)
	class UMaterialInstanceDynamic* FuelGaugeMID; // 0x21b0 (0x8)
	class UParticleSystemComponent* PlaneSpeedFX; // 0x21b8 (0x8)
	class UFortVehicleAudioVoice* FortAudioMovementClose; // 0x21c0 (0x8)
	class UFortVehicleAudioVoice* FortAudioMovementDistant; // 0x21c8 (0x8)
	class UFortVehicleAudioVoice* FortAudioWindFirstPerson; // 0x21d0 (0x8)
	class UFortVehicleAudioVoice* FortAudioDive; // 0x21d8 (0x8)
	class UFortVehicleAudioVoice* FortAudioTaxi; // 0x21e0 (0x8)
	class UFortVehicleAudioVoice* FortAudioSpark; // 0x21e8 (0x8)
	class UFortFerretVehicleConfigs* FortFerretVehicleConfigs; // 0x21f0 (0x8)
	class USceneComponent* RightGunMuzzle; // 0x21f8 (0x8)
	class USceneComponent* LeftGunMuzzle; // 0x2200 (0x8)
	float MaxHealthToDestroyPropWhileBoosting; // 0x2208 (0x4)
	float MaxHealthToDestroyPropWithDirectHit; // 0x220c (0x4)
	float MaxHealthToDestroyProp; // 0x2210 (0x4)
	bool bShowWingTrails; // 0x2214 (0x1)
	unsigned char padding_2215[0x3b]; // 0x2215 (0x3b)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.SpawnWingTrailParticles (Underlying native function: SpawnWingTrailParticles 0x82e4de0)
	void SpawnWingTrailParticles(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.SmashedThroughBuildingPiece (Has no native function)
	void SmashedThroughBuildingPiece(struct FVector& ImpactPoint, struct FVector& ImpactNormal, class ABuildingActor*& BuildingHitActor); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.ShowCooldownCueFired (Has no native function)
	void ShowCooldownCueFired(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.ShowCooldownCueBoost (Has no native function)
	void ShowCooldownCueBoost(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.SetSkidActive (Underlying native function: SetSkidActive 0x82e4ce0)
	void SetSkidActive(bool& bActive); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.SetGrantWeaponGE (Has no native function)
	void SetGrantWeaponGE(class UClass*& NewGE); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.LandedWithNoFuel (Has no native function)
	void LandedWithNoFuel(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.IsTryingToShoot (Underlying native function: IsTryingToShoot 0x82e3d84)
	bool IsTryingToShoot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.IsShooting (Underlying native function: IsShooting 0x82e3d48)
	bool IsShooting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.IsLocalPlayerRiding (Underlying native function: IsLocalPlayerRiding 0x82e3bbc)
	bool IsLocalPlayerRiding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.HandleBoostChargeAboveThreshold (Has no native function)
	void HandleBoostChargeAboveThreshold(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.GetBoostCharge (Underlying native function: GetBoostCharge 0x82e31f8)
	float GetBoostCharge(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.CachePropAndBoostMeterSM (Underlying native function: CachePropAndBoostMeterSM 0x82e2630)
	void CachePropAndBoostMeterSM(class UStaticMeshComponent*& InPropSM, class UStaticMeshComponent*& InBoostSM); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.CachePlaneFX (Underlying native function: CachePlaneFX 0x82e25b0)
	void CachePlaneFX(class UParticleSystemComponent*& InPlaneSpeedFX); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.CacheAudioVoicePointers (Underlying native function: CacheAudioVoicePointers 0x82e21bc)
	void CacheAudioVoicePointers(class UFortVehicleAudioVoice*& InAudioMovementClose, class UFortVehicleAudioVoice*& InAudioMovementDistant, class UFortVehicleAudioVoice*& InAudioWindFirstPerson, class UFortVehicleAudioVoice*& InAudioDive, class UFortVehicleAudioVoice*& InAudioTaxi, class UFortVehicleAudioVoice*& InAudioSpark); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.BoostEnd (Has no native function)
	void BoostEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaFerretVehicle.BoostBegin (Has no native function)
	void BoostBegin(); // (Event | Public | BlueprintEvent)
};

