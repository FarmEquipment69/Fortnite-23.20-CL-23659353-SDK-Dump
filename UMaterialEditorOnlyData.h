// Class /Script/Engine.MaterialEditorOnlyData
// Size: 0x618
class UMaterialEditorOnlyData : public UMaterialInterfaceEditorOnlyData
{
	struct FColorMaterialInput BaseColor; // 0x40 (0x30)
	struct FScalarMaterialInput Metallic; // 0x70 (0x30)
	struct FScalarMaterialInput Specular; // 0xa0 (0x30)
	struct FScalarMaterialInput Roughness; // 0xd0 (0x30)
	struct FScalarMaterialInput Anisotropy; // 0x100 (0x30)
	struct FVectorMaterialInput Normal; // 0x130 (0x38)
	struct FVectorMaterialInput Tangent; // 0x168 (0x38)
	struct FColorMaterialInput EmissiveColor; // 0x1a0 (0x30)
	struct FScalarMaterialInput Opacity; // 0x1d0 (0x30)
	struct FScalarMaterialInput OpacityMask; // 0x200 (0x30)
	struct FVectorMaterialInput WorldPositionOffset; // 0x230 (0x38)
	struct FColorMaterialInput SubsurfaceColor; // 0x268 (0x30)
	struct FScalarMaterialInput ClearCoat; // 0x298 (0x30)
	struct FScalarMaterialInput ClearCoatRoughness; // 0x2c8 (0x30)
	struct FScalarMaterialInput AmbientOcclusion; // 0x2f8 (0x30)
	struct FScalarMaterialInput Refraction; // 0x328 (0x30)
	struct FVector2MaterialInput CustomizedUVs[0x8]; // 0x358 (0x38) (ARRAY) 
	struct FMaterialAttributesInput MaterialAttributes; // 0x518 (0x30)
	struct FScalarMaterialInput PixelDepthOffset; // 0x548 (0x30)
	struct FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x578 (0x28)
	unsigned char unreflected_5a0[0x8]; // 0x5a0 (0x8) 
	struct FStrataMaterialInput FrontMaterial; // 0x5a8 (0x28)
	unsigned char unreflected_5d0[0x8]; // 0x5d0 (0x8) 
	struct FMaterialExpressionCollection ExpressionCollection; // 0x5d8 (0x30)
	struct TArray<struct FParameterGroupData> ParameterGroupData; // 0x608 (0x10)
};

