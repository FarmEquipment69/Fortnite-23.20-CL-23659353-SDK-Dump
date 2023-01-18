// ScriptStruct /Script/Engine.MaterialSpriteElement
// Size: 0x28
struct FMaterialSpriteElement
{
	class UMaterialInterface* Material; // 0x0 (0x8)
	class UCurveFloat* DistanceToOpacityCurve; // 0x8 (0x8)
	unsigned char bSizeIsInScreenSpace; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float BaseSizeX; // 0x14 (0x4)
	float BaseSizeY; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UCurveFloat* DistanceToSizeCurve; // 0x20 (0x8)
};

