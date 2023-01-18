// ScriptStruct /Script/FortniteGame.ApplyWrapVariantDef
// Size: 0x1c8
struct FApplyWrapVariantDef : FBaseVariantDef
{
	struct FApplyWrapVariant InnerDef; // 0x90 (0xd0)
	struct FCosmeticMetaTagContainer MetaTags; // 0x160 (0x40)
	struct FGameplayTagContainer FilterOutItemsWithTags; // 0x1a0 (0x20)
	bool bAllowClear; // 0x1c0 (0x1)
	unsigned char padding_1c1[0x7]; // 0x1c1 (0x7)
};

