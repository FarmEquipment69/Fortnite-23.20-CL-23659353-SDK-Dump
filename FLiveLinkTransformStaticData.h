// ScriptStruct /Script/LiveLinkInterface.LiveLinkTransformStaticData
// Size: 0x18
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData
{
	bool bIsLocationSupported; // 0x10 (0x1)
	bool bIsRotationSupported; // 0x11 (0x1)
	bool bIsScaleSupported; // 0x12 (0x1)
	unsigned char padding_13[0x5]; // 0x13 (0x5)
};

