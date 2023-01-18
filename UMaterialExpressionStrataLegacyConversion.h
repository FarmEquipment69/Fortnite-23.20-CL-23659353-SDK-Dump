// Class /Script/Engine.MaterialExpressionStrataLegacyConversion
// Size: 0x3f8
class UMaterialExpressionStrataLegacyConversion : public UMaterialExpressionStrataBSDF
{
	struct FExpressionInput BaseColor; // 0xb0 (0x28)
	struct FExpressionInput Metallic; // 0xd8 (0x28)
	struct FExpressionInput Specular; // 0x100 (0x28)
	struct FExpressionInput Roughness; // 0x128 (0x28)
	struct FExpressionInput Anisotropy; // 0x150 (0x28)
	struct FExpressionInput EmissiveColor; // 0x178 (0x28)
	struct FExpressionInput Normal; // 0x1a0 (0x28)
	struct FExpressionInput Tangent; // 0x1c8 (0x28)
	struct FExpressionInput SubsurfaceColor; // 0x1f0 (0x28)
	struct FExpressionInput ClearCoat; // 0x218 (0x28)
	struct FExpressionInput ClearCoatRoughness; // 0x240 (0x28)
	struct FExpressionInput Opacity; // 0x268 (0x28)
	struct FExpressionInput TransmittanceColor; // 0x290 (0x28)
	struct FExpressionInput WaterScatteringCoefficients; // 0x2b8 (0x28)
	struct FExpressionInput WaterAbsorptionCoefficients; // 0x2e0 (0x28)
	struct FExpressionInput WaterPhaseG; // 0x308 (0x28)
	struct FExpressionInput ColorScaleBehindWater; // 0x330 (0x28)
	struct FExpressionInput ClearCoatNormal; // 0x358 (0x28)
	struct FExpressionInput CustomTangent; // 0x380 (0x28)
	struct FShadingModelMaterialInput ShadingModel; // 0x3a8 (0x28)
	unsigned char unreflected_3d0[0x8]; // 0x3d0 (0x8) 
	class USubsurfaceProfile* SubsurfaceProfile; // 0x3d8 (0x8)
	struct FStrataMaterialInfo ConvertedStrataMaterialInfo; // 0x3e0 (0x18)
};

