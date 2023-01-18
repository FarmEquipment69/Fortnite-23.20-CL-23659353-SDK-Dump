// Class /Script/Engine.MaterialExpressionSpeedTree
// Size: 0x160
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
	struct FExpressionInput GeometryInput; // 0xb0 (0x28)
	struct FExpressionInput WindInput; // 0xd8 (0x28)
	struct FExpressionInput LODInput; // 0x100 (0x28)
	struct FExpressionInput ExtraBendWS; // 0x128 (0x28)
	struct TEnumAsByte<ESpeedTreeGeometryType> GeometryType; // 0x150 (0x1)
	struct TEnumAsByte<ESpeedTreeWindType> WindType; // 0x151 (0x1)
	struct TEnumAsByte<ESpeedTreeLODType> LODType; // 0x152 (0x1)
	unsigned char unreflected_153[0x1]; // 0x153 (0x1) 
	float BillboardThreshold; // 0x154 (0x4)
	bool bAccurateWindVelocities; // 0x158 (0x1)
	unsigned char padding_159[0x7]; // 0x159 (0x7)
};

