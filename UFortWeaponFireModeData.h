// Class /Script/FortniteGame.FortWeaponFireModeData
// Size: 0x2b8
class UFortWeaponFireModeData : public UDataAsset
{
	float FireModeDataDelay; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UClass* TracerTemplate; // 0x38 (0x8)
	bool bOverrideImpactSurfaceEffects; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	class UParticleSystem* ImpactPhysicalSurfaceEffects[0x1e]; // 0x48 (0x8) (ARRAY) 
	struct TArray<class UNiagaraSystem*> ImpactNiagaraPhysicalSurfaceEffectAssets; // 0x138 (0x10)
	class UParticleSystem* BeamParticleSystem; // 0x148 (0x8)
	class UNiagaraSystem* BeamNiagaraSystemAsset; // 0x150 (0x8)
	bool bOverrideImpactSurfaceSounds; // 0x158 (0x1)
	unsigned char unreflected_159[0x7]; // 0x159 (0x7) 
	class USoundBase* ImpactPhysicalSurfaceSounds[0x1e]; // 0x160 (0x8) (ARRAY) 
	class UParticleSystem* MuzzleParticleSystem; // 0x250 (0x8)
	class UNiagaraSystem* MuzzleNiagaraSystem; // 0x258 (0x8)
	class USoundBase* PrimaryFireSound1P; // 0x260 (0x8)
	bool bOverridePrimaryFireSoundArray; // 0x268 (0x1)
	unsigned char unreflected_269[0x7]; // 0x269 (0x7) 
	class USoundBase* PrimaryFireSound[0x3]; // 0x270 (0x8) (ARRAY) 
	class UAnimMontage* OverrideWeaponFireMontage; // 0x288 (0x8)
	class UAnimMontage* OverrideWeaponFireDownsightsMontage; // 0x290 (0x8)
	class UAnimMontage* OverrideWeaponFireFromCrouchWalkMontage; // 0x298 (0x8)
	class UAnimMontage* OverrideWeaponReloadMontage; // 0x2a0 (0x8)
	class UAnimMontage* OverridePawnReloadMontage; // 0x2a8 (0x8)
	bool bShouldOverrideReloadType; // 0x2b0 (0x1)
	enum EFortWeaponReloadType OverrideReloadType; // 0x2b1 (0x1)
	unsigned char unreflected_2b2[0x2]; // 0x2b2 (0x2) 
	float OverrideReloadDuration; // 0x2b4 (0x4)
};

