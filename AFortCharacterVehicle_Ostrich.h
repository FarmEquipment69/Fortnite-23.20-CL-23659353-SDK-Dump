// Class /Script/FortniteGame.FortCharacterVehicle_Ostrich
// Size: 0x59c0
class AFortCharacterVehicle_Ostrich : public AFortCharacterVehicle
{
	bool bExplodeOnDetonate; // 0x55f0 (0x1)
	unsigned char unreflected_55f1[0x7]; // 0x55f1 (0x7) 
	struct FVector GunnerAimPoint; // 0x55f8 (0x18)
	struct TWeakObjectPtr<class AActor> ShieldActor; // 0x5610 (0x8)
	struct TWeakObjectPtr<class UAbilitySystemComponent> SelfDestructAbilityComp; // 0x5618 (0x8)
	struct FTimerHandle* DriverPrimaryCooldownHandle; // 0x5620 (0x8)
	struct FTimerHandle* DriverSecondaryCooldownHandle; // 0x5628 (0x8)
	struct TArray<class UClass*> KillExplosions; // 0x5630 (0x10)
	struct TArray<class UAnimMontage*> StopMontagesOnGunnerExit; // 0x5640 (0x10)
	struct TArray<struct FVehicleSpecificUIDetails> CustomUI; // 0x5650 (0x10)
	struct TArray<struct FActiveVehicleUI> ActiveUI; // 0x5660 (0x10)
	struct FVector ApproxGunnerCameraOffset; // 0x5670 (0x18)
	float LandingMovementLockDurationMin; // 0x5688 (0x4)
	float LandingMovementLockDurationMax; // 0x568c (0x4)
	float KneelingGunnerSeatVerticalOffset; // 0x5690 (0x4)
	float KneelingDriverSeatVerticalOffset; // 0x5694 (0x4)
	struct FName PassengerCameraSocket; // 0x5698 (0x4)
	struct FName PassengerRootSocket; // 0x569c (0x4)
	struct FName BeamScaleName; // 0x56a0 (0x4)
	struct FName BeamLifeName; // 0x56a4 (0x4)
	struct FName BeamAttachName; // 0x56a8 (0x4)
	struct FName OstrichShieldBoostStatName; // 0x56ac (0x4)
	float PassengerCameraFixedVerticalOffset; // 0x56b0 (0x4)
	float PassengerCameraFixedVerticalOffsetNoDriver; // 0x56b4 (0x4)
	float DriverPrimaryCooldownTime; // 0x56b8 (0x4)
	float DriverSecondaryCooldownTime; // 0x56bc (0x4)
	float DetonateDelay; // 0x56c0 (0x4)
	float DetonateDelaySelfDestruct; // 0x56c4 (0x4)
	float DetonateRange; // 0x56c8 (0x4)
	float DriverKickMoveLockDuration; // 0x56cc (0x4)
	float KickRootMotionDelay; // 0x56d0 (0x4)
	float KickRootMotionDuration; // 0x56d4 (0x4)
	float ShieldBoostCooldown; // 0x56d8 (0x4)
	float ShieldRadius; // 0x56dc (0x4)
	float SelfDestructInteractDuration; // 0x56e0 (0x4)
	float AccelFromIdle; // 0x56e4 (0x4)
	float AccelFromIdleDuration; // 0x56e8 (0x4)
	float IdleTimeThreshold; // 0x56ec (0x4)
	float LockoutDurationAfterRequestSeatChange; // 0x56f0 (0x4)
	float MaxBeamLen; // 0x56f4 (0x4)
	class UAnimMontage* DriverToGunnerTransition; // 0x56f8 (0x8)
	class UAnimMontage* GunnerToDriverTransition; // 0x5700 (0x8)
	float BlockDriverStompImmersionPercent; // 0x5708 (0x4)
	float BlockDriverDashImmersionPercent; // 0x570c (0x4)
	float BlockDriverJumpImmersionPercent; // 0x5710 (0x4)
	float BlockGunnerMissilesImmersionPercent; // 0x5714 (0x4)
	float BlockGunnerShotgunImmersionPercent; // 0x5718 (0x4)
	bool bDriverStompImmersionBlocked; // 0x571c (0x1)
	bool bDriverDashImmersionBlocked; // 0x571d (0x1)
	bool bDriverJumpImmersionBlocked; // 0x571e (0x1)
	bool bGunnerMissilesImmersionBlocked; // 0x571f (0x1)
	bool bGunnerShotgunImmersionBlocked; // 0x5720 (0x1)
	bool bChargingJump; // 0x5721 (0x1)
	bool bDriverLocalChargingJump; // 0x5722 (0x1)
	bool bChargingRockets; // 0x5723 (0x1)
	bool bAutomaticallyFiringShotgun; // 0x5724 (0x1)
	enum EOstrichDetonationState DetonationState; // 0x5725 (0x1)
	bool bLocalSimulatedChargingJump; // 0x5726 (0x1)
	bool bDashing; // 0x5727 (0x1)
	bool bKickRep; // 0x5728 (0x1)
	bool bLoadingRockets; // 0x5729 (0x1)
	bool bKickActive; // 0x572a (0x1)
	bool bLocalJumpButtonDown; // 0x572b (0x1)
	bool bAllowEnter; // 0x572c (0x1)
	bool bAcceleratingFromIdle; // 0x572d (0x1)
	unsigned char unreflected_572e[0x2]; // 0x572e (0x2) 
	float IdleTime; // 0x5730 (0x4)
	float MovingTime; // 0x5734 (0x4)
	float RequestSeatChangeTime; // 0x5738 (0x4)
	float ChargeJumpStartTime; // 0x573c (0x4)
	float GroundDashStartTime; // 0x5740 (0x4)
	float ShieldBoostStartTime; // 0x5744 (0x4)
	float KickStartTime; // 0x5748 (0x4)
	unsigned char unreflected_574c[0x4]; // 0x574c (0x4) 
	class UParticleSystemComponent* SpawnedBeam; // 0x5750 (0x8)
	class UParticleSystemComponent* SpawnedImpact; // 0x5758 (0x8)
	class UParticleSystemComponent* SpawnedImpactEnemy; // 0x5760 (0x8)
	class UParticleSystemComponent* SpawnedSource; // 0x5768 (0x8)
	float BlendedPassengerVerticalCamOffset; // 0x5770 (0x4)
	float OverrideLandingMoveLockDuration; // 0x5774 (0x4)
	int ShieldBoostResourceCost; // 0x5778 (0x4)
	float KickAnimationDuration; // 0x577c (0x4)
	float DestroyDelayAfterExplosion; // 0x5780 (0x4)
	float PawnRotationRate; // 0x5784 (0x4)
	float AirDashOverrideAngle; // 0x5788 (0x4)
	float GunnerAimPointUpdateRate; // 0x578c (0x4)
	float GunnerAimPointTraceRange; // 0x5790 (0x4)
	float GroundDashAnimationDuration; // 0x5794 (0x4)
	float GunnerAimPointUpdateDelay; // 0x5798 (0x4)
	float MechMissileDamageToGunnerShield; // 0x579c (0x4)
	float SimulatedProxyFixupRange; // 0x57a0 (0x4)
	bool bEnableTargetingLaser; // 0x57a4 (0x1)
	bool bEnableSimulatedProxyFixup; // 0x57a5 (0x1)
	unsigned char unreflected_57a6[0x2]; // 0x57a6 (0x2) 
	struct FGameplayTag RocketSettleCue; // 0x57a8 (0x4)
	struct FGameplayTag RocketFireCue; // 0x57ac (0x4)
	struct FGameplayTag RocketLoadingCue; // 0x57b0 (0x4)
	struct FGameplayTag ReloadShotgunTag; // 0x57b4 (0x4)
	struct FGameplayTag FireShotgunTag; // 0x57b8 (0x4)
	struct FGameplayTag MissilesTag; // 0x57bc (0x4)
	struct FGameplayTagContainer KickStompTag; // 0x57c0 (0x20)
	struct FGameplayTag IndividualRocketFired; // 0x57e0 (0x4)
	struct FGameplayTag IndividualRocketLoaded; // 0x57e4 (0x4)
	struct FGameplayTag LocalSelfDestructPrimeUnderway; // 0x57e8 (0x4)
	unsigned char unreflected_57ec[0x4]; // 0x57ec (0x4) 
	class UClass* DriverChargeJumpCamera; // 0x57f0 (0x8)
	class UParticleSystem* BeamTemplate; // 0x57f8 (0x8)
	class UParticleSystem* BeamHitTemplate; // 0x5800 (0x8)
	class UParticleSystem* BeamHitEnemyTemplate; // 0x5808 (0x8)
	class UParticleSystem* BeamSourceTemplate; // 0x5810 (0x8)
	float PassengerCamBlendTarget; // 0x5818 (0x4)
	float GunnerAimpointUpdateTimer; // 0x581c (0x4)
	bool bDriverPrimaryCooldownReady; // 0x5820 (0x1)
	bool bDriverSecondaryCooldownReady; // 0x5821 (0x1)
	bool bBufferedDriverExit; // 0x5822 (0x1)
	bool bHoldingSelfDestruct; // 0x5823 (0x1)
	bool bLocalDriverRequestedExit; // 0x5824 (0x1)
	bool bLocalPrimaryFireButtonDown; // 0x5825 (0x1)
	bool bLocalSecondaryFireButtonDown; // 0x5826 (0x1)
	bool bEmoteAudioForceStopped; // 0x5827 (0x1)
	bool bAimedAtEnemy; // 0x5828 (0x1)
	bool bAimedAtSky; // 0x5829 (0x1)
	unsigned char unreflected_582a[0x6]; // 0x582a (0x6) 
	class UFortVehicleAudioVoice* NativeLinearMovementAudio; // 0x5830 (0x8)
	class UFortVehicleAudioVoice* NativeRotationalMovementAudio; // 0x5838 (0x8)
	class UAudioComponent* NativeTargetingLaserAudio; // 0x5840 (0x8)
	class UClass* FortOstrichVehicleConfigsClass; // 0x5848 (0x8)
	struct FScalableFloat EmotesEnabled; // 0x5850 (0x28)
	struct TArray<struct FGameplayTag> ExcludedEmoteTags; // 0x5878 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortMontageItemDefinitionBase>> ExcludedEmotes; // 0x5888 (0x10)
	class UFortAnimWorldStriderComponent* WorldStriderComponent; // 0x5898 (0x8)
	class UFortOstrichVehicleConfigs* FortOstrichVehicleConfigs; // 0x58a0 (0x8)
	unsigned char unreflected_58a8[0xc0]; // 0x58a8 (0xc0) 
	struct FOstrichWeapon_RetainedData CachedWeaponState; // 0x5968 (0xc)
	unsigned char unreflected_5974[0x4]; // 0x5974 (0x4) 
	class UCapsuleComponent* PickupCapsuleComponent; // 0x5978 (0x8)
	class UBaseStatManager* OstrichCustomStats; // 0x5980 (0x8)
	struct FScalableFloat SelfDestructInStormDelay; // 0x5988 (0x28)
	unsigned char padding_59b0[0x10]; // 0x59b0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.SetTargetingLaserAudioComp (Underlying native function: SetTargetingLaserAudioComp 0x832f7b0)
	void SetTargetingLaserAudioComp(class UAudioComponent*& TargetingLaserAudio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.SetShieldActor (Underlying native function: SetShieldActor 0x832f6a8)
	void SetShieldActor(class AActor*& InShieldActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.SetRotationalAudioComp (Underlying native function: SetRotationalAudioComp 0x832f628)
	void SetRotationalAudioComp(class UFortVehicleAudioVoice*& RotAudio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.SetLinearAudioComp (Underlying native function: SetLinearAudioComp 0x832f5a8)
	void SetLinearAudioComp(class UFortVehicleAudioVoice*& LinearAudio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.ServerSetJumpCharging (Underlying native function: ServerSetJumpCharging 0x832f29c)
	void ServerSetJumpCharging(bool& bNewCharging); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.ServerNotifyDriverInput (Underlying native function: ServerNotifyDriverInput 0x832f1ec)
	void ServerNotifyDriverInput(bool& bIsPrimaryFire); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnStartShotgunReload (Underlying native function: OnStartShotgunReload 0x832ef30)
	void OnStartShotgunReload(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnStartChargeJump (Has no native function)
	void OnStartChargeJump(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnRep_Kick (Underlying native function: OnRep_Kick 0x832ee40)
	void OnRepKick(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnRep_IsDashing (Underlying native function: OnRep_IsDashing 0x832edec)
	void OnRepIsDashing(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnRep_Detonating (Underlying native function: OnRep_Detonating 0x832edd8)
	void OnRepDetonating(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnRep_ChargeJump (Underlying native function: OnRep_ChargeJump 0x832edc4)
	void OnRepChargeJump(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnReleaseChargeJump (Has no native function)
	void OnReleaseChargeJump(float& ChargeAlpha); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnPressShieldBoost (Has no native function)
	void OnPressShieldBoost(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnPressHonk (Has no native function)
	void OnPressHonk(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnPickupCapsuleBeginOverlap (Underlying native function: OnPickupCapsuleBeginOverlap 0x832ec0c)
	void OnPickupCapsuleBeginOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnLoadingRockets (Has no native function)
	void OnLoadingRockets(bool& bStarting); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnKickStomp (Underlying native function: OnKickStomp 0x832e998)
	void OnKickStomp(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnKickFinished (Underlying native function: OnKickFinished 0x832e97c)
	void OnKickFinished(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnFailedShieldBoost (Has no native function)
	void OnFailedShieldBoost(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnDriverSecondaryFire (Has no native function)
	void OnDriverSecondaryFire(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnDriverPrimaryFire (Has no native function)
	void OnDriverPrimaryFire(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnDetonateTimerStart (Has no native function)
	void OnDetonateTimerStart(enum EOstrichDetonationState& InDetonationState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnDashStart (Underlying native function: OnDashStart 0x832e908)
	void OnDashStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.OnDashFinished (Underlying native function: OnDashFinished 0x832e8b8)
	void OnDashFinished(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.NotifyBlueprintShotgunReload (Has no native function)
	void NotifyBlueprintShotgunReload(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.NotiftyBlueprintShotgunFired (Has no native function)
	void NotiftyBlueprintShotgunFired(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.MulticastDriverInput (Underlying native function: MulticastDriverInput 0x832e834)
	void MulticastDriverInput(bool& bIsPrimaryFire); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.IsShotgunReloading (Underlying native function: IsShotgunReloading 0x832e744)
	bool IsShotgunReloading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.IsRocketOnCooldown (Underlying native function: IsRocketOnCooldown 0x832e720)
	bool IsRocketOnCooldown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.IsGunnerShieldActive (Has no native function)
	bool IsGunnerShieldActive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.IsFiringRockets (Underlying native function: IsFiringRockets 0x832e6fc)
	bool IsFiringRockets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GunnerShieldTakeDamage (Has no native function)
	void GunnerShieldTakeDamage(float& Damage); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetWorldStriderComponent (Underlying native function: GetWorldStriderComponent 0x832e280)
	class UFortAnimWorldStriderComponent* GetWorldStriderComponent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetJumpChargeCursor (Underlying native function: GetJumpChargeCursor 0x832e1ec)
	float GetJumpChargeCursor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetIsDashing (Underlying native function: GetIsDashing 0x832e1d4)
	bool GetIsDashing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetIsChargingJump (Underlying native function: GetIsChargingJump 0x832e1b0)
	bool GetIsChargingJump(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetGunnerWeapon (Underlying native function: GetGunnerWeapon 0x832e144)
	class AFortWeaponRanged_Ostrich* GetGunnerWeapon(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetGunnerAimAngleDelta (Underlying native function: GetGunnerAimAngleDelta 0x832e11c)
	float GetGunnerAimAngleDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetGroundSlamBool (Has no native function)
	bool GetGroundSlamBool(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetDriverTurnAngleDelta (Underlying native function: GetDriverTurnAngleDelta 0x832e0b0)
	float GetDriverTurnAngleDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetDashAnimationActive (Underlying native function: GetDashAnimationActive 0x832e08c)
	bool GetDashAnimationActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetChargeJumpingFloat (Has no native function)
	float GetChargeJumpingFloat(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GetAimPoint (Underlying native function: GetAimPoint 0x832dd84)
	struct FVector GetAimPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GameplayCue_Athena_Ostrich_Reload (Underlying native function: GameplayCue_Athena_Ostrich_Reload 0x832dd44)
	void GameplayCueAthenaOstrichReload(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GameplayCue_Athena_Ostrich_LoadSingleRocket (Underlying native function: GameplayCue_Athena_Ostrich_LoadSingleRocket 0x832dc58)
	void GameplayCueAthenaOstrichLoadSingleRocket(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GameplayCue_Athena_Ostrich_Load (Underlying native function: GameplayCue_Athena_Ostrich_Load 0x832dc44)
	void GameplayCueAthenaOstrichLoad(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GameplayCue_Athena_Ostrich_Fire_Stop (Underlying native function: GameplayCue_Athena_Ostrich_Fire_Stop 0x832dc30)
	void GameplayCueAthenaOstrichFireStop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GameplayCue_Athena_Ostrich_Fire_Start (Underlying native function: GameplayCue_Athena_Ostrich_Fire_Start 0x832dbec)
	void GameplayCueAthenaOstrichFireStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.GameplayCue_Athena_Ostrich_Fire_Single (Underlying native function: GameplayCue_Athena_Ostrich_Fire_Single 0x832db00)
	void GameplayCueAthenaOstrichFireSingle(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.ForceDetonate (Underlying native function: ForceDetonate 0x832da80)
	void ForceDetonate(bool& bExplode); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle_Ostrich.AirDash (Underlying native function: AirDash 0x832d328)
	void AirDash(struct FVector& InDirection, float& Speed, float& MinVerticalSpeed); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

