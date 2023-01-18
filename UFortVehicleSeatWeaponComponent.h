// Class /Script/FortniteGame.FortVehicleSeatWeaponComponent
// Size: 0x1d8
class UFortVehicleSeatWeaponComponent : public UActorComponent
{
	struct TArray<struct FName> MuzzleSocketNames; // 0xa0 (0x10)
	struct TArray<struct FWeaponSeatDefinition> WeaponSeatDefinitions; // 0xb0 (0x10)
	int ActiveSeatIdx; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	class UFortWeaponRangedItemDefinition* CachedWeaponDef; // 0xc8 (0x8)
	float CachedOverheatMax; // 0xd0 (0x4)
	float CachedOverheatValue; // 0xd4 (0x4)
	float OverheatValueRepped; // 0xd8 (0x4)
	bool bWeaponEquipped; // 0xdc (0x1)
	bool bUseVehicleOrientationForShootingCone; // 0xdd (0x1)
	bool bControlledByMultipleSeats; // 0xde (0x1)
	bool bUseWeaponCameraMode; // 0xdf (0x1)
	class AActor* ActorBase; // 0xe0 (0x8)
	bool bReadyToSleep; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x7]; // 0xe9 (0x7) 
	struct FScalableFloat TotalShotsAllowedThenShutdown; // 0xf0 (0x28)
	int ShotsFired; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	struct FMulticastInlineDelegate OnSeatedPlayerTargetingChanged; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnOverheatStateChanged; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnEquipMountedWeapon; // 0x140 (0x10)
	bool bSeatUsesFastSharedReplication; // 0x150 (0x1)
	bool bWeaponOverheatDataHasBeenCached; // 0x151 (0x1)
	unsigned char unreflected_152[0x2]; // 0x152 (0x2) 
	struct FFortCachedWeaponOverheatData CachedWeaponOverheatData; // 0x154 (0x18)
	struct FVehicleWeapon_RetainedData CachedWeaponState; // 0x16c (0xc)
	bool bSaveAndRestoreWeaponData; // 0x178 (0x1)
	unsigned char unreflected_179[0x7]; // 0x179 (0x7) 
	class USkeletalMeshComponent* WeaponSklMeshComponent; // 0x180 (0x8)
	struct FName VehicleSocketName; // 0x188 (0x4)
	struct FName VehiclePawnAttachSocketName; // 0x18c (0x4)
	float AttachmentAngleOffsetYaw; // 0x190 (0x4)
	unsigned char unreflected_194[0x34]; // 0x194 (0x34) 
	class UFortVehicleDynamicReticleWidgetComponent* DynamicReticleWidgetComponent; // 0x1c8 (0x8)
	struct TWeakObjectPtr<class AFortWeaponRanged> CachedWeapon; // 0x1d0 (0x8)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortVehicleSeatWeaponComponent.OnSeatedPlayerTargetingChangedDelegate__DelegateSignature (Has no native function)
	void OnSeatedPlayerTargetingChangedDelegateDelegateSignature(bool& bIsTargeting); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.OnRep_ShotsFired (Underlying native function: OnRep_ShotsFired 0x8fdbc60)
	void OnRepShotsFired(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.OnRep_OverheatValueRepped (Underlying native function: OnRep_OverheatValueRepped 0x8fdbc40)
	void OnRepOverheatValueRepped(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortVehicleSeatWeaponComponent.OnOverheatStateChanged__DelegateSignature (Has no native function)
	void OnOverheatStateChangedDelegateSignature(enum EFortWeaponOverheatState& OverheatState); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.OnMountedWeaponFired (Has no native function)
	void OnMountedWeaponFired(int& SeatIdx, int& ShotsRemaining); // (Event | Public | BlueprintEvent)

	// DelegateFunction /Script/FortniteGame.FortVehicleSeatWeaponComponent.OnEquipMountedWeapon__DelegateSignature (Has no native function)
	void OnEquipMountedWeaponDelegateSignature(class AFortWeaponRanged*& EquippedMountedWeapon); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.GetVehicle (Underlying native function: GetVehicle 0x8fdbbcc)
	class AActor* GetVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.GetOverheatScaler (Underlying native function: GetOverheatScaler 0x8fdb848)
	float GetOverheatScaler(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.GetOverheatingMaxValue (Underlying native function: GetOverheatingMaxValue 0x712055c)
	float GetOverheatingMaxValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.GetDynamicReticleLocation (Underlying native function: GetDynamicReticleLocation 0x8fdb798)
	struct FVector GetDynamicReticleLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.GetCurrentOverheatValue (Underlying native function: GetCurrentOverheatValue 0x8e7e16c)
	float GetCurrentOverheatValue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleSeatWeaponComponent.EquipVehicleWeapon (Underlying native function: EquipVehicleWeapon 0x8fdb618)
	void EquipVehicleWeapon(class AFortPawn*& FortPawn, struct FWeaponSeatDefinition& WeaponSeatDefinition, int& ItemLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

