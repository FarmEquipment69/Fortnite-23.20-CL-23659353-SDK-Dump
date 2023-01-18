// Class /Script/FortniteGame.FortWrapVariantPreviewGenerator
// Size: 0x98
class UFortWrapVariantPreviewGenerator : public UFortVariantPreviewGenerator
{
	struct FGameplayTag WrapVariantChannelTag; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FFortCosmeticVariantPreview BaseVariantPreview; // 0x30 (0x40)
	int NumWrapPreviews; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct TArray<struct TWeakObjectPtr<class UAthenaItemWrapDefinition>> PreviewWrapDefinitions; // 0x78 (0x10)
	struct FString DefaultCustomData; // 0x88 (0x10)
};

