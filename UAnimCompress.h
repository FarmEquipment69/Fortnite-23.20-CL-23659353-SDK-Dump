// Class /Script/Engine.AnimCompress
// Size: 0x40
class UAnimCompress : public UAnimBoneCompressionCodec
{
	unsigned char bNeedsSkeleton; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct TEnumAsByte<AnimationCompressionFormat> TranslationCompressionFormat; // 0x3c (0x1)
	struct TEnumAsByte<AnimationCompressionFormat> RotationCompressionFormat; // 0x3d (0x1)
	struct TEnumAsByte<AnimationCompressionFormat> ScaleCompressionFormat; // 0x3e (0x1)
	unsigned char padding_3f[0x1]; // 0x3f (0x1)
};

