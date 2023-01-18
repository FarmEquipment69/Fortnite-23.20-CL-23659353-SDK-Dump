// Class /Script/FortniteGame.FortSpaghettiVehicle
// Size: 0x24f0
class AFortSpaghettiVehicle : public AFortAthenaSKVehicle
{
	class ULegacyCameraShake* CacheDriverCameraShake; // 0x19c8 (0x8)
	float BounceContactRepulsionForce; // 0x19d0 (0x4)
	float BoostForce; // 0x19d4 (0x4)
	float MaxVerticalBoostForce; // 0x19d8 (0x4)
	float BoostSpeedKmh; // 0x19dc (0x4)
	struct FSphericalDriveParams BaseSphericalDriveParams; // 0x19e0 (0x48)
	struct FTowhookParams BaseTowhookParams; // 0x1a28 (0xd0)
	float TowhookSpringDeformationRateOnGround; // 0x1af8 (0x4)
	bool bAutoRetractGrapple; // 0x1afc (0x1)
	bool bCanHoldGrapple; // 0x1afd (0x1)
	unsigned char unreflected_1afe[0x2]; // 0x1afe (0x2) 
	float TowhookInterpSpeed; // 0x1b00 (0x4)
	float TowhookInterpMaxPercentPerSecond; // 0x1b04 (0x4)
	float TowhookMaxInvalidateTargetAngleDeg; // 0x1b08 (0x4)
	float TowhookMaxInvalidateTargetDot; // 0x1b0c (0x4)
	struct FName InternalBlockerCollisionName; // 0x1b10 (0x4)
	unsigned char unreflected_1b14[0x4]; // 0x1b14 (0x4) 
	struct FFortRechargingActionTimer BoostBounceAction; // 0x1b18 (0xd8)
	unsigned char unreflected_1bf0[0x4]; // 0x1bf0 (0x4) 
	struct TEnumAsByte<ECollisionChannel> ProjectileTraceChannel; // 0x1bf4 (0x1)
	unsigned char unreflected_1bf5[0x3]; // 0x1bf5 (0x3) 
	float ProjectileSpeedKmh; // 0x1bf8 (0x4)
	unsigned char unreflected_1bfc[0x4]; // 0x1bfc (0x4) 
	struct FMulticastInlineDelegate OnTowhookShot; // 0x1c00 (0x10)
	struct FMulticastInlineDelegate OnTowhookAttached; // 0x1c10 (0x10)
	struct FMulticastInlineDelegate OnTowhookDetached; // 0x1c20 (0x10)
	struct FMulticastInlineDelegate OnTowhookMissed; // 0x1c30 (0x10)
	struct FMulticastInlineDelegate OnTowhookHolstered; // 0x1c40 (0x10)
	struct FMulticastInlineDelegate OnTowhookYanked; // 0x1c50 (0x10)
	struct FMulticastInlineDelegate OnExtendToggled; // 0x1c60 (0x10)
	struct FNetTowhookAttachState ReplicatedAttachState; // 0x1c70 (0x38)
	unsigned char unreflected_1ca8[0x38]; // 0x1ca8 (0x38) 
	class UFortSpaghettiVehicleConfigs* FortSpaghettiVehicleConfigs; // 0x1ce0 (0x8)
	unsigned char unreflected_1ce8[0x798]; // 0x1ce8 (0x798) 
	struct FVector_NetQuantizeNormal NetTowhookAimDir; // 0x2480 (0x18)
	unsigned char unreflected_2498[0x10]; // 0x2498 (0x10) 
	class UParticleSystemComponent* CacheCoilIdleTopR; // 0x24a8 (0x8)
	class UParticleSystemComponent* CacheCoilIdleTopL; // 0x24b0 (0x8)
	class UParticleSystemComponent* CacheCoilIdleBottomR; // 0x24b8 (0x8)
	class UParticleSystemComponent* CacheCoilIdleBottomL; // 0x24c0 (0x8)
	class UParticleSystemComponent* CacheBoostFX; // 0x24c8 (0x8)
	class UParticleSystemComponent* CacheDustFX; // 0x24d0 (0x8)
	class UFortVehicleAudioVoice* CacheAudioMovement; // 0x24d8 (0x8)
	class UFortVehicleAudioVoice* CacheAudioWind; // 0x24e0 (0x8)
	class UFortVehicleAudioVoice* CacheAudioTowCable; // 0x24e8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSpaghettiVehicle.ShowCooldownCue (Has no native function)
	void ShowCooldownCue(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.SetTowhookProjectile (Underlying native function: SetTowhookProjectile 0x83e2c88)
	void SetTowhookProjectile(class AFortSpaghettiTowhookAttachableProjectile*& ProjectileActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.SetTowhookAttachState (Underlying native function: SetTowhookAttachState 0x83e2abc)
	void SetTowhookAttachState(class UPrimitiveComponent*& Component, struct FVector& WorldLocation, struct FVector& WorldNormal); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.ServerUpdateTowhook (Underlying native function: ServerUpdateTowhook 0x84378a0)
	void ServerUpdateTowhook(struct FVector_NetQuantizeNormal& InNetTowhookAimDir); // (Net | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.ServerSetTowhookAttachState (Underlying native function: ServerSetTowhookAttachState 0x8437788)
	void ServerSetTowhookAttachState(struct FNetTowhookAttachState& InTowhookAttachState); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnUpdateTargetPoint (Has no native function)
	void OnUpdateTargetPoint(bool& bAimAssistHitsTarget, struct FVector& TargetPoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnTowhookYankedInternal (Underlying native function: OnTowhookYankedInternal 0x8436f40)
	void OnTowhookYankedInternal(struct FVector& YankForce, class UPrimitiveComponent*& YankedComponent); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnRep_ReplicatedAttachState (Underlying native function: OnRep_ReplicatedAttachState 0x8436e88)
	void OnRepReplicatedAttachState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnRep_NetTowhookAimDir (Underlying native function: OnRep_NetTowhookAimDir 0x83ddccc)
	void OnRepNetTowhookAimDir(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnHitPawn (Has no native function)
	void OnHitPawn(struct FVector& Normal, float& Force, class AFortPlayerPawn*& HitPawn); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnHit (Has no native function)
	void OnHit(struct FVector& Location, struct FVector& Normal, float& Force, class AActor*& HitActor); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnBoostEnd (Has no native function)
	void OnBoostEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnBoostBounceInternal (Underlying native function: OnBoostBounceInternal 0x8436b74)
	void OnBoostBounceInternal(struct FVector& Location, struct FVector& Normal, float& Force, class UPrimitiveComponent*& HitComponent); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnBoostBounce (Has no native function)
	void OnBoostBounce(struct FVector& Location, struct FVector& Normal, float& Force, class AActor*& HitActor, int& BounceCount); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.OnBoostBegin (Has no native function)
	void OnBoostBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.IsTowhookInAirExtending (Underlying native function: IsTowhookInAirExtending 0x83dcc90)
	bool IsTowhookInAirExtending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.IsTowhookHolstered (Underlying native function: IsTowhookHolstered 0x83dcc78)
	bool IsTowhookHolstered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.IsTowhookExtending (Underlying native function: IsTowhookExtending 0x83dcc5c)
	bool IsTowhookExtending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.IsTowhookContracting (Underlying native function: IsTowhookContracting 0x83dcc40)
	bool IsTowhookContracting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.IsTowhookAttached (Underlying native function: IsTowhookAttached 0x83dcc18)
	bool IsTowhookAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTowhookRotation (Underlying native function: GetTowhookRotation 0x83dc408)
	struct FRotator GetTowhookRotation(bool& bInterp); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTowhookPosition (Underlying native function: GetTowhookPosition 0x84365f4)
	struct FVector GetTowhookPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTowhookMuzzlePositionInterp (Underlying native function: GetTowhookMuzzlePositionInterp 0x84365bc)
	struct FVector GetTowhookMuzzlePositionInterp(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTowhookMuzzlePosition (Underlying native function: GetTowhookMuzzlePosition 0x8436584)
	struct FVector GetTowhookMuzzlePosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTowhookCableEndpoints (Underlying native function: GetTowhookCableEndpoints 0x84364a4)
	void GetTowhookCableEndpoints(struct FVector& OutCableStart, struct FVector& OutCableEnd); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTowhookCableAttachLocation (Underlying native function: GetTowhookCableAttachLocation 0x843646c)
	struct FVector GetTowhookCableAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTowhookAttachedComponent (Underlying native function: GetTowhookAttachedComponent 0x83dc1dc)
	class UPrimitiveComponent* GetTowhookAttachedComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetTargetHeading (Underlying native function: GetTargetHeading 0x82b25a0)
	struct FVector GetTargetHeading(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetShellRotation (Underlying native function: GetShellRotation 0x83dbecc)
	struct FRotator GetShellRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetSeatUpDir (Underlying native function: GetSeatUpDir 0x83dbea4)
	struct FVector GetSeatUpDir(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetSeatSteerStrength (Underlying native function: GetSeatSteerStrength 0x83dbe84)
	float GetSeatSteerStrength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetSeatSteerDeltas (Underlying native function: GetSeatSteerDeltas 0x843621c)
	void GetSeatSteerDeltas(float& SeatSteerYawDelta, float& SeatSteerPitchDelta, float& SeatSteerRollDelta); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetSeatRotationVelocity (Underlying native function: GetSeatRotationVelocity 0x83dbd34)
	struct FVector GetSeatRotationVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetSeatRotationTorque (Underlying native function: GetSeatRotationTorque 0x83dbd0c)
	struct FVector GetSeatRotationTorque(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetSeatRotation (Underlying native function: GetSeatRotation 0x83dbccc)
	struct FRotator GetSeatRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetSeatForwardDir (Underlying native function: GetSeatForwardDir 0x83dbca4)
	struct FVector GetSeatForwardDir(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetPrimaryContact (Underlying native function: GetPrimaryContact 0x8435dec)
	void GetPrimaryContact(bool& bIstouching, struct FVector& ContactPoint, struct FVector& ContactNormal); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetIsExtendToggled (Underlying native function: GetIsExtendToggled 0x83db53c)
	bool GetIsExtendToggled(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.GetAccelerationPercent (Underlying native function: GetAccelerationPercent 0x83db12c)
	float GetAccelerationPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.CacheParticleFX (Underlying native function: CacheParticleFX 0x8434fa8)
	void CacheParticleFX(class UParticleSystemComponent*& InCoilTopR, class UParticleSystemComponent*& InCoilTopL, class UParticleSystemComponent*& InCoilBottomR, class UParticleSystemComponent*& InCoilBottomL, class UParticleSystemComponent*& InBoost, class UParticleSystemComponent*& InDust); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.CacheAudioPointers (Underlying native function: CacheAudioPointers 0x83d78e0)
	void CacheAudioPointers(class UFortVehicleAudioVoice*& InAudioMovement, class UFortVehicleAudioVoice*& InAudioWind, class UFortVehicleAudioVoice*& InAudioTowCable); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.BreakTowhook (Underlying native function: BreakTowhook 0x8434f94)
	void BreakTowhook(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpaghettiVehicle.AimTraceHitsTarget (Underlying native function: AimTraceHitsTarget 0x83d73f0)
	bool AimTraceHitsTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

