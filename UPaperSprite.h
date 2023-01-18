// Class /Script/Paper2D.PaperSprite
// Size: 0xb8
class UPaperSprite : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct TArray<class UTexture*> AdditionalSourceTextures; // 0x38 (0x10)
	struct FVector2D BakedSourceUV; // 0x48 (0x10)
	struct FVector2D BakedSourceDimension; // 0x58 (0x10)
	class UTexture2D* BakedSourceTexture; // 0x68 (0x8)
	class UMaterialInterface* DefaultMaterial; // 0x70 (0x8)
	class UMaterialInterface* AlternateMaterial; // 0x78 (0x8)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x80 (0x10)
	struct TEnumAsByte<ESpriteCollisionMode> SpriteCollisionDomain; // 0x90 (0x1)
	unsigned char unreflected_91[0x3]; // 0x91 (0x3) 
	float PixelsPerUnrealUnit; // 0x94 (0x4)
	class UBodySetup* BodySetup; // 0x98 (0x8)
	int AlternateMaterialSplitIndex; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct TArray<struct FVector4> BakedRenderData; // 0xa8 (0x10)
};

