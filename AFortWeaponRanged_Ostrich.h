// Class /Script/FortniteGame.FortWeaponRanged_Ostrich
// Size: 0x1820
class AFortWeaponRanged_Ostrich : public AFortWeaponRangedForVehicle
{
	class UClass* ProjectileTemplate; // 0x1628 (0x8)
	bool bRocketsOnCooldown; // 0x1630 (0x1)
	unsigned char unreflected_1631[0x7]; // 0x1631 (0x7) 
	bool bLocalChargingRockets; // 0x1638 (0x1)
	bool bRocketFireButtonDown; // 0x1639 (0x1)
	unsigned char unreflected_163a[0x2]; // 0x163a (0x2) 
	int RocketAmmoLocal; // 0x163c (0x4)
	int ServerLoadedRockets; // 0x1640 (0x4)
	bool bFiringRockets; // 0x1644 (0x1)
	bool bUseShotgunSecondBarrel; // 0x1645 (0x1)
	unsigned char unreflected_1646[0x2]; // 0x1646 (0x2) 
	float RocketFireTimer; // 0x1648 (0x4)
	float RocketChargeTimer; // 0x164c (0x4)
	struct FScalableFloat FireRate; // 0x1650 (0x28)
	struct FScalableFloat AutofireDelay; // 0x1678 (0x28)
	struct FScalableFloat RocketsCooldown; // 0x16a0 (0x28)
	struct FScalableFloat TimeToLoadOneAmmoCharge; // 0x16c8 (0x28)
	struct FScalableFloat AimPointCacheRange; // 0x16f0 (0x28)
	struct FScalableFloat MinRocketsForFiring; // 0x1718 (0x28)
	struct FScalableFloat AmmoPerCharge; // 0x1740 (0x28)
	struct FScalableFloat MaxRockets; // 0x1768 (0x28)
	struct FName SecondaryFireMuzzleName; // 0x1790 (0x4)
	struct FName SecondaryFireTraceSocket; // 0x1794 (0x4)
	struct FName ShotgunSecondBarrelMuzzleName; // 0x1798 (0x4)
	struct FName StartLoadingSectionName; // 0x179c (0x4)
	class UAnimMontage* RocketChargingLoop; // 0x17a0 (0x8)
	class UAnimMontage* RocketFullyChargedLoop; // 0x17a8 (0x8)
	class UAnimMontage* RocketFire; // 0x17b0 (0x8)
	class UAnimMontage* RocketFireSettle; // 0x17b8 (0x8)
	class UAnimMontage* RocketCooldownLoop; // 0x17c0 (0x8)
	class UAnimMontage* RocketCooldownReady; // 0x17c8 (0x8)
	class UAnimMontage* ShotgunFireSecondBarrel; // 0x17d0 (0x8)
	struct TArray<struct FWeaponHudData> GamepadHudKeyActionData; // 0x17d8 (0x10)
	struct FGameplayTagContainer LoadRocketTag; // 0x17e8 (0x20)
	struct FTimerHandle* AutoFireTimer; // 0x1808 (0x8)
	struct FTimerHandle* ReloadShotgunTimer; // 0x1810 (0x8)
	struct FTimerHandle* ServerSideRocketCooldownTimer; // 0x1818 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.ServerSetFiringRockets (Underlying native function: ServerSetFiringRockets 0x90595e4)
	void ServerSetFiringRockets(bool& bNewFiring, int& NumToFire); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.ServerSetCharging (Underlying native function: ServerSetCharging 0x9059534)
	void ServerSetCharging(bool& bNewCharging); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.PlayReloadAnim (Underlying native function: PlayReloadAnim 0x9059444)
	void PlayReloadAnim(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnServerLoadSingleRocket (Underlying native function: OnServerLoadSingleRocket 0x90593d4)
	void OnServerLoadSingleRocket(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnServerActivateSecondaryFire (Underlying native function: OnServerActivateSecondaryFire 0x90590e4)
	void OnServerActivateSecondaryFire(class UFortGameplayAbility*& SecondaryFire, struct FVector& LaunchPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRocketLauncherSettle (Has no native function)
	void OnRocketLauncherSettle(class USceneComponent*& AttachToMesh, struct FName& AttachToSocket); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRocketFiringStarted (Has no native function)
	void OnRocketFiringStarted(class USceneComponent*& AttachToMesh, struct FName& AttachToSocket); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRocketFired (Has no native function)
	void OnRocketFired(class USceneComponent*& AttachToMesh, struct FName& AttachToSocket); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnRep_RocketsCooldown (Underlying native function: OnRep_RocketsCooldown 0x9059068)
	void OnRepRocketsCooldown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.OnLoadedRockets (Has no native function)
	void OnLoadedRockets(int& NumRocketsLoaded); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.LoadShotgunAmmo (Underlying native function: LoadShotgunAmmo 0x9058980)
	void LoadShotgunAmmo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetTimeToLoadOneAmmoCharge (Underlying native function: GetTimeToLoadOneAmmoCharge 0x905836c)
	float GetTimeToLoadOneAmmoCharge(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetRocketsCooldown (Underlying native function: GetRocketsCooldown 0x90582cc)
	float GetRocketsCooldown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetMinRocketsForFiring (Underlying native function: GetMinRocketsForFiring 0x905823c)
	int GetMinRocketsForFiring(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetMaxRockets (Underlying native function: GetMaxRockets 0x9058208)
	int GetMaxRockets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetFireRate (Underlying native function: GetFireRate 0x905818c)
	float GetFireRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetAutofireDelay (Underlying native function: GetAutofireDelay 0x9057f88)
	float GetAutofireDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetAmmoPerCharge (Underlying native function: GetAmmoPerCharge 0x9057f54)
	int GetAmmoPerCharge(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged_Ostrich.GetAimPointCacheRange (Underlying native function: GetAimPointCacheRange 0x9057f20)
	float GetAimPointCacheRange(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

