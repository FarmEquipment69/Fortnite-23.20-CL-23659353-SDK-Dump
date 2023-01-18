// Class /Script/Engine.MaterialInstance
// Size: 0x1f0
class UMaterialInstance : public UMaterialInterface
{
	class UPhysicalMaterial* PhysMaterial; // 0x98 (0x8)
	class UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0xa0 (0x8) (ARRAY) 
	class UMaterialInterface* Parent; // 0xe0 (0x8)
	struct FMaterialOverrideNanite NaniteOverrideMaterial; // 0xe8 (0x38)
	unsigned char bHasStaticPermutationResource; // 0x120 (0x1)
	unsigned char bOverrideSubsurfaceProfile; // 0x120 (0x1)
	unsigned char unreflected_121[0x7]; // 0x121 (0x7) 
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; // 0x128 (0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues; // 0x138 (0x10)
	struct TArray<struct FDoubleVectorParameterValue> DoubleVectorParameterValues; // 0x148 (0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues; // 0x158 (0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x168 (0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues; // 0x178 (0x10)
	struct FMaterialInstanceBasePropertyOverrides* BasePropertyOverrides; // 0x188 (0x8)
	unsigned char unreflected_190[0x8]; // 0x190 (0x8) 
	struct FStaticParameterSetRuntimeData StaticParametersRuntime; // 0x198 (0x28)
	unsigned char padding_1c0[0x30]; // 0x1c0 (0x30)
};

