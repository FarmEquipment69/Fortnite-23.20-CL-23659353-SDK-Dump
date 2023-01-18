// Class /Script/Engine.VectorFieldAnimated
// Size: 0xa8
class UVectorFieldAnimated : public UVectorField
{
	class UTexture2D* Texture; // 0x68 (0x8)
	struct TEnumAsByte<EVectorFieldConstructionOp> ConstructionOp; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	int VolumeSizeX; // 0x74 (0x4)
	int VolumeSizeY; // 0x78 (0x4)
	int VolumeSizeZ; // 0x7c (0x4)
	int SubImagesX; // 0x80 (0x4)
	int SubImagesY; // 0x84 (0x4)
	int FrameCount; // 0x88 (0x4)
	float FramesPerSecond; // 0x8c (0x4)
	unsigned char bLoop; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	class UVectorFieldStatic* NoiseField; // 0x98 (0x8)
	float NoiseScale; // 0xa0 (0x4)
	float NoiseMax; // 0xa4 (0x4)
};

