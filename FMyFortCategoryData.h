// ScriptStruct /Script/FortniteGame.MyFortCategoryData
// Size: 0x58
struct FMyFortCategoryData
{
	struct FText CategoryName; // 0x0 (0x18)
	struct FGameplayTag TooltipTag; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagContainer ModifiedTagContainer; // 0x20 (0x20)
	bool bIsCore; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct TArray<struct FGameplayAttribute> Attributes; // 0x48 (0x10)
};

