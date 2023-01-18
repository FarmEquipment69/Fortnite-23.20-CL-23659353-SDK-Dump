// ScriptStruct /Script/FortniteGame.ParticleVariantDef
// Size: 0x130
struct FParticleVariantDef : FBaseVariantDef
{
	struct TArray<struct FMaterialVariants> VariantMaterials; // 0x90 (0x10)
	struct TArray<struct FMaterialParamterDef> VariantMaterialParams; // 0xa0 (0x10)
	struct TArray<struct FVariantParticleSystemInitializerData> InitialParticleSystemData; // 0xb0 (0x10)
	struct TArray<struct FParticleVariant> VariantParticles; // 0xc0 (0x10)
	struct TArray<struct FParticleParamterVariant> VariantParticleParams; // 0xd0 (0x10)
	struct TArray<struct FSoundVariant> VariantSounds; // 0xe0 (0x10)
	struct FCosmeticMetaTagContainer MetaTags; // 0xf0 (0x40)
};

