// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// Size: 0x70
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
	enum ELiveLinkAxis FrontAxis; // 0x28 (0x1)
	enum ELiveLinkAxis RightAxis; // 0x29 (0x1)
	enum ELiveLinkAxis UpAxis; // 0x2a (0x1)
	bool bUseOffsetPosition; // 0x2b (0x1)
	bool bUseOffsetOrientation; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FVector OffsetPosition; // 0x30 (0x18)
	struct FRotator OffsetOrientation; // 0x48 (0x18)
	unsigned char padding_60[0x10]; // 0x60 (0x10)
};

