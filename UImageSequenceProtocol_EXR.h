// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xe8
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
	bool bCompressed; // 0xd8 (0x1)
	struct TEnumAsByte<EHDRCaptureGamut> CaptureGamut; // 0xd9 (0x1)
	unsigned char padding_da[0xe]; // 0xda (0xe)
};

