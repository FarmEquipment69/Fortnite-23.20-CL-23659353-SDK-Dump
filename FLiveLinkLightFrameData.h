// ScriptStruct /Script/LiveLinkInterface.LiveLinkLightFrameData
// Size: 0x130
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData
{
	float Temperature; // 0x100 (0x4)
	float Intensity; // 0x104 (0x4)
	struct FColor LightColor; // 0x108 (0x4)
	float InnerConeAngle; // 0x10c (0x4)
	float OuterConeAngle; // 0x110 (0x4)
	float AttenuationRadius; // 0x114 (0x4)
	float SourceRadius; // 0x118 (0x4)
	float SoftSourceRadius; // 0x11c (0x4)
	float SourceLength; // 0x120 (0x4)
	unsigned char padding_124[0xc]; // 0x124 (0xc)
};

