// ScriptStruct /Script/FortniteGame.FortCosmeticModification
// Size: 0x650
struct FFortCosmeticModification
{
	struct TWeakObjectPtr<class UMaterialInterface> CosmeticMaterial; // 0x0 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> AmbientParticleSystem; // 0x28 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> MuzzleParticleSystem; // 0x50 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> MuzzleNiagaraSystem; // 0x78 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> ReloadParticleSystem; // 0xa0 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> BeamParticleSystem; // 0xc8 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> BeamNiagaraSystem; // 0xf0 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> ImpactPhysicalSurfaceEffects[0x1e]; // 0x118 (0x28) (ARRAY) 
	struct TArray<struct TWeakObjectPtr<class UNiagaraSystem>> ImpactNiagaraPhysicalSurfaceEffects; // 0x5c8 (0x10)
	struct TWeakObjectPtr<class UClass> TracerTemplate; // 0x5d8 (0x28)
	bool bModifyColor; // 0x600 (0x1)
	unsigned char unreflected_601[0x3]; // 0x601 (0x3) 
	struct FLinearColor ColorAlteration; // 0x604 (0x10)
	struct FName ColorParameterName; // 0x614 (0x4)
	bool bModifyDecalColour; // 0x618 (0x1)
	unsigned char unreflected_619[0x3]; // 0x619 (0x3) 
	struct FLinearColor DecalColourAlterationStart; // 0x61c (0x10)
	struct FLinearColor DecalColourAlterationEnd; // 0x62c (0x10)
	bool bModifyShellColour; // 0x63c (0x1)
	unsigned char unreflected_63d[0x3]; // 0x63d (0x3) 
	struct FLinearColor ShellColourAlteration; // 0x640 (0x10)
};

