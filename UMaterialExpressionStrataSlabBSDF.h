// Class /Script/Engine.MaterialExpressionStrataSlabBSDF
// Size: 0x3e0
class UMaterialExpressionStrataSlabBSDF : public UMaterialExpressionStrataBSDF
{
	struct FExpressionInput BaseColor; // 0xb0 (0x28)
	struct FExpressionInput EdgeColor; // 0xd8 (0x28)
	struct FExpressionInput Metallic; // 0x100 (0x28)
	struct FExpressionInput Specular; // 0x128 (0x28)
	struct FExpressionInput DiffuseAlbedo; // 0x150 (0x28)
	struct FExpressionInput F0; // 0x178 (0x28)
	struct FExpressionInput F90; // 0x1a0 (0x28)
	struct FExpressionInput Roughness; // 0x1c8 (0x28)
	struct FExpressionInput Anisotropy; // 0x1f0 (0x28)
	struct FExpressionInput Normal; // 0x218 (0x28)
	struct FExpressionInput Tangent; // 0x240 (0x28)
	struct FExpressionInput SSSMFP; // 0x268 (0x28)
	struct FExpressionInput SSSMFPScale; // 0x290 (0x28)
	struct FExpressionInput SSSPhaseAnisotropy; // 0x2b8 (0x28)
	struct FExpressionInput EmissiveColor; // 0x2e0 (0x28)
	struct FExpressionInput SecondRoughness; // 0x308 (0x28)
	struct FExpressionInput SecondRoughnessWeight; // 0x330 (0x28)
	struct FExpressionInput Thickness; // 0x358 (0x28)
	struct FExpressionInput FuzzAmount; // 0x380 (0x28)
	struct FExpressionInput FuzzColor; // 0x3a8 (0x28)
	class USubsurfaceProfile* SubsurfaceProfile; // 0x3d0 (0x8)
	unsigned char bUseMetalness; // 0x3d8 (0x1)
	unsigned char bUseSSSDiffusion; // 0x3d8 (0x1)
	unsigned char padding_3d9[0x7]; // 0x3d9 (0x7)
};

