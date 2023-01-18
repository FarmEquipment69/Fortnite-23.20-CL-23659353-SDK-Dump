// Class /Script/FortniteGame.FortProjectileBase
// Size: 0xa20
class AFortProjectileBase : public AFortGameplayEffectDeliveryActor
{
	unsigned char unreflected_668[0x20]; // 0x668 (0x20) 
	struct FCurveTableRowHandle VerticleFireOffset; // 0x688 (0x10)
	struct FCurveTableRowHandle InitialSpeed; // 0x698 (0x10)
	struct FCurveTableRowHandle ChargeUpInitialSpeed; // 0x6a8 (0x10)
	struct FCurveTableRowHandle MaxSpeed; // 0x6b8 (0x10)
	struct FCurveTableRowHandle InitialGravityScaleOverride; // 0x6c8 (0x10)
	float ReplicatedMaxSpeed; // 0x6d8 (0x4)
	float GravityScale; // 0x6dc (0x4)
	struct TWeakObjectPtr<class AActor> OriginalTarget; // 0x6e0 (0x8)
	float ChargePercent; // 0x6e8 (0x4)
	float MomentumTransfer; // 0x6ec (0x4)
	bool bAddOwnerVelocity; // 0x6f0 (0x1)
	bool bSpawnPointCanBeUsedByOtherPlayers; // 0x6f1 (0x1)
	unsigned char unreflected_6f2[0x2]; // 0x6f2 (0x2) 
	float PlayerSpawnOffset; // 0x6f4 (0x4)
	bool bRegisterInPerceptionSystem; // 0x6f8 (0x1)
	bool bCanBePickedUpWhenStopped; // 0x6f9 (0x1)
	unsigned char unreflected_6fa[0x6]; // 0x6fa (0x6) 
	class UCapsuleComponent* CapsuleComponent; // 0x700 (0x8)
	class UFortProjectileMovementComponent* ProjectileMovementComponent; // 0x708 (0x8)
	class UFortWaterInteractionComponent* WaterInteractionComponent; // 0x710 (0x8)
	bool bDummyProjectile; // 0x718 (0x1)
	bool bStopSimulatingOnHit; // 0x719 (0x1)
	enum EProjectileWaterHitBehavior TouchWaterBehavior; // 0x71a (0x1)
	bool bDisableCollisionOnStop; // 0x71b (0x1)
	bool bStoppedSimulatingDueToHit; // 0x71c (0x1)
	bool bReplicateStopSimulationLocation; // 0x71d (0x1)
	bool bReplicateStopSimulationLocationOptimized; // 0x71e (0x1)
	bool bClientInterpMovement; // 0x71f (0x1)
	bool bClientInterpRotation; // 0x720 (0x1)
	bool bUseClientsidePrediction; // 0x721 (0x1)
	bool bIsPredictedProjectile; // 0x722 (0x1)
	bool bHasLocalPredictedCounterpart; // 0x723 (0x1)
	bool bAutoSelectAttachedForInterp; // 0x724 (0x1)
	unsigned char unreflected_725[0x3]; // 0x725 (0x3) 
	struct FHitResult SimulationStoppingHit; // 0x728 (0xe0)
	unsigned char unreflected_808[0x4]; // 0x808 (0x4) 
	bool bFiredWhileTargeting; // 0x80c (0x1)
	unsigned char unreflected_80d[0x3]; // 0x80d (0x3) 
	int ResumeSimulationCount; // 0x810 (0x4)
	unsigned char unreflected_814[0x4]; // 0x814 (0x4) 
	uint16_t SyncId; // 0x818 (0x2)
	unsigned char unreflected_81a[0x16]; // 0x81a (0x16) 
	struct TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0x830 (0x1)
	unsigned char unreflected_831[0x37]; // 0x831 (0x37) 
	struct FGameplayTagContainer DefaultTags; // 0x868 (0x20)
	struct FFortProjectileCues ProjectileGameplayCues; // 0x888 (0x24)
	unsigned char unreflected_8ac[0x14]; // 0x8ac (0x14) 
	class USceneComponent* CachedPassByPawn; // 0x8c0 (0x8)
	unsigned char unreflected_8c8[0x18]; // 0x8c8 (0x18) 
	float SkyTubeForceMultiplier; // 0x8e0 (0x4)
	unsigned char unreflected_8e4[0x4]; // 0x8e4 (0x4) 
	class AFortSkyTube* CurrentSkyTube; // 0x8e8 (0x8)
	struct FHitResult CachedImpactResult; // 0x8f0 (0xe0)
	class UClass* BulletWhipTrackerComponentClass; // 0x9d0 (0x8)
	bool bResetOverlapRestrictionsOnBounce; // 0x9d8 (0x1)
	unsigned char unreflected_9d9[0x3]; // 0x9d9 (0x3) 
	float MaxLifespanOnStop; // 0x9dc (0x4)
	float LifespanOnHitDoNotExplode; // 0x9e0 (0x4)
	unsigned char unreflected_9e4[0x4]; // 0x9e4 (0x4) 
	class UBulletWhipTrackerComponentBase* BulletWhipTrackerComponent; // 0x9e8 (0x8)
	unsigned char unreflected_9f0[0x20]; // 0x9f0 (0x20) 
	struct TArray<struct FName> ProjectileThrownStatCategoryNames; // 0xa10 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileBase.SetGravityScale (Underlying native function: SetGravityScale 0x22f9e5c)
	void SetGravityScale(float& InitialGravityScale); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileBase.ResumeSimulation (Underlying native function: ResumeSimulation 0x9068670)
	void ResumeSimulation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileBase.OnStoppedOnServer (Has no native function)
	void OnStoppedOnServer(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileBase.OnStopCallback (Underlying native function: OnStopCallback 0x14f9558)
	void OnStopCallback(struct FHitResult& Hit); // (0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortProjectileBase.OnStop (Has no native function)
	void OnStop(struct FHitResult& Hit); // (0x00000002 | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileBase.OnShot (Has no native function)
	void OnShot(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileBase.OnResumeSimulation (Has no native function)
	void OnResumeSimulation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileBase.OnRep_SimulationStoppingHit (Underlying native function: OnRep_SimulationStoppingHit 0x24718e4)
	void OnRepSimulationStoppingHit(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortProjectileBase.OnRep_ResumeSimulationCount (Underlying native function: OnRep_ResumeSimulationCount 0x9068670)
	void OnRepResumeSimulationCount(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortProjectileBase.OnRep_ReplicatedMaxSpeed (Underlying native function: OnRep_ReplicatedMaxSpeed 0x2459f10)
	void OnRepReplicatedMaxSpeed(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortProjectileBase.OnRep_GravityScale (Underlying native function: OnRep_GravityScale 0x25c88f8)
	void OnRepGravityScale(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortProjectileBase.OnRep_CurrentSkyTube (Underlying native function: OnRep_CurrentSkyTube 0x9068640)
	void OnRepCurrentSkyTube(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortProjectileBase.OnHitByMelee (Has no native function)
	void OnHitByMelee(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileBase.OnBounceCallback (Underlying native function: OnBounceCallback 0x2255afc)
	void OnBounceCallback(struct FHitResult& Hit, struct FVector& ImpactVelocity); // (0x00000002 | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortProjectileBase.OnBounce (Has no native function)
	void OnBounce(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileBase.GetSkyTube (Underlying native function: GetSkyTube 0x9068244)
	class AFortSkyTube* GetSkyTube(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortProjectileBase.GetOwnerWeapon (Underlying native function: GetOwnerWeapon 0x9068178)
	class AFortWeapon* GetOwnerWeapon(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileBase.GetOwnerVelocity (Underlying native function: GetOwnerVelocity 0x906813c)
	struct FVector GetOwnerVelocity(); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortProjectileBase.GetOwnerPlayerController (Underlying native function: GetOwnerPlayerController 0x906809c)
	class AFortPlayerController* GetOwnerPlayerController(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileBase.GetMaxLifespan (Underlying native function: GetMaxLifespan 0x9068070)
	float GetMaxLifespan(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileBase.GetGravityScale (Underlying native function: GetGravityScale 0x9068058)
	float GetGravityScale(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortProjectileBase.GetDummyProjectile_DEPRECATED (Underlying native function: GetDummyProjectile_DEPRECATED 0x9067f80)
	bool GetDummyProjectileDEPRECATED(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortProjectileBase.GetDefaultSpeed (Underlying native function: GetDefaultSpeed 0x9067eec)
	float GetDefaultSpeed(float& InChargePercent); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortProjectileBase.GetDefaultGravityScale (Underlying native function: GetDefaultGravityScale 0x9067ec4)
	float GetDefaultGravityScale(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortProjectileBase.ExitSkyTube (Underlying native function: ExitSkyTube 0x9067dcc)
	void ExitSkyTube(class AFortSkyTube*& SkyTube, bool& bIsLastTube); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileBase.EnterSkyTube (Underlying native function: EnterSkyTube 0x9067cfc)
	void EnterSkyTube(class AFortSkyTube*& SkyTube, bool& bIsFirstTube); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileBase.AddTagToDefaultTags (Underlying native function: AddTagToDefaultTags 0x9067c70)
	void AddTagToDefaultTags(struct FGameplayTag& TagToAddToProjectileDefaultTags); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

