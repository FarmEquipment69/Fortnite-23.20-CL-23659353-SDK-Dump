// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xc0
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58 (0x10)
	bool bCaptureFramesInHDR; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	int HDRCompressionQuality; // 0x6c (0x4)
	struct TEnumAsByte<EHDRCaptureGamut> CaptureGamut; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	struct FSoftObjectPath PostProcessingMaterial; // 0x78 (0x18)
	bool bDisableScreenPercentage; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	class UMaterialInterface* PostProcessingMaterialPtr; // 0x98 (0x8)
	unsigned char padding_a0[0x20]; // 0xa0 (0x20)
};

