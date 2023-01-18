// Class /Script/Engine.MaterialFunctionInstance
// Size: 0xd0
class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
	class UMaterialFunctionInterface* Parent; // 0x40 (0x8)
	class UMaterialFunctionInterface* Base; // 0x48 (0x8)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; // 0x50 (0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues; // 0x60 (0x10)
	struct TArray<struct FDoubleVectorParameterValue> DoubleVectorParameterValues; // 0x70 (0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues; // 0x80 (0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues; // 0x90 (0x10)
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameterValues; // 0xa0 (0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xb0 (0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xc0 (0x10)
};

