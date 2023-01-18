// Class /Script/FortniteGame.FortAthenaSKPushVehicle
// Size: 0x1ac0
class AFortAthenaSKPushVehicle : public AFortAthenaSKVehicle
{
	float AntiGravityScalerWhenEmpty; // 0x19c8 (0x4)
	float AntiGravityScalerWhenCoasting; // 0x19cc (0x4)
	float SpringCompressionRefireTime; // 0x19d0 (0x4)
	float MovementAmountParam; // 0x19d4 (0x4)
	float CurrentMaxSpringCompression; // 0x19d8 (0x4)
	float SparksLeftParam; // 0x19dc (0x4)
	float SparksRightParam; // 0x19e0 (0x4)
	float LeftSlowDustParam; // 0x19e4 (0x4)
	float RightSlowDustParam; // 0x19e8 (0x4)
	float LeftFastDustParam; // 0x19ec (0x4)
	float RightFastDustParam; // 0x19f0 (0x4)
	float FastDustParam; // 0x19f4 (0x4)
	float CoastingMovementParam; // 0x19f8 (0x4)
	float SkiddingAmountParam; // 0x19fc (0x4)
	float InAirParam; // 0x1a00 (0x4)
	float ScrapingAmountParam; // 0x1a04 (0x4)
	float AudioWindParam; // 0x1a08 (0x4)
	unsigned char unreflected_1a0c[0x4]; // 0x1a0c (0x4) 
	class UFortSKPushVehicleConfigs* SKPushVehicleConfigs; // 0x1a10 (0x8)
	bool bConstrainedRotation; // 0x1a18 (0x1)
	unsigned char unreflected_1a19[0x1]; // 0x1a19 (0x1) 
	bool bIsCoastingOrDismounting; // 0x1a1a (0x1)
	unsigned char unreflected_1a1b[0x1]; // 0x1a1b (0x1) 
	float ForwardForceTractionScale; // 0x1a1c (0x4)
	unsigned char unreflected_1a20[0x1]; // 0x1a20 (0x1) 
	enum ECoastState CurrentPhysicsCoastState; // 0x1a21 (0x1)
	unsigned char unreflected_1a22[0x1]; // 0x1a22 (0x1) 
	enum ECoastState CurrentAnimCoastState; // 0x1a23 (0x1)
	unsigned char unreflected_1a24[0x1]; // 0x1a24 (0x1) 
	bool bIsDriverTargetting; // 0x1a25 (0x1)
	unsigned char unreflected_1a26[0x2]; // 0x1a26 (0x2) 
	float StandingInPlaceSteerAngle; // 0x1a28 (0x4)
	unsigned char unreflected_1a2c[0x18]; // 0x1a2c (0x18) 
	bool bPedalForceCooldown; // 0x1a44 (0x1)
	unsigned char unreflected_1a45[0x3]; // 0x1a45 (0x3) 
	struct FVector PushForceRelativeLocation; // 0x1a48 (0x18)
	unsigned char unreflected_1a60[0x28]; // 0x1a60 (0x28) 
	class UFortVehicleAudioVoice* CacheAudioMovement; // 0x1a88 (0x8)
	class UFortVehicleAudioVoice* CacheAudioCoast; // 0x1a90 (0x8)
	class UFortVehicleAudioVoice* CacheAudioSkid; // 0x1a98 (0x8)
	class UFortVehicleAudioVoice* CacheAudioInAir; // 0x1aa0 (0x8)
	class UFortVehicleAudioVoice* CacheAudioScrape; // 0x1aa8 (0x8)
	class UFortVehicleAudioVoice* CacheAudioWind; // 0x1ab0 (0x8)
	class UParticleSystemComponent* CacheWheelDustFX; // 0x1ab8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.PlayerWantsToCoast (Underlying native function: PlayerWantsToCoast 0x830946c)
	bool PlayerWantsToCoast(bool& bCheckAnimOnlyCoast); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.OnIsCoastingChanged (Has no native function)
	void OnIsCoastingChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.IsStandingInPlace (Underlying native function: IsStandingInPlace 0x830870c)
	bool IsStandingInPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.IsReadyToPedalFromCoast (Underlying native function: IsReadyToPedalFromCoast 0x83085bc)
	bool IsReadyToPedalFromCoast(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.IsMounting (Underlying native function: IsMounting 0x83084d0)
	bool IsMounting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.IsEndCoasting (Underlying native function: IsEndCoasting 0x83083ac)
	bool IsEndCoasting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.IsDismountingFromCoast (Underlying native function: IsDismountingFromCoast 0x8308320)
	bool IsDismountingFromCoast(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.IsCoasting (Underlying native function: IsCoasting 0x83082b0)
	bool IsCoasting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.IsApplyingPedalForce (Underlying native function: IsApplyingPedalForce 0x8308230)
	bool IsApplyingPedalForce(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.GetStandingInPlaceSteeringAngle (Underlying native function: GetStandingInPlaceSteeringAngle 0x8308100)
	float GetStandingInPlaceSteeringAngle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.GetShoppingCartCoastActionName (Underlying native function: GetShoppingCartCoastActionName 0x8307ef0)
	struct FName GetShoppingCartCoastActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.GetCoastState (Underlying native function: GetCoastState 0x8307518)
	enum ECoastState GetCoastState(bool& bGetPhysicsState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.CacheFX (Underlying native function: CacheFX 0x83065f0)
	void CacheFX(class UParticleSystemComponent*& InWheelDustFX); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaSKPushVehicle.CacheAudioPointers (Underlying native function: CacheAudioPointers 0x8306414)
	void CacheAudioPointers(class UFortVehicleAudioVoice*& InAudioMovement, class UFortVehicleAudioVoice*& InAudioCoast, class UFortVehicleAudioVoice*& InAudioSkid, class UFortVehicleAudioVoice*& InAudioInAir, class UFortVehicleAudioVoice*& InAudioScrape, class UFortVehicleAudioVoice*& InAudioWind); // (Final | Native | Private | BlueprintCallable)
};

