// Class /Script/Engine.MaterialExpressionStrataEyeBSDF
// Size: 0x1f8
class UMaterialExpressionStrataEyeBSDF : public UMaterialExpressionStrataBSDF
{
	struct FExpressionInput DiffuseColor; // 0xb0 (0x28)
	struct FExpressionInput Roughness; // 0xd8 (0x28)
	struct FExpressionInput CorneaNormal; // 0x100 (0x28)
	struct FExpressionInput IrisNormal; // 0x128 (0x28)
	struct FExpressionInput IrisPlaneNormal; // 0x150 (0x28)
	struct FExpressionInput IrisMask; // 0x178 (0x28)
	struct FExpressionInput IrisDistance; // 0x1a0 (0x28)
	struct FExpressionInput EmissiveColor; // 0x1c8 (0x28)
	class USubsurfaceProfile* SubsurfaceProfile; // 0x1f0 (0x8)
};

