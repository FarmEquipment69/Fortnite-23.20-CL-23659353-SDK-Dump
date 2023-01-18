// ScriptStruct /Script/FortniteUI.TagFilterOverride
// Size: 0x48
struct FTagFilterOverride
{
	struct FGameplayTagContainer OverridingTags; // 0x0 (0x20)
	enum ETagComparisonType ComparisonTypeToOverride; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct FGameplayTagContainer TagsToFilterOut; // 0x28 (0x20)
};

