// ScriptStruct /Script/FortniteGame.CreativeItemTemplateData
// Size: 0xa0
struct FCreativeItemTemplateData
{
	struct FItemVariantHandle VariantHandle; // 0x0 (0x18)
	struct FGuid SourceItemVariantGuid; // 0x18 (0x10)
	struct FGameplayTagContainer SourceTags; // 0x28 (0x20)
	struct FPropertyOverrideData ItemOptionData; // 0x48 (0x50)
	bool bEnabled; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)
};

