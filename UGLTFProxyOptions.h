// Class /Script/GLTFExporter.GLTFProxyOptions
// Size: 0x80
class UGLTFProxyOptions : public UObject
{
	bool bBakeMaterialInputs; // 0x28 (0x1)
	enum EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize; // 0x29 (0x1)
	struct TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter; // 0x2a (0x1)
	struct TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling; // 0x2b (0x1)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TMap<enum EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x30 (0x50)

	/* Functions */

	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault (Underlying native function: ResetToDefault 0x8005964)
	void ResetToDefault(); // (Final | Native | Public | BlueprintCallable)
};

