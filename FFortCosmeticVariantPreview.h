// ScriptStruct /Script/FortniteGame.FortCosmeticVariantPreview
// Size: 0x40
struct FFortCosmeticVariantPreview
{
	struct FText UnlockCondition; // 0x0 (0x18)
	float PreviewTime; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FMcpVariantChannelInfo> VariantOptions; // 0x20 (0x10)
	struct TArray<struct FFortCosmeticVariantPreviewElement> AdditionalItems; // 0x30 (0x10)
};

