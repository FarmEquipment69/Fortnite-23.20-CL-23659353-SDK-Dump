// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0xc8
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
	struct TEnumAsByte<ETerrainCoordMappingType> MappingType; // 0xb0 (0x1)
	struct TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType; // 0xb1 (0x1)
	unsigned char unreflected_b2[0x2]; // 0xb2 (0x2) 
	float MappingScale; // 0xb4 (0x4)
	float MappingRotation; // 0xb8 (0x4)
	float MappingPanU; // 0xbc (0x4)
	float MappingPanV; // 0xc0 (0x4)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)
};

