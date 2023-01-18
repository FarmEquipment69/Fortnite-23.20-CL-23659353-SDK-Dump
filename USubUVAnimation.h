// Class /Script/Engine.SubUVAnimation
// Size: 0x68
class USubUVAnimation : public UObject
{
	class UTexture2D* SubUVTexture; // 0x28 (0x8)
	int SubImagesHorizontal; // 0x30 (0x4)
	int SubImagesVertical; // 0x34 (0x4)
	struct TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode; // 0x38 (0x1)
	struct TEnumAsByte<EOpacitySourceMode> OpacitySourceMode; // 0x39 (0x1)
	unsigned char unreflected_3a[0x2]; // 0x3a (0x2) 
	float AlphaThreshold; // 0x3c (0x4)
	unsigned char padding_40[0x28]; // 0x40 (0x28)
};

