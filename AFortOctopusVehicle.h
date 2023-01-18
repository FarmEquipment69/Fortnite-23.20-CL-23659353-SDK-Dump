// Class /Script/FortniteGame.FortOctopusVehicle
// Size: 0x2500
class AFortOctopusVehicle : public AFortAthenaSKVehicle
{
	class ULegacyCameraShake* CacheDriverCameraShake; // 0x19d0 (0x8)
	float BounceContactRepulsionForce; // 0x19d8 (0x4)
	float BoostForce; // 0x19dc (0x4)
	float MaxVerticalBoostForce; // 0x19e0 (0x4)
	float BoostSpeedKmh; // 0x19e4 (0x4)
	struct FSphericalDriveParams BaseSphericalDriveParams; // 0x19e8 (0x48)
	struct FTowhookParams BaseTowhookParams; // 0x1a30 (0xd0)
	float TowhookSpringDeformationRateOnGround; // 0x1b00 (0x4)
	bool bAutoRetractGrapple; // 0x1b04 (0x1)
	bool bCanHoldGrapple; // 0x1b05 (0x1)
	unsigned char unreflected_1b06[0x2]; // 0x1b06 (0x2) 
	float TowhookInterpSpeed; // 0x1b08 (0x4)
	float TowhookInterpMaxPercentPerSecond; // 0x1b0c (0x4)
	float TowhookMaxInvalidateTargetAngleDeg; // 0x1b10 (0x4)
	float TowhookMaxInvalidateTargetDot; // 0x1b14 (0x4)
	struct FName InternalBlockerCollisionName; // 0x1b18 (0x4)
	struct FName OwningSpawnerName; // 0x1b1c (0x4)
	struct FFortRechargingActionTimer BoostBounceAction; // 0x1b20 (0xd8)
	unsigned char unreflected_1bf8[0x4]; // 0x1bf8 (0x4) 
	struct TEnumAsByte<ECollisionChannel> ProjectileTraceChannel; // 0x1bfc (0x1)
	unsigned char unreflected_1bfd[0x3]; // 0x1bfd (0x3) 
	float ProjectileSpeedKmh; // 0x1c00 (0x4)
	unsigned char unreflected_1c04[0x4]; // 0x1c04 (0x4) 
	struct FMulticastInlineDelegate OnTowhookShot; // 0x1c08 (0x10)
	struct FMulticastInlineDelegate OnTowhookAttached; // 0x1c18 (0x10)
	struct FMulticastInlineDelegate OnTowhookDetached; // 0x1c28 (0x10)
	struct FMulticastInlineDelegate OnTowhookMissed; // 0x1c38 (0x10)
	struct FMulticastInlineDelegate OnTowhookHolstered; // 0x1c48 (0x10)
	struct FMulticastInlineDelegate OnTowhookYanked; // 0x1c58 (0x10)
	struct FMulticastInlineDelegate OnExtendToggled; // 0x1c68 (0x10)
	struct FNetTowhookAttachState ReplicatedAttachState; // 0x1c78 (0x38)
	unsigned char unreflected_1cb0[0x38]; // 0x1cb0 (0x38) 
	class UFortOctopusVehicleConfigs* FortOctopusVehicleConfigs; // 0x1ce8 (0x8)
	unsigned char unreflected_1cf0[0x180]; // 0x1cf0 (0x180) 
	struct FQuat ShellRotation; // 0x1e70 (0x20)
	unsigned char unreflected_1e90[0x20]; // 0x1e90 (0x20) 
	struct FVector CachedCameraDir; // 0x1eb0 (0x18)
	unsigned char unreflected_1ec8[0xd0]; // 0x1ec8 (0xd0) 
	struct FFortTowhookModel TowhookModel; // 0x1f98 (0x428)
	struct FVector TowhookAimDir; // 0x23c0 (0x18)
	unsigned char unreflected_23d8[0xa8]; // 0x23d8 (0xa8) 
	struct FVector_NetQuantizeNormal NetTowhookAimDir; // 0x2480 (0x18)
	struct TArray<struct FSphericalDriveContact> CachedContactPoints; // 0x2498 (0x10)
	class UFXSystemComponent* CacheCoilIdleTopR; // 0x24a8 (0x8)
	class UFXSystemComponent* CacheCoilIdleTopL; // 0x24b0 (0x8)
	class UFXSystemComponent* CacheCoilIdleBottomR; // 0x24b8 (0x8)
	class UFXSystemComponent* CacheCoilIdleBottomL; // 0x24c0 (0x8)
	class UFXSystemComponent* CacheBoostFX; // 0x24c8 (0x8)
	class UFXSystemComponent* CacheDustFX; // 0x24d0 (0x8)
	class UFortVehicleAudioVoice* CacheAudioMovement; // 0x24d8 (0x8)
	class UFortVehicleAudioVoice* CacheAudioWind; // 0x24e0 (0x8)
	class UFortVehicleAudioVoice* CacheAudioTowCable; // 0x24e8 (0x8)
	unsigned char padding_24f0[0x10]; // 0x24f0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortOctopusVehicle.ShowCooldownCue (Has no native function)
	void ShowCooldownCue(class AFortPlayerPawn*& Pawn, float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortOctopusVehicle.SetTowhookProjectile (Underlying native function: SetTowhookProjectile 0x83e2c88)
	void SetTowhookProjectile(class AFortOctopusTowhookAttachableProjectile*& ProjectileActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.SetTowhookAttachState (Underlying native function: SetTowhookAttachState 0x83e2abc)
	void SetTowhookAttachState(class UPrimitiveComponent*& Component, struct FVector& WorldLocation, struct FVector& WorldNormal); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.ServerUpdateTowhook (Underlying native function: ServerUpdateTowhook 0x83e2334)
	void ServerUpdateTowhook(struct FVector_NetQuantizeNormal& InNetTowhookAimDir); // (0x00000002 | Net | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortOctopusVehicle.ServerSetTowhookAttachState (Underlying native function: ServerSetTowhookAttachState 0x83e1578)
	void ServerSetTowhookAttachState(struct FNetTowhookAttachState& InTowhookAttachState); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortOctopusVehicle.ServerBreakTowhook (Underlying native function: ServerBreakTowhook 0x70f5d30)
	void ServerBreakTowhook(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnUpdateTargetPoint (Has no native function)
	void OnUpdateTargetPoint(bool& bAimAssistHitsTarget, struct FVector& TargetPoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnTowhookYankedInternal (Underlying native function: OnTowhookYankedInternal 0x83dde60)
	void OnTowhookYankedInternal(struct FVector& YankForce, class UPrimitiveComponent*& YankedComponent); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnRep_ReplicatedAttachState (Underlying native function: OnRep_ReplicatedAttachState 0x83ddd30)
	void OnRepReplicatedAttachState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnRep_NetTowhookAimDir (Underlying native function: OnRep_NetTowhookAimDir 0x83ddccc)
	void OnRepNetTowhookAimDir(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnHitPawn (Has no native function)
	void OnHitPawn(struct FVector& Normal, float& Force, class AFortPlayerPawn*& HitPawn); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnHit (Has no native function)
	void OnHit(struct FVector& Location, struct FVector& Normal, float& Force, class AActor*& HitActor); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnBoostEnd (Has no native function)
	void OnBoostEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnBoostBounceInternal (Underlying native function: OnBoostBounceInternal 0x83dd698)
	void OnBoostBounceInternal(struct FVector& Location, struct FVector& Normal, float& Force, class UPrimitiveComponent*& HitComponent); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnBoostBounce (Has no native function)
	void OnBoostBounce(struct FVector& Location, struct FVector& Normal, float& Force, class AActor*& HitActor, int& BounceCount); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortOctopusVehicle.OnBoostBegin (Has no native function)
	void OnBoostBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortOctopusVehicle.IsTowhookInAirExtending (Underlying native function: IsTowhookInAirExtending 0x83dcc90)
	bool IsTowhookInAirExtending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.IsTowhookHolstered (Underlying native function: IsTowhookHolstered 0x83dcc78)
	bool IsTowhookHolstered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.IsTowhookExtending (Underlying native function: IsTowhookExtending 0x83dcc5c)
	bool IsTowhookExtending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.IsTowhookContracting (Underlying native function: IsTowhookContracting 0x83dcc40)
	bool IsTowhookContracting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.IsTowhookAttached (Underlying native function: IsTowhookAttached 0x83dcc18)
	bool IsTowhookAttached(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTowhookRotation (Underlying native function: GetTowhookRotation 0x83dc408)
	struct FRotator GetTowhookRotation(bool& bInterp); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTowhookPosition (Underlying native function: GetTowhookPosition 0x83dc3d0)
	struct FVector GetTowhookPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTowhookMuzzlePositionInterp (Underlying native function: GetTowhookMuzzlePositionInterp 0x83dc398)
	struct FVector GetTowhookMuzzlePositionInterp(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTowhookMuzzlePosition (Underlying native function: GetTowhookMuzzlePosition 0x83dc360)
	struct FVector GetTowhookMuzzlePosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTowhookCableEndpoints (Underlying native function: GetTowhookCableEndpoints 0x83dc280)
	void GetTowhookCableEndpoints(struct FVector& OutCableStart, struct FVector& OutCableEnd); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTowhookCableAttachLocation (Underlying native function: GetTowhookCableAttachLocation 0x83dc248)
	struct FVector GetTowhookCableAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTowhookAttachedComponent (Underlying native function: GetTowhookAttachedComponent 0x83dc1dc)
	class UPrimitiveComponent* GetTowhookAttachedComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetTargetHeading (Underlying native function: GetTargetHeading 0x82b25a0)
	struct FVector GetTargetHeading(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetShellRotation (Underlying native function: GetShellRotation 0x83dbecc)
	struct FRotator GetShellRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetSeatUpDir (Underlying native function: GetSeatUpDir 0x83dbea4)
	struct FVector GetSeatUpDir(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetSeatSteerStrength (Underlying native function: GetSeatSteerStrength 0x83dbe84)
	float GetSeatSteerStrength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetSeatSteerDeltas (Underlying native function: GetSeatSteerDeltas 0x83dbd5c)
	void GetSeatSteerDeltas(float& SeatSteerYawDelta, float& SeatSteerPitchDelta, float& SeatSteerRollDelta); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetSeatRotationVelocity (Underlying native function: GetSeatRotationVelocity 0x83dbd34)
	struct FVector GetSeatRotationVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetSeatRotationTorque (Underlying native function: GetSeatRotationTorque 0x83dbd0c)
	struct FVector GetSeatRotationTorque(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetSeatRotation (Underlying native function: GetSeatRotation 0x83dbccc)
	struct FRotator GetSeatRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetSeatForwardDir (Underlying native function: GetSeatForwardDir 0x83dbca4)
	struct FVector GetSeatForwardDir(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetPrimaryContact (Underlying native function: GetPrimaryContact 0x83dbab4)
	void GetPrimaryContact(bool& bIstouching, struct FVector& ContactPoint, struct FVector& ContactNormal); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetIsExtendToggled (Underlying native function: GetIsExtendToggled 0x83db53c)
	bool GetIsExtendToggled(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.GetAccelerationPercent (Underlying native function: GetAccelerationPercent 0x83db12c)
	float GetAccelerationPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusVehicle.DestroyTowhookProjectile (Underlying native function: DestroyTowhookProjectile 0x83d75ec)
	void DestroyTowhookProjectile(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.CacheParticleFX (Underlying native function: CacheParticleFX 0x83d79e8)
	void CacheParticleFX(class UFXSystemComponent*& InCoilTopR, class UFXSystemComponent*& InCoilTopL, class UFXSystemComponent*& InCoilBottomR, class UFXSystemComponent*& InCoilBottomL, class UFXSystemComponent*& InBoost, class UFXSystemComponent*& InDust); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.CacheAudioPointers (Underlying native function: CacheAudioPointers 0x83d78e0)
	void CacheAudioPointers(class UFortVehicleAudioVoice*& InAudioMovement, class UFortVehicleAudioVoice*& InAudioWind, class UFortVehicleAudioVoice*& InAudioTowCable); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.BreakTowhook (Underlying native function: BreakTowhook 0x83d75ec)
	void BreakTowhook(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOctopusVehicle.AimTraceHitsTarget (Underlying native function: AimTraceHitsTarget 0x83d73f0)
	bool AimTraceHitsTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

