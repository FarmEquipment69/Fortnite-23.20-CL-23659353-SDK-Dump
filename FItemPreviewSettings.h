// ScriptStruct /Script/FortniteUI.ItemPreviewSettings
// Size: 0xa8
struct FItemPreviewSettings
{
	class UFortAccountItemDefinition* ItemToView; // 0x0 (0x8)
	int SubslotIndex; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FGameplayTagContainer PreviewExcludedTags; // 0x10 (0x20)
	int ItemVariantPreviewIndex; // 0x30 (0x4)
	unsigned char unreflected_34[0x4c]; // 0x34 (0x4c) 
	bool bHasEtherealBackground; // 0x80 (0x1)
	unsigned char unreflected_81[0xf]; // 0x81 (0xf) 
	struct TArray<struct FVaultVariantOverrideOption> VariantOverrides; // 0x90 (0x10)
	unsigned char padding_a0[0x8]; // 0xa0 (0x8)
};

