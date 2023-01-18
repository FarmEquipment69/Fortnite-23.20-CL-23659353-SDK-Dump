// ScriptStruct /Script/FortniteGame.ItemTextureVariantDef
// Size: 0x120
struct FItemTextureVariantDef : FBaseVariantDef
{
	struct FItemTextureVariant InnerDef; // 0x90 (0x28)
	struct FCosmeticMetaTagContainer MetaTags; // 0xb8 (0x40)
	struct FGameplayTagContainer FilterOutItemsWithTags; // 0xf8 (0x20)
	bool bWantsSprays; // 0x118 (0x1)
	bool bWantsEmoji; // 0x119 (0x1)
	bool bAllowClear; // 0x11a (0x1)
	unsigned char padding_11b[0x5]; // 0x11b (0x5)
};

