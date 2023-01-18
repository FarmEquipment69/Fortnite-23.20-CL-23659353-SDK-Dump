// Class /Script/Engine.MaterialExpressionTextureCoordinate
// Size: 0xc0
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
	int CoordinateIndex; // 0xb0 (0x4)
	float UTiling; // 0xb4 (0x4)
	float VTiling; // 0xb8 (0x4)
	unsigned char UnMirrorU; // 0xbc (0x1)
	unsigned char UnMirrorV; // 0xbc (0x1)
	unsigned char padding_bd[0x3]; // 0xbd (0x3)
};

