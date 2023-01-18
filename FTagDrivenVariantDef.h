// ScriptStruct /Script/FortniteGame.TagDrivenVariantDef
// Size: 0x1f0
struct FTagDrivenVariantDef : FPartVariantDef
{
	struct TArray<struct FEmoteMontageSwap> MontageSwaps; // 0x180 (0x10)
	struct FGameplayTagContainer RequiredMetaTags; // 0x190 (0x20)
	struct FGameplayTagContainer ExcludedMetaTags; // 0x1b0 (0x20)
	struct TArray<struct FCosmeticMetaTagCondition> RequiredConditions; // 0x1d0 (0x10)
	struct TArray<struct FCosmeticMetaTagCondition> ExcludedConditions; // 0x1e0 (0x10)
};

