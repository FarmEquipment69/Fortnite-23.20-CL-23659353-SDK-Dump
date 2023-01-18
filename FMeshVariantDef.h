// ScriptStruct /Script/FortniteGame.MeshVariantDef
// Size: 0x170
struct FMeshVariantDef : FBaseVariantDef
{
	struct TArray<struct FMeshVariant> VariantMeshes; // 0x90 (0x10)
	struct TArray<struct FMaterialVariants> VariantMaterials; // 0xa0 (0x10)
	struct TArray<struct FMaterialParamterDef> VariantMaterialParams; // 0xb0 (0x10)
	struct TArray<struct FVariantParticleSystemInitializerData> InitialParticleSystemData; // 0xc0 (0x10)
	struct TArray<struct FParticleVariant> VariantParticles; // 0xd0 (0x10)
	struct TArray<struct FParticleParamterVariant> VariantParticleParams; // 0xe0 (0x10)
	struct TArray<struct FSocketTransformVariant> SocketTransforms; // 0xf0 (0x10)
	struct TArray<struct FSoundVariant> VariantSounds; // 0x100 (0x10)
	struct TArray<struct FFoleySoundVariant> VariantFoley; // 0x110 (0x10)
	struct TArray<struct FScriptedActionVariant*> VariantActions; // 0x120 (0x10)
	struct FCosmeticMetaTagContainer MetaTags; // 0x130 (0x40)
};

