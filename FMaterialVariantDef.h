// ScriptStruct /Script/FortniteGame.MaterialVariantDef
// Size: 0x110
struct FMaterialVariantDef : FBaseVariantDef
{
	struct TArray<struct FMaterialVariants> VariantMaterials; // 0x90 (0x10)
	struct TArray<struct FMaterialParamterDef> VariantMaterialParams; // 0xa0 (0x10)
	struct TArray<struct FSoundVariant> VariantSounds; // 0xb0 (0x10)
	struct TArray<struct FFoleySoundVariant> VariantFoley; // 0xc0 (0x10)
	struct FCosmeticMetaTagContainer MetaTags; // 0xd0 (0x40)
};

