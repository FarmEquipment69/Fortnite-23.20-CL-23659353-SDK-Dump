// Class /Script/FortniteGame.FortAthenaGoatVehicle
// Size: 0x1ca0
class AFortAthenaGoatVehicle : public AFortAthenaSKMotorVehicle
{
	struct FVector LeanPositionFR; // 0x1a40 (0x18)
	struct FVector LeanPositionTargetFR; // 0x1a58 (0x18)
	unsigned char unreflected_1a70[0x18]; // 0x1a70 (0x18) 
	float LeanImpulseScaleFR; // 0x1a88 (0x4)
	unsigned char unreflected_1a8c[0x4]; // 0x1a8c (0x4) 
	struct FVector LeanPositionBR; // 0x1a90 (0x18)
	struct FVector LeanPositionTargetBR; // 0x1aa8 (0x18)
	unsigned char unreflected_1ac0[0x18]; // 0x1ac0 (0x18) 
	float LeanImpulseScaleBR; // 0x1ad8 (0x4)
	unsigned char unreflected_1adc[0x4]; // 0x1adc (0x4) 
	struct FVector LeanPositionBL; // 0x1ae0 (0x18)
	struct FVector LeanPositionTargetBL; // 0x1af8 (0x18)
	unsigned char unreflected_1b10[0x18]; // 0x1b10 (0x18) 
	float LeanImpulseScaleBL; // 0x1b28 (0x4)
	unsigned char unreflected_1b2c[0x4]; // 0x1b2c (0x4) 
	struct FVector BounceOffsetFR; // 0x1b30 (0x18)
	struct FVector BounceOffsetBR; // 0x1b48 (0x18)
	struct FVector BounceOffsetBL; // 0x1b60 (0x18)
	class UCurveFloat* BounceCurve; // 0x1b78 (0x8)
	struct TArray<struct FLinearColor> BoostSlideColors; // 0x1b80 (0x10)
	float HandBrakeSkidParam; // 0x1b90 (0x4)
	float BoostParam; // 0x1b94 (0x4)
	float MovementParam; // 0x1b98 (0x4)
	float BatteryParam; // 0x1b9c (0x4)
	float RumbleIntensity; // 0x1ba0 (0x4)
	bool bBoostCameraActive; // 0x1ba4 (0x1)
	bool bLocalPlayerADS; // 0x1ba5 (0x1)
	unsigned char unreflected_1ba6[0x2]; // 0x1ba6 (0x2) 
	class ULegacyCameraShake* DriverCameraShake; // 0x1ba8 (0x8)
	class ULegacyCameraShake* PassengerCameraShake; // 0x1bb0 (0x8)
	class AFortPlayerPawn* LocalPlayerPawn; // 0x1bb8 (0x8)
	float AccumulatedPowerSlideBoostDiscrete; // 0x1bc0 (0x4)
	unsigned char unreflected_1bc4[0x14]; // 0x1bc4 (0x14) 
	struct FVector LeanSocketPositionFR; // 0x1bd8 (0x18)
	struct FVector LeanSocketPositionBR; // 0x1bf0 (0x18)
	struct FVector LeanSocketPositionBL; // 0x1c08 (0x18)
	enum EPowerSlideState PowerSlideState; // 0x1c20 (0x1)
	unsigned char unreflected_1c21[0x27]; // 0x1c21 (0x27) 
	float BounceForceFR; // 0x1c48 (0x4)
	float BounceForceBR; // 0x1c4c (0x4)
	float BounceForceBL; // 0x1c50 (0x4)
	unsigned char unreflected_1c54[0x4]; // 0x1c54 (0x4) 
	float AngularSpeedEnterPowerSlide; // 0x1c58 (0x4)
	unsigned char unreflected_1c5c[0xc]; // 0x1c5c (0xc) 
	class UParticleSystemComponent* PSCWheelDust; // 0x1c68 (0x8)
	class UParticleSystemComponent* PSCWheelSlide; // 0x1c70 (0x8)
	class UParticleSystemComponent* PSCTrailLeft; // 0x1c78 (0x8)
	class UParticleSystemComponent* PSCTrailRight; // 0x1c80 (0x8)
	class UFortGoatVehicleConfigs* FortGoatVehicleConfigs; // 0x1c88 (0x8)
	unsigned char padding_1c90[0x10]; // 0x1c90 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.SetSkidActive (Underlying native function: SetSkidActive 0x82e4d60)
	void SetSkidActive(bool& bActive); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.PowerSlideEnd (Has no native function)
	void PowerSlideEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.PowerSlideBegin (Has no native function)
	void PowerSlideBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.IsPowerSliding (Underlying native function: IsPowerSliding 0x82e3d2c)
	bool IsPowerSliding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.IsLocalPlayerRiding (Underlying native function: IsLocalPlayerRiding 0x82e3bd8)
	bool IsLocalPlayerRiding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.IsLeaningOrBouncingFR (Underlying native function: IsLeaningOrBouncingFR 0x82e3b84)
	bool IsLeaningOrBouncingFR(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.IsLeaningOrBouncingBR (Underlying native function: IsLeaningOrBouncingBR 0x82e3b4c)
	bool IsLeaningOrBouncingBR(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.IsLeaningOrBouncingBL (Underlying native function: IsLeaningOrBouncingBL 0x82e3b14)
	bool IsLeaningOrBouncingBL(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.IsEBraking (Underlying native function: IsEBraking 0x82e3a4c)
	bool IsEBraking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.GetGolfCartReverseActionName (Underlying native function: GetGolfCartReverseActionName 0x82e351c)
	struct FName GetGolfCartReverseActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.GetGolfCartHonkActionName (Underlying native function: GetGolfCartHonkActionName 0x82e346c)
	struct FName GetGolfCartHonkActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.GetGolfCartForwardActionName (Underlying native function: GetGolfCartForwardActionName 0x82e33b8)
	struct FName GetGolfCartForwardActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.GetGolfCartEBrakeActionName (Underlying native function: GetGolfCartEBrakeActionName 0x82e3304)
	struct FName GetGolfCartEBrakeActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.GetBoostAccumulated (Underlying native function: GetBoostAccumulated 0x82e31bc)
	float GetBoostAccumulated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.EBrakeEnd (Has no native function)
	void EBrakeEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.EBrakeBegin (Has no native function)
	void EBrakeBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.ClearBoostAccumulated (Underlying native function: ClearBoostAccumulated 0x82e2cbc)
	void ClearBoostAccumulated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.CacheParticleComponentPointers (Underlying native function: CacheParticleComponentPointers 0x82e2464)
	void CacheParticleComponentPointers(class UParticleSystemComponent*& WheelDust, class UParticleSystemComponent*& WheelSlide, class UParticleSystemComponent*& TrailLeft, class UParticleSystemComponent*& TrailRight); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.BoostIncrease (Has no native function)
	void BoostIncrease(int& AccumulationStepIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.BoostEnd (Has no native function)
	void BoostEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaGoatVehicle.BoostBegin (Has no native function)
	void BoostBegin(); // (Event | Public | BlueprintEvent)
};

