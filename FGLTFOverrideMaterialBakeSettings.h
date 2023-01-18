// ScriptStruct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
// Size: 0x6
struct FGLTFOverrideMaterialBakeSettings
{
	bool bOverrideSize; // 0x0 (0x1)
	enum EGLTFMaterialBakeSizePOT Size; // 0x1 (0x1)
	bool bOverrideFilter; // 0x2 (0x1)
	struct TEnumAsByte<TextureFilter> Filter; // 0x3 (0x1)
	bool bOverrideTiling; // 0x4 (0x1)
	struct TEnumAsByte<TextureAddress> Tiling; // 0x5 (0x1)
};

