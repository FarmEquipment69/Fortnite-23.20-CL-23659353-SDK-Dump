// Class /Script/GLTFExporter.GLTFMaterialExportOptions
// Size: 0x88
class UGLTFMaterialExportOptions : public UAssetUserData
{
	class UMaterialInterface* Proxy; // 0x28 (0x8)
	struct FGLTFOverrideMaterialBakeSettings Default; // 0x30 (0x6)
	unsigned char unreflected_36[0x2]; // 0x36 (0x2) 
	struct TMap<enum EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs; // 0x38 (0x50)
};

