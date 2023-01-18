// Class /Script/Engine.MaterialExpressionMakeMaterialAttributes
// Size: 0x4c0
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
	struct FExpressionInput BaseColor; // 0xb0 (0x28)
	struct FExpressionInput Metallic; // 0xd8 (0x28)
	struct FExpressionInput Specular; // 0x100 (0x28)
	struct FExpressionInput Roughness; // 0x128 (0x28)
	struct FExpressionInput Anisotropy; // 0x150 (0x28)
	struct FExpressionInput EmissiveColor; // 0x178 (0x28)
	struct FExpressionInput Opacity; // 0x1a0 (0x28)
	struct FExpressionInput OpacityMask; // 0x1c8 (0x28)
	struct FExpressionInput Normal; // 0x1f0 (0x28)
	struct FExpressionInput Tangent; // 0x218 (0x28)
	struct FExpressionInput WorldPositionOffset; // 0x240 (0x28)
	struct FExpressionInput SubsurfaceColor; // 0x268 (0x28)
	struct FExpressionInput ClearCoat; // 0x290 (0x28)
	struct FExpressionInput ClearCoatRoughness; // 0x2b8 (0x28)
	struct FExpressionInput AmbientOcclusion; // 0x2e0 (0x28)
	struct FExpressionInput Refraction; // 0x308 (0x28)
	struct FExpressionInput CustomizedUVs[0x8]; // 0x330 (0x28) (ARRAY) 
	struct FExpressionInput PixelDepthOffset; // 0x470 (0x28)
	struct FExpressionInput ShadingModel; // 0x498 (0x28)
};

