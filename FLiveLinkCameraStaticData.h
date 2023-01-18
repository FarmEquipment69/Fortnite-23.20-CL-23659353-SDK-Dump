// ScriptStruct /Script/LiveLinkInterface.LiveLinkCameraStaticData
// Size: 0x28
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData
{
	bool bIsFieldOfViewSupported; // 0x18 (0x1)
	bool bIsAspectRatioSupported; // 0x19 (0x1)
	bool bIsFocalLengthSupported; // 0x1a (0x1)
	bool bIsProjectionModeSupported; // 0x1b (0x1)
	float FilmBackWidth; // 0x1c (0x4)
	float FilmBackHeight; // 0x20 (0x4)
	bool bIsApertureSupported; // 0x24 (0x1)
	bool bIsFocusDistanceSupported; // 0x25 (0x1)
	bool bIsDepthOfFieldSupported; // 0x26 (0x1)
	unsigned char padding_27[0x1]; // 0x27 (0x1)
};

