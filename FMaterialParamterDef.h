// ScriptStruct /Script/FortniteGame.MaterialParamterDef
// Size: 0x68
struct FMaterialParamterDef
{
	struct TWeakObjectPtr<class UMaterialInterface> MaterialToAlter; // 0x0 (0x28)
	struct FName CascadeMaterialName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FMaterialVectorVariant> ColorParams; // 0x30 (0x10)
	struct TArray<struct FMaterialTextureVariant> TextureParams; // 0x40 (0x10)
	struct TArray<struct FMaterialFloatVariant*> FloatParams; // 0x50 (0x10)
	unsigned char padding_60[0x8]; // 0x60 (0x8)
};

