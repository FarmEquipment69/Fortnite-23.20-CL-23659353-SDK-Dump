// ScriptStruct /Script/Procedural.ProceduralTextureSource
// Size: 0x38
struct FProceduralTextureSource
{
	bool bUseRenderTarget; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UTexture2D* Texture; // 0x8 (0x8)
	class UTextureRenderTarget2D* RenderTarget; // 0x10 (0x8)
	class UMaterialInterface* RenderTargetMaterial; // 0x18 (0x8)
	bool bStretchToFit; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float TexelSize; // 0x24 (0x4)
	float XOffset; // 0x28 (0x4)
	float YOffset; // 0x2c (0x4)
	float Rotation; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

