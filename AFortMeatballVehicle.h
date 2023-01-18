// Class /Script/FortniteGame.FortMeatballVehicle
// Size: 0x1cf0
class AFortMeatballVehicle : public AFortAthenaSKVehicle
{
	struct FFortRechargingActionTimer BoostAction; // 0x19c8 (0xd8)
	int WaterSkiSeatIndex; // 0x1aa0 (0x4)
	float FxNormalizationMaxSpeedKmh; // 0x1aa4 (0x4)
	class UFortVehicleAudioVoice* CacheAudioEngineUp; // 0x1aa8 (0x8)
	class UFortVehicleAudioVoice* CacheAudioEngineDown; // 0x1ab0 (0x8)
	class UFortVehicleAudioVoice* CacheAudioWakeTurn; // 0x1ab8 (0x8)
	class UFortVehicleAudioVoice* CacheAudioWakeSpeed; // 0x1ac0 (0x8)
	class UFortVehicleAudioVoice* CacheAudioScrape; // 0x1ac8 (0x8)
	class UFortVehicleAudioVoice* CacheAudioEngineOutOfFuel; // 0x1ad0 (0x8)
	class UMaterialInstanceDynamic* BoostMID; // 0x1ad8 (0x8)
	class UNiagaraComponent* CachedGroundFXComponent; // 0x1ae0 (0x8)
	class APlayerController* DrivingPlayerController; // 0x1ae8 (0x8)
	class ULegacyCameraShake* LandCameraShake; // 0x1af0 (0x8)
	class UClass* LandCameraShakeClass; // 0x1af8 (0x8)
	class ULegacyCameraShake* DriverCameraShake; // 0x1b00 (0x8)
	class UClass* DriverCameraShakeClass; // 0x1b08 (0x8)
	float LandRumbleIntensity; // 0x1b10 (0x4)
	unsigned char unreflected_1b14[0x4]; // 0x1b14 (0x4) 
	uint64_t LandForceFeedbackHandle; // 0x1b18 (0x8)
	float TurnRumbleIntensity; // 0x1b20 (0x4)
	unsigned char unreflected_1b24[0x4]; // 0x1b24 (0x4) 
	uint64_t TurnForceFeedbackHandle; // 0x1b28 (0x8)
	float CurrentSnowAltitude; // 0x1b30 (0x4)
	bool bHasSnow; // 0x1b34 (0x1)
	bool bLargeRumble; // 0x1b35 (0x1)
	bool bTurnRumbleActive; // 0x1b36 (0x1)
	bool bWaterDropsOnScreen; // 0x1b37 (0x1)
	struct FGameplayTag GCVehicleScreenDrips; // 0x1b38 (0x4)
	unsigned char unreflected_1b3c[0x4]; // 0x1b3c (0x4) 
	struct FGameplayCueParameters GCParamsEmpty; // 0x1b40 (0xd0)
	class UClass* FortSpaghettiVehicleClass; // 0x1c10 (0x8)
	class UClass* BoostingCamera; // 0x1c18 (0x8)
	class UClass* VehicleCameraNoWeaponOverride; // 0x1c20 (0x8)
	struct FScalableFloat WaterSkiEnabled; // 0x1c28 (0x28)
	unsigned char unreflected_1c50[0x10]; // 0x1c50 (0x10) 
	class UFortMeatballVehicleConfigs* FortMeatballVehicleConfigs; // 0x1c60 (0x8)
	int WaterLineStartPontoonIndex; // 0x1c68 (0x4)
	int WaterLineEndPontoonIndex; // 0x1c6c (0x4)
	unsigned char unreflected_1c70[0x40]; // 0x1c70 (0x40) 
	bool bBoostFailed; // 0x1cb0 (0x1)
	unsigned char padding_1cb1[0x3f]; // 0x1cb1 (0x3f)

	/* Functions */

	// Function /Script/FortniteGame.FortMeatballVehicle.UpdateSnowAndDirtParams (Underlying native function: UpdateSnowAndDirtParams 0x8392e6c)
	void UpdateSnowAndDirtParams(float& NormalizedForwardSpeed); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMeatballVehicle.StopTurnRumble (Underlying native function: StopTurnRumble 0x8392e44)
	void StopTurnRumble(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMeatballVehicle.StopLandRumble (Underlying native function: StopLandRumble 0x8392e30)
	void StopLandRumble(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMeatballVehicle.StopDriverCameraShake (Underlying native function: StopDriverCameraShake 0x8392e1c)
	void StopDriverCameraShake(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMeatballVehicle.SmashedThroughBuildingPiece (Has no native function)
	void SmashedThroughBuildingPiece(struct FVector& ImpactPoint, struct FVector& ImpactNormal, class ABuildingActor*& BuildingHitActor); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortMeatballVehicle.ShowCooldownCue (Has no native function)
	void ShowCooldownCue(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMeatballVehicle.OnBoostStarted (Has no native function)
	void OnBoostStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMeatballVehicle.OnBoostReady (Has no native function)
	void OnBoostReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMeatballVehicle.OnBoostFinished (Has no native function)
	void OnBoostFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMeatballVehicle.OnBoostFailed (Has no native function)
	void OnBoostFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMeatballVehicle.LandShakeEnd (Underlying native function: LandShakeEnd 0x8391e08)
	void LandShakeEnd(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMeatballVehicle.GetSeatRotation (Underlying native function: GetSeatRotation 0x8391d34)
	struct FQuat GetSeatRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMeatballVehicle.GetSeatOffset (Underlying native function: GetSeatOffset 0x8391d0c)
	struct FVector GetSeatOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMeatballVehicle.GetBoostCharge (Underlying native function: GetBoostCharge 0x83915fc)
	float GetBoostCharge(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMeatballVehicle.CacheGroundFXComponent (Underlying native function: CacheGroundFXComponent 0x2920aac)
	void CacheGroundFXComponent(class UNiagaraComponent*& InGroundFXComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMeatballVehicle.CacheAudioPointers (Underlying native function: CacheAudioPointers 0x26cecc4)
	void CacheAudioPointers(class UFortVehicleAudioVoice*& InAudioEngineUp, class UFortVehicleAudioVoice*& InAudioEngineDown, class UFortVehicleAudioVoice*& InAudioWakeTurn, class UFortVehicleAudioVoice*& InAudioWakeSpeed, class UFortVehicleAudioVoice*& InAudioScrape, class UFortVehicleAudioVoice*& InAudioEngineOutOfFuel); // (Final | Native | Public | BlueprintCallable)
};

