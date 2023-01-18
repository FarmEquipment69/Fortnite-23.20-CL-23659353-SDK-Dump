// ScriptStruct /Script/LiveLinkInterface.LiveLinkCameraFrameData
// Size: 0x120
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData
{
	float FieldOfView; // 0x100 (0x4)
	float AspectRatio; // 0x104 (0x4)
	float FocalLength; // 0x108 (0x4)
	float Aperture; // 0x10c (0x4)
	float FocusDistance; // 0x110 (0x4)
	enum ELiveLinkCameraProjectionMode ProjectionMode; // 0x114 (0x1)
	unsigned char padding_115[0xb]; // 0x115 (0xb)
};

