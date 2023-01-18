// Class /Script/FortniteGame.BuildingTrapFloor_Turret
// Size: 0x1160
class ABuildingTrapFloor_Turret : public ABuildingTrapFloor
{
	class UFortMinigameLogicComponent* MinigameLogic; // 0x1088 (0x8)
	class USceneComponent* RotateComp; // 0x1090 (0x8)
	class USceneComponent* FiringPoint; // 0x1098 (0x8)
	class UPrimitiveComponent* OverlapCollisionComponent; // 0x10a0 (0x8)
	float RotateInterval; // 0x10a8 (0x4)
	unsigned char unreflected_10ac[0x4]; // 0x10ac (0x4) 
	struct TArray<class AFortPlayerPawn*> PlayerArray; // 0x10b0 (0x10)
	class ABuildingSMActor* BlockingActor; // 0x10c0 (0x8)
	class AFortPawn* Target; // 0x10c8 (0x8)
	float MinRotationSpeed; // 0x10d0 (0x4)
	float MaxRotationSpeed; // 0x10d4 (0x4)
	float CurrentRotationalSpeed; // 0x10d8 (0x4)
	float UpdateIntervalTime; // 0x10dc (0x4)
	float CachedUpdateTime; // 0x10e0 (0x4)
	float IncreaseIntervalRotationSpeed; // 0x10e4 (0x4)
	float DecreaseIntervalRotationSpeed; // 0x10e8 (0x4)
	unsigned char bCurrentlyActive; // 0x10ec (0x1)
	unsigned char bInSlowdownMode; // 0x10ec (0x1)
	unsigned char bUseOwnerTeam; // 0x10ec (0x1)
	unsigned char bCanTakeDamage; // 0x10ec (0x1)
	unsigned char unreflected_10ed[0x3]; // 0x10ed (0x3) 
	struct FVector ShootLocation; // 0x10f0 (0x18)
	struct FGameplayTag GTShoot; // 0x1108 (0x4)
	struct FGameplayTag GTReload; // 0x110c (0x4)
	float LifeTime; // 0x1110 (0x4)
	float FireRate; // 0x1114 (0x4)
	float ReloadTime; // 0x1118 (0x4)
	unsigned char unreflected_111c[0x4]; // 0x111c (0x4) 
	struct FVector BoxExtents; // 0x1120 (0x18)
	unsigned char unreflected_1138[0x18]; // 0x1138 (0x18) 
	int CurrentAmmoCount; // 0x1150 (0x4)
	int MaxAmmo; // 0x1154 (0x4)
	unsigned char bIsSearching; // 0x1158 (0x1)
	unsigned char padding_1159[0x7]; // 0x1159 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.UnbindTimers (Underlying native function: UnbindTimers 0x862f134)
	void UnbindTimers(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.SetTarget (Underlying native function: SetTarget 0x862ef00)
	void SetTarget(class AFortPawn*& NewTarget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.RotateTurretServer (Underlying native function: RotateTurretServer 0x862ead8)
	void RotateTurretServer(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.RotateTurretClient (Underlying native function: RotateTurretClient 0x862eac4)
	void RotateTurretClient(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.PerformGunRotation (Underlying native function: PerformGunRotation 0x862e7ec)
	void PerformGunRotation(class AFortPawn*& TargetActor, struct FVector& AimLocation, struct FRotator& CurrentRotation, class USceneComponent*& RotateComponent); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.OnRep_CurrentlyActive (Underlying native function: OnRep_CurrentlyActive 0x862de50)
	void OnRepCurrentlyActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.OnLeaveTurretRange (Underlying native function: OnLeaveTurretRange 0x862d868)
	void OnLeaveTurretRange(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.OnEnterTurretRange (Underlying native function: OnEnterTurretRange 0x862d668)
	void OnEnterTurretRange(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.MinigameStarted (Underlying native function: MinigameStarted 0x862d154)
	void MinigameStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.MinigameEnded (Underlying native function: MinigameEnded 0x862d140)
	void MinigameEnded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.GetTarget (Underlying native function: GetTarget 0x862c810)
	class AFortPawn* GetTarget(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.GetClosestTarget (Underlying native function: GetClosestTarget 0x862c56c)
	class AFortPlayerPawn* GetClosestTarget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.FireTurret (Underlying native function: FireTurret 0x862bf18)
	void FireTurret(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.FinishReload (Underlying native function: FinishReload 0x862bee4)
	void FinishReload(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.DeactivateTurret (Underlying native function: DeactivateTurret 0x862bb30)
	void DeactivateTurret(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.ConsumeAmmo (Underlying native function: ConsumeAmmo 0x862b894)
	void ConsumeAmmo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.BindTimers (Underlying native function: BindTimers 0x862b7d0)
	void BindTimers(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.AddOverlapComponent (Underlying native function: AddOverlapComponent 0x862b22c)
	void AddOverlapComponent(class UPrimitiveComponent*& OverlapComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrapFloor_Turret.ActivateTurret (Underlying native function: ActivateTurret 0x862b168)
	void ActivateTurret(); // (Final | Native | Public)
};

