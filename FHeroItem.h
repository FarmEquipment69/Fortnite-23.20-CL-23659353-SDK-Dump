// ScriptStruct /Script/FortniteGame.HeroItem
// Size: 0x78
struct FHeroItem
{
	struct TWeakObjectPtr<class UFortWorldItemDefinition> Item; // 0x0 (0x28)
	int Quantity; // 0x28 (0x4)
	struct TEnumAsByte<EFortReplenishmentType> Replenishment; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FGameplayTagContainer RequiredGPTags; // 0x30 (0x20)
	struct FGameplayTagContainer SwapTag; // 0x50 (0x20)
	bool bShowInAbilityScreen; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

