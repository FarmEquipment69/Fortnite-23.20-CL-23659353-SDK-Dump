// Class /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena
// Size: 0x1560
class AFortWeaponPickaxeDualWieldAthena : public AFortWeaponPickaxeAthena
{
	unsigned char unreflected_1288[0x8]; // 0x1288 (0x8) 
	class USkeletalMeshComponentBudgeted* WeaponMeshOffhand; // 0x1290 (0x8)
	class UFXSystemComponent* SwingOffhandVFX; // 0x1298 (0x8)
	class UFXSystemComponent* IdleOffhandVFX; // 0x12a0 (0x8)
	class UFXSystemComponent* AnimTrailsOffhandPSC; // 0x12a8 (0x8)
	class UParticleSystem* AnimTrailsOffhandPSCTemplate; // 0x12b0 (0x8)
	class UNiagaraSystem* AnimTrailsOffhandNiagaraAsset; // 0x12b8 (0x8)
	bool bUseAnimTrailsOffhandPSC; // 0x12c0 (0x1)
	unsigned char unreflected_12c1[0x3]; // 0x12c1 (0x3) 
	struct FName AnimTrailsOffhandFirstSocketName; // 0x12c4 (0x4)
	struct FName AnimTrailsOffhandSecondSocketName; // 0x12c8 (0x4)
	float AnimTrailsOffhandWidth; // 0x12cc (0x4)
	struct FName IdleFXOffhandSocketName; // 0x12d0 (0x4)
	struct FName SwingFXOffhandSocketName; // 0x12d4 (0x4)
	class USoundBase* OffhandGenericImpactSound; // 0x12d8 (0x8)
	class UAnimMontage* PickaxeOffhandHarvestingMontage; // 0x12e0 (0x8)
	class UAnimMontage* PickaxeOffhandEquipMontage; // 0x12e8 (0x8)
	unsigned char unreflected_12f0[0x8]; // 0x12f0 (0x8) 
	struct TArray<class UNiagaraSystem*> OffhandImpactNiagaraPhysicalSurfaceEffectInstances; // 0x12f8 (0x10)
	class USoundBase* OffhandImpactPhysicalSurfaceSounds[0x1e]; // 0x1308 (0x8) (ARRAY) 
	class UParticleSystem* OffhandImpactPhysicalSurfaceEffects[0x1e]; // 0x13f8 (0x8) (ARRAY) 
	struct TArray<class UNiagaraSystem*> OffhandImpactNiagaraPhysicalSurfaceEffects; // 0x14e8 (0x10)
	enum EFortDualWieldDataSource CurrentWieldStance; // 0x14f8 (0x1)
	unsigned char unreflected_14f9[0x7]; // 0x14f9 (0x7) 
	class UFortWeaponAdditionalData_SingleWieldState* EffectiveSingleWieldState; // 0x1500 (0x8)
	class UFortWeaponAdditionalData_SingleWieldState* LastAppliedWieldState; // 0x1508 (0x8)
	unsigned char unreflected_1510[0x8]; // 0x1510 (0x8) 
	class UAnimMontage* OriginalEquipAnimation; // 0x1518 (0x8)
	class UClass* PrimaryFireAbilityOverrideClass; // 0x1520 (0x8)
	struct TWeakObjectPtr<class USkeletalMesh> SoftDualWieldFallbackMesh; // 0x1528 (0x28)
	class USkeletalMesh* LoadedDualWieldFallbackMesh; // 0x1550 (0x8)
	unsigned char padding_1558[0x8]; // 0x1558 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.SetCurrentSwingState (Underlying native function: SetCurrentSwingState 0x8437a2c)
	void SetCurrentSwingState(enum EFortDualWieldSwingState& NewState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.OnRep_WieldStance (Underlying native function: OnRep_WieldStance 0x8436e9c)
	void OnRepWieldStance(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.IsSingleWielding (Underlying native function: IsSingleWielding 0x8436904)
	bool IsSingleWielding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.IsDualWielding (Underlying native function: IsDualWielding 0x84368e4)
	bool IsDualWielding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetWieldStance (Underlying native function: GetWieldStance 0x843665c)
	enum EFortDualWieldDataSource GetWieldStance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetWeaponMeshOffhand (Underlying native function: GetWeaponMeshOffhand 0x8436644)
	class USkeletalMeshComponentBudgeted* GetWeaponMeshOffhand(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetUseAnimTrailsOffhandPSC (Underlying native function: GetUseAnimTrailsOffhandPSC 0x843662c)
	bool GetUseAnimTrailsOffhandPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetSwingOffhandVFXComponent (Underlying native function: GetSwingOffhandVFXComponent 0x84363e4)
	class UFXSystemComponent* GetSwingOffhandVFXComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetSwingOffhandPSC (Underlying native function: GetSwingOffhandPSC 0x8436374)
	class UParticleSystemComponent* GetSwingOffhandPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetSwingFXOffhandSocketName (Underlying native function: GetSwingFXOffhandSocketName 0x8436344)
	struct FName GetSwingFXOffhandSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetIdleOffhandVFXComponent (Underlying native function: GetIdleOffhandVFXComponent 0x29e9810)
	class UFXSystemComponent* GetIdleOffhandVFXComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetIdleOffhandPSC (Underlying native function: GetIdleOffhandPSC 0x8435b1c)
	class UParticleSystemComponent* GetIdleOffhandPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetIdleFXOffhandSocketName (Underlying native function: GetIdleFXOffhandSocketName 0x8435aec)
	struct FName GetIdleFXOffhandSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetCurrentSwingState (Underlying native function: GetCurrentSwingState 0x8435a30)
	enum EFortDualWieldSwingState GetCurrentSwingState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetAnimTrailsOffhandWidth (Underlying native function: GetAnimTrailsOffhandWidth 0x84358e0)
	float GetAnimTrailsOffhandWidth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetAnimTrailsOffhandSecondSocketName (Underlying native function: GetAnimTrailsOffhandSecondSocketName 0x84358c8)
	struct FName GetAnimTrailsOffhandSecondSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetAnimTrailsOffhandPSCTemplate (Underlying native function: GetAnimTrailsOffhandPSCTemplate 0x84358b0)
	class UParticleSystem* GetAnimTrailsOffhandPSCTemplate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetAnimTrailsOffhandPSC (Underlying native function: GetAnimTrailsOffhandPSC 0x2da6a34)
	class UFXSystemComponent* GetAnimTrailsOffhandPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetAnimTrailsOffhandNiagaraAsset (Underlying native function: GetAnimTrailsOffhandNiagaraAsset 0x8435898)
	class UNiagaraSystem* GetAnimTrailsOffhandNiagaraAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.GetAnimTrailsOffhandFirstSocketName (Underlying native function: GetAnimTrailsOffhandFirstSocketName 0x8435880)
	struct FName GetAnimTrailsOffhandFirstSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeDualWieldAthena.CreateAnimTrailOffhandFX (Underlying native function: CreateAnimTrailOffhandFX 0x843564c)
	class UFXSystemComponent* CreateAnimTrailOffhandFX(); // (Final | Native | Protected | BlueprintCallable)
};

