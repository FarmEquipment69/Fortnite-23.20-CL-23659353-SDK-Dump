// ScriptStruct /Script/FortniteGame.FortVariantData
// Size: 0xc0
struct FFortVariantData
{
	struct FText VariantName; // 0x0 (0x18)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> OverrideMaterials; // 0x18 (0x10)
	struct FScalableFloat Weight; // 0x28 (0x28)
	struct FGameplayTag ItemFilterTag; // 0x50 (0x4)
	struct FGameplayTag CollectionTag; // 0x54 (0x4)
	struct FGameplayTag AnalyticsTag; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FGameplayTagContainer PoiTags; // 0x60 (0x20)
	struct FGameplayTagContainer TODTags; // 0x80 (0x20)
	struct FGameplayTagContainer RequiredTags; // 0xa0 (0x20)
};

