// ScriptStruct /Script/FortniteGame.FortTooltipDisplayStatInfo
// Size: 0x68
struct FFortTooltipDisplayStatInfo
{
	struct FGameplayTag Token; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FGameplayAttribute Attribute; // 0x8 (0x38)
	struct FGameplayTagContainer ContextTags; // 0x40 (0x20)
	bool bLowerIsBetter; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

