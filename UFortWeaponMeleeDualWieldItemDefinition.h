// Class /Script/FortniteGame.FortWeaponMeleeDualWieldItemDefinition
// Size: 0x1350
class UFortWeaponMeleeDualWieldItemDefinition : public UFortWeaponMeleeItemDefinition
{
	struct TWeakObjectPtr<class USkeletalMesh> WeaponMeshOffhandOverride; // 0x10b0 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> IdleEffectOffhand; // 0x10d8 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> IdleEffectOffhandNiagara; // 0x1100 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> SwingEffectOffhand; // 0x1128 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> SwingEffectOffhandNiagara; // 0x1150 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> AnimTrailsOffhand; // 0x1178 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> AnimTrailsNiagaraOffhand; // 0x11a0 (0x28)
	struct TWeakObjectPtr<class USoundBase> OffhandGenericImpactSound; // 0x11c8 (0x28)
	struct TMap<struct TEnumAsByte<EPhysicalSurface>, struct TWeakObjectPtr<class USoundBase>> OffhandImpactPhysicalSurfaceSoundsMap; // 0x11f0 (0x50)
	struct TMap<struct TEnumAsByte<EPhysicalSurface>, struct TWeakObjectPtr<class UParticleSystem>> OffhandImpactPhysicalSurfaceEffects; // 0x1240 (0x50)
	struct TMap<struct TEnumAsByte<EPhysicalSurface>, struct TWeakObjectPtr<class UNiagaraSystem>> OffhandImpactNiagaraPhysicalSurfaceEffects; // 0x1290 (0x50)
	struct TMap<struct TEnumAsByte<EFortWeaponSoundState>, struct TWeakObjectPtr<class USoundBase>> OffhandPrimaryFireSoundMap; // 0x12e0 (0x50)
	struct FName AnimTrailsOffhandFirstSocketName; // 0x1330 (0x4)
	struct FName AnimTrailsOffhandSecondSocketName; // 0x1334 (0x4)
	float AnimTrailsOffhandWidth; // 0x1338 (0x4)
	bool bUseAnimTrailsOffhand; // 0x133c (0x1)
	bool bAttachAnimTrailsOffhandToWeapon; // 0x133d (0x1)
	unsigned char unreflected_133e[0x2]; // 0x133e (0x2) 
	struct FName IdleFXOffhandSocketName; // 0x1340 (0x4)
	struct FName SwingFXOffhandSocketName; // 0x1344 (0x4)
	unsigned char padding_1348[0x8]; // 0x1348 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponMeleeDualWieldItemDefinition.GetWeaponMeshOffhandOverride (Underlying native function: GetWeaponMeshOffhandOverride 0x900df14)
	class USkeletalMesh* GetWeaponMeshOffhandOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

