// ScriptStruct /Script/FortniteGame.QuestCategoryHeaderData
// Size: 0x68
struct FQuestCategoryHeaderData
{
	struct FText HeaderName; // 0x0 (0x18)
	struct FGameplayTag HeaderTag; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagContainer IncludedGameModeTags; // 0x20 (0x20)
	struct FGameplayTagContainer DisabledGameModeTags; // 0x40 (0x20)
	int HeaderSortOrder; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

