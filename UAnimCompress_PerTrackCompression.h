// Class /Script/Engine.AnimCompress_PerTrackCompression
// Size: 0xd8
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
	float MaxZeroingThreshold; // 0x60 (0x4)
	float MaxPosDiffBitwise; // 0x64 (0x4)
	float MaxAngleDiffBitwise; // 0x68 (0x4)
	float MaxScaleDiffBitwise; // 0x6c (0x4)
	struct TArray<struct TEnumAsByte<AnimationCompressionFormat>> AllowedRotationFormats; // 0x70 (0x10)
	struct TArray<struct TEnumAsByte<AnimationCompressionFormat>> AllowedTranslationFormats; // 0x80 (0x10)
	struct TArray<struct TEnumAsByte<AnimationCompressionFormat>> AllowedScaleFormats; // 0x90 (0x10)
	unsigned char bResampleAnimation; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	float ResampledFramerate; // 0xa4 (0x4)
	int MinKeysForResampling; // 0xa8 (0x4)
	unsigned char bUseAdaptiveError; // 0xac (0x1)
	unsigned char bUseOverrideForEndEffectors; // 0xac (0x1)
	unsigned char unreflected_ad[0x3]; // 0xad (0x3) 
	int TrackHeightBias; // 0xb0 (0x4)
	float ParentingDivisor; // 0xb4 (0x4)
	float ParentingDivisorExponent; // 0xb8 (0x4)
	unsigned char bUseAdaptiveError2; // 0xbc (0x1)
	unsigned char unreflected_bd[0x3]; // 0xbd (0x3) 
	float RotationErrorSourceRatio; // 0xc0 (0x4)
	float TranslationErrorSourceRatio; // 0xc4 (0x4)
	float ScaleErrorSourceRatio; // 0xc8 (0x4)
	float MaxErrorPerTrackRatio; // 0xcc (0x4)
	float PerturbationProbeSize; // 0xd0 (0x4)
	unsigned char padding_d4[0x4]; // 0xd4 (0x4)
};

